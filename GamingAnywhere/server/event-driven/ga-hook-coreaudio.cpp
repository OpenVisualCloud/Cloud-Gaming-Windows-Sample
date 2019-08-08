/*
 * Copyright (c) 2012-2015 Chun-Ying Huang
 *
 * This file is part of GamingAnywhere (GA).
 *
 * GA is free software; you can redistribute it and/or modify it
 * under the terms of the 3-clause BSD License as published by the
 * Free Software Foundation: http://directory.fsf.org/wiki/License:BSD_3Clause
 *
 * GA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the 3-clause BSD License along with GA;
 * if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>

#include "ga-common.h"
#include "ga-avcodec.h"
#include "rtspconf.h"
#include "asource.h"
#include "ga-hook-common.h"
#include "ga-hook-coreaudio.h"

#define CA_MAX_SAMPLES	32768
#define MAX_THREAD_SIZE 3

struct ca_audio_params {
	int ca_bytes_per_sample = 0;
	int ca_samplerate = 0;
	int ga_samplerate = 0;
	int ga_channels = 0;
	void *renderClient = NULL;
	struct SwrContext *swrctx = NULL;
	unsigned char *audio_buf = NULL;
	char *buffer_data = NULL;
};

static ca_audio_params ca_audio_params_array[MAX_THREAD_SIZE];

static t_GetBuffer		old_GetBuffer = NULL;
static t_ReleaseBuffer		old_ReleaseBuffer = NULL;
static t_GetMixFormat		old_GetMixFormat = NULL;
static t_Initialize		old_Initialize = NULL;

#define	CA_DO_HOOK(name)	ga_hook_function(#name, old_##name, hook_##name)

static enum AVSampleFormat
CA2SWR_format(WAVEFORMATEX *w) {
	WAVEFORMATEXTENSIBLE *wex = (WAVEFORMATEXTENSIBLE*)w;
	switch (w->wFormatTag) {
	case WAVE_FORMAT_PCM:
	pcm:
		if (w->wBitsPerSample == 8)
			return AV_SAMPLE_FMT_U8;
		if (w->wBitsPerSample == 16)
			return AV_SAMPLE_FMT_S16;
		if (w->wBitsPerSample == 32)
			return AV_SAMPLE_FMT_S32;
		break;
	case WAVE_FORMAT_IEEE_FLOAT:
	ieee_float:
		if (w->wBitsPerSample == 32)
			return AV_SAMPLE_FMT_FLT;
		if (w->wBitsPerSample == 64)
			return AV_SAMPLE_FMT_DBL;
		break;
	case WAVE_FORMAT_EXTENSIBLE:
		if (wex->SubFormat == KSDATAFORMAT_SUBTYPE_PCM)
			goto pcm;
		if (wex->SubFormat == KSDATAFORMAT_SUBTYPE_IEEE_FLOAT)
			goto ieee_float;
		ga_error("CA2SWR: format %08lX-%04hX-%04hX-%02hhX%02hhX-%02hhX%02hhX%02hhX%02hhX%02hhX%02hhX is not supported.\n",
			wex->SubFormat.Data1,
			wex->SubFormat.Data2,
			wex->SubFormat.Data3,
			wex->SubFormat.Data4[0],
			wex->SubFormat.Data4[1],
			wex->SubFormat.Data4[2],
			wex->SubFormat.Data4[3],
			wex->SubFormat.Data4[4],
			wex->SubFormat.Data4[5],
			wex->SubFormat.Data4[6],
			wex->SubFormat.Data4[7]);
		exit(-1);
		break;
	default:
		ga_error("CA2SWR: format %x is not supported.\n", w->wFormatTag);
		exit(-1);
	}
	return AV_SAMPLE_FMT_NONE;
}

static int64_t
CA2SWR_chlayout(int channels) {
	if (channels == 1)
		return AV_CH_LAYOUT_MONO;
	if (channels == 2)
		return AV_CH_LAYOUT_STEREO;
	ga_error("CA2SWR: channel layout (%d) is not supported.\n", channels);
	exit(-1);
	return -1;
}

static pthread_mutex_t audio_mutex = PTHREAD_MUTEX_INITIALIZER;
static int
ca_create_swrctx(WAVEFORMATEX *w, IAudioClient *audioClient) {
	struct RTSPConf *rtspconf = rtspconf_global();
	int bufreq, samples;
	//
	void *pRenderClient = NULL;
	HRESULT hr = audioClient->GetService(__uuidof(IAudioRenderClient), (void **)&pRenderClient);
	if (hr != S_OK) {
		ga_error("Failed to obtain IAudioRenderClient \n");
		return -1;
	}

	pthread_mutex_lock(&audio_mutex);
	int thread_idx = -1;
	for (int i = 0; i < MAX_THREAD_SIZE; i++) {
		if (ca_audio_params_array[i].renderClient == pRenderClient) {
			thread_idx = i;
			break;
		}
	}

	if (thread_idx < 0) {//First call IAudioClient
		for (int i = 0; i < MAX_THREAD_SIZE; i++) {
			if (ca_audio_params_array[i].renderClient == NULL) {
				ca_audio_params_array[i].renderClient = pRenderClient;
				thread_idx = i;
				break;
			}
		}
	}
	pthread_mutex_unlock(&audio_mutex);

	if (thread_idx < 0) {
		ga_error("Process created to many voice threads\n");
		return -1;
	}

	if (ca_audio_params_array[thread_idx].swrctx != NULL)
		swr_free(&ca_audio_params_array[thread_idx].swrctx);
	if (ca_audio_params_array[thread_idx].audio_buf != NULL)
		free(ca_audio_params_array[thread_idx].audio_buf);
	//
	ga_error("CoreAudio: create swr context - format[%x] freq[%d] channels[%d]\n",
		w->wFormatTag, w->nSamplesPerSec, w->nChannels);
	//
	ca_audio_params_array[thread_idx].swrctx = swr_alloc_set_opts(NULL,
		rtspconf->audio_device_channel_layout,
		rtspconf->audio_device_format,
		rtspconf->audio_samplerate,
		CA2SWR_chlayout(w->nChannels),
		CA2SWR_format(w),
		w->nSamplesPerSec, 0, NULL);
	if (ca_audio_params_array[thread_idx].swrctx == NULL) {
		ga_error("CoreAudio: cannot create resample context.\n");
		return -1;
	}
	else {
		ga_error("CoreAudio: resample context (%x,%d,%d) -> (%x,%d,%d)\n",
			(int)CA2SWR_chlayout(w->nChannels),
			(int)CA2SWR_format(w),
			(int)w->nSamplesPerSec,
			(int)rtspconf->audio_device_channel_layout,
			(int)rtspconf->audio_device_format,
			(int)rtspconf->audio_samplerate);
	}
	if (swr_init(ca_audio_params_array[thread_idx].swrctx) < 0) {
		swr_free(&ca_audio_params_array[thread_idx].swrctx);
		ca_audio_params_array[thread_idx].swrctx = NULL;
		ga_error("CoreAudio: resample context init failed.\n");
		return -1;
	}
	// allocate buffer?
	ca_audio_params_array[thread_idx].ga_samplerate = rtspconf->audio_samplerate;
	ca_audio_params_array[thread_idx].ga_channels = av_get_channel_layout_nb_channels(rtspconf->audio_device_channel_layout);
	ca_audio_params_array[thread_idx].ca_samplerate = w->nSamplesPerSec;
	ca_audio_params_array[thread_idx].ca_bytes_per_sample = w->wBitsPerSample / 8;
	samples = av_rescale_rnd(CA_MAX_SAMPLES,
		rtspconf->audio_samplerate, w->nSamplesPerSec, AV_ROUND_UP);
	bufreq = av_samples_get_buffer_size(NULL,
		rtspconf->audio_channels, samples * 2,
		rtspconf->audio_device_format,
		1/*no-alignment*/);
	if ((ca_audio_params_array[thread_idx].audio_buf = (unsigned char *)malloc(bufreq)) == NULL) {
		ga_error("CoreAudio: cannot allocate resample memory.\n");
		return -1;
	}
	if (audio_source_setup(bufreq, rtspconf->audio_samplerate,
		16/* depends on format */,
		rtspconf->audio_channels) < 0) {
		ga_error("CoreAudio: audio source setup failed.\n");
		return -1;
	}
	ga_error("CoreAudio: max %d samples with %d byte(s) resample buffer allocated.\n",
		samples, bufreq);
	//
	return 0;
}

DllExport HRESULT __stdcall
hook_GetMixFormat(
	IAudioClient *thiz,
	WAVEFORMATEX **ppDeviceFormat)
{
	HRESULT hr;
	hr = old_GetMixFormat(thiz, ppDeviceFormat);
	return hr;
}

DllExport HRESULT __stdcall hook_Initialize(IAudioClient * thiz, AUDCLNT_SHAREMODE ShareMode, DWORD StreamFlags, REFERENCE_TIME hnsBufferDuration, REFERENCE_TIME hnsPeriodicity, const WAVEFORMATEX * pFormat, LPCGUID AudioSessionGuid)
{
	HRESULT hr;
	hr = old_Initialize(thiz, ShareMode, StreamFlags, hnsBufferDuration, hnsPeriodicity, pFormat, AudioSessionGuid);

	if (ca_create_swrctx((WAVEFORMATEX *)pFormat, thiz) < 0) {
		ga_error("CoreAudio: returns an unsupported format\n");
		exit(-1);
		return E_INVALIDARG;
	}

	return hr;
}

DllExport HRESULT __stdcall
hook_ReleaseBuffer(
	IAudioRenderClient *thiz,
	UINT32 NumFramesWritten,
	DWORD dwFlags)
{
	int thread_idx = -1;
	for (int i = 0; i < MAX_THREAD_SIZE; i++) {
		if (ca_audio_params_array[i].renderClient == (void *)thiz) {
			thread_idx = i;
			break;
		}
	}
	if (thread_idx < 0)//not found
		goto no_capture;
	//Temporary implementation
	//TODO: mix audio from different sources
	if (thread_idx != 0) {
		goto no_capture;
	}

	const unsigned char *srcplanes[SWR_CH_MAX];
	unsigned char *dstplanes[SWR_CH_MAX];
	int samples;
	// capture audio here
	if (ca_audio_params_array[thread_idx].swrctx == NULL || ca_audio_params_array[thread_idx].buffer_data == NULL || ca_audio_params_array[thread_idx].audio_buf == NULL)
		goto no_capture;


	srcplanes[0] = (unsigned char*)ca_audio_params_array[thread_idx].buffer_data;
	srcplanes[1] = NULL;
	dstplanes[0] = ca_audio_params_array[thread_idx].audio_buf;
	dstplanes[1] = NULL;
	samples = av_rescale_rnd(NumFramesWritten,
		ca_audio_params_array[thread_idx].ga_samplerate,
		ca_audio_params_array[thread_idx].ca_samplerate, AV_ROUND_UP);
	swr_convert(ca_audio_params_array[thread_idx].swrctx,
		dstplanes, samples,
		srcplanes, NumFramesWritten);
	audio_source_buffer_fill(ca_audio_params_array[thread_idx].audio_buf, samples);
	bzero(ca_audio_params_array[thread_idx].buffer_data, NumFramesWritten * ca_audio_params_array[thread_idx].ca_bytes_per_sample);
	dwFlags |= AUDCLNT_BUFFERFLAGS_SILENT;
	ca_audio_params_array[thread_idx].buffer_data = NULL;
	//
no_capture:
	HRESULT hr = old_ReleaseBuffer(thiz, NumFramesWritten, dwFlags);

	return hr;
}

DllExport HRESULT __stdcall
hook_GetBuffer(
	IAudioRenderClient *thiz,
	UINT32 NumFramesRequested,
	BYTE **ppData)
{
	HRESULT hr;
	hr = old_GetBuffer(thiz, NumFramesRequested, ppData);

	int thread_idx = -1;
	for (int i = 0; i < MAX_THREAD_SIZE; i++) {
		if (ca_audio_params_array[i].renderClient == (void *)thiz) {
			thread_idx = i;
			break;
		}
	}

	if (thread_idx >= 0 && hr == S_OK) {
		ca_audio_params_array[thread_idx].buffer_data = (char*)*ppData;
	}

	return hr;
}


int
hook_coreaudio() {
	int ret = -1;

	HRESULT hr;
	IMMDeviceEnumerator *deviceEnumerator = NULL;
	IMMDevice *device = NULL;
	IAudioClient *audioClient = NULL;
	IAudioRenderClient *renderClient = NULL;
	WAVEFORMATEX *pwfx = NULL;

	// obtain core-audio objects and functions
	hr = CoInitialize(NULL);

#define	RET_ON_ERROR(hr, prefix) if(hr!=S_OK) { ga_error("[core-audio] %s failed (%08x).\n", prefix, hr); goto hook_ca_quit; }
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), (void**)&deviceEnumerator);
	RET_ON_ERROR(hr, "CoCreateInstance");

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &device);
	RET_ON_ERROR(hr, "GetDefaultAudioEndpoint");

	hr = device->Activate(__uuidof(IAudioClient), CLSCTX_ALL, NULL, (void**)&audioClient);
	RET_ON_ERROR(hr, "Activate");

	hr = audioClient->GetMixFormat(&pwfx);
	RET_ON_ERROR(hr, "GetMixFormat");

	hr = audioClient->Initialize(AUDCLNT_SHAREMODE_SHARED, 0, 10000000/*REFTIME_PER_SEC*/, 0, pwfx, NULL);
	RET_ON_ERROR(hr, "Initialize");

	hr = audioClient->GetService(__uuidof(IAudioRenderClient), (void**)&renderClient);
	RET_ON_ERROR(hr, "GetService[IAudioRenderClient]");
#undef	RET_ON_ERROR

	// do hook stuff
	old_GetMixFormat = (t_GetMixFormat)((comobj_t*)audioClient)->vtbl->func[8];
	CA_DO_HOOK(GetMixFormat);

	old_GetBuffer = (t_GetBuffer)((comobj_t*)renderClient)->vtbl->func[3];
	CA_DO_HOOK(GetBuffer);

	old_ReleaseBuffer = (t_ReleaseBuffer)((comobj_t*)renderClient)->vtbl->func[4];
	CA_DO_HOOK(ReleaseBuffer);

	old_Initialize = (t_Initialize)((comobj_t*)audioClient)->vtbl->func[3];
	CA_DO_HOOK(Initialize);

	ret = 0;

	ga_error("hook_coreaudio: done\n");

hook_ca_quit:
	if (renderClient) { renderClient->Release();	renderClient = NULL; }
	if (pwfx) { CoTaskMemFree(pwfx);		pwfx = NULL; }
	if (audioClient) { audioClient->Release();	audioClient = NULL; }
	if (device) { device->Release();		device = NULL; }
	if (deviceEnumerator) { deviceEnumerator->Release();	deviceEnumerator = NULL; }

	return ret;
}

