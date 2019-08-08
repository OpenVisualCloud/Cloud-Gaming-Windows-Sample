/*
 * Copyright (c) 2013-2014 Chun-Ying Huang
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
#include <string.h>
#include <stdlib.h>

#ifdef NO_LIBGA
#include <windows.h>
#else
#include "ga-common.h"
#include "ga-conf.h"
#include "vsource.h"
#endif

#include "allocator.h"
#include "mfx-common.h"

static unsigned _apilevel = 0;	// e.g., 1.4 --> 0x010400

mfxSession _session[VIDEO_SOURCE_CHANNEL_MAX];

mfxVideoParam _vppparam[VIDEO_SOURCE_CHANNEL_MAX];
mfxFrameAllocResponse _vppresponse[VIDEO_SOURCE_CHANNEL_MAX][2];
mfxFrameSurface1 *_vpppool[VIDEO_SOURCE_CHANNEL_MAX][2];

mfxVideoParam _encparam[VIDEO_SOURCE_CHANNEL_MAX];
#if 0	// No need because we will use vppout as encoder input
mfxFrameAllocResponse _encresponse[VIDEO_SOURCE_CHANNEL_MAX];
mfxFrameSurface1 *_encpool[VIDEO_SOURCE_CHANNEL_MAX];
#endif
mfxBitstream _mfxbs[VIDEO_SOURCE_CHANNEL_MAX];

int
mfx_invalid_status(mfxStatus sts) {
	int ret = 0;
#define	PFX	"video encoder: "
	switch(sts) {
	case MFX_ERR_NONE:
		break;
	/* error codes <0 */
	case MFX_ERR_NULL_PTR:		ret = -1; ga_error(PFX"MFX_ERR_NULL_PTR\n"); break;
	case MFX_ERR_UNSUPPORTED:	ret = -1; ga_error(PFX"MFX_ERR_UNSUPPORTED\n"); break;
	case MFX_ERR_MEMORY_ALLOC:	ret = -1; ga_error(PFX"MFX_ERR_MEMORY_ALLOC\n"); break;
	case MFX_ERR_NOT_ENOUGH_BUFFER:	ret = -1; ga_error(PFX"MFX_ERR_NOT_ENOUGH_BUFFER\n"); break;
	case MFX_ERR_INVALID_HANDLE:	ret = -1; ga_error(PFX"MFX_ERR_INVALID_HANDLE\n"); break;
	case MFX_ERR_LOCK_MEMORY:	ret = -1; ga_error(PFX"MFX_ERR_LOCK_MEMORY\n"); break;
	case MFX_ERR_NOT_INITIALIZED:	ret = -1; ga_error(PFX"MFX_ERR_NOT_INITIALIZED\n"); break;
	case MFX_ERR_NOT_FOUND:		ret = -1; ga_error(PFX"MFX_ERR_NOT_FOUND\n"); break;
	case MFX_ERR_MORE_DATA:		ret = -1; ga_error(PFX"MFX_ERR_MORE_DATA\n"); break;
	case MFX_ERR_MORE_SURFACE:	ret = -1; ga_error(PFX"MFX_ERR_MORE_SURFACE\n"); break;
	case MFX_ERR_ABORTED:		ret = -1; ga_error(PFX"MFX_ERR_ABORTED\n"); break;
	case MFX_ERR_DEVICE_LOST:	ret = -1; ga_error(PFX"MFX_ERR_DEVICE_LOST\n"); break;
	case MFX_ERR_INCOMPATIBLE_VIDEO_PARAM:	ret = -1; ga_error(PFX"MFX_ERR_INCOMPATIBLE_VIDEO_PARAM\n"); break;
	case MFX_ERR_INVALID_VIDEO_PARAM:	ret = -1; ga_error(PFX"MFX_ERR_INVALID_VIDEO_PARAM\n"); break;
	case MFX_ERR_UNDEFINED_BEHAVIOR:	ret = -1; ga_error(PFX"MFX_ERR_UNDEFINED_BEHAVIOR\n"); break;
	case MFX_ERR_DEVICE_FAILED:	ret = -1; ga_error(PFX"MFX_ERR_DEVICE_FAILED\n"); break;
	case MFX_ERR_MORE_BITSTREAM:	ret = -1; ga_error(PFX"MFX_ERR_MORE_BITSTREAM\n"); break;
	case MFX_ERR_INCOMPATIBLE_AUDIO_PARAM:	ret = -1; ga_error(PFX"MFX_ERR_INCOMPATIBLE_AUDIO_PARAM\n"); break;
	case MFX_ERR_INVALID_AUDIO_PARAM:	ret = -1; ga_error(PFX"MFX_ERR_INVALID_AUDIO_PARAM\n"); break;
	/* warnings >0 */
	case MFX_WRN_IN_EXECUTION:		ga_error(PFX"MFX_WRN_IN_EXECUTION\n"); break;
	case MFX_WRN_DEVICE_BUSY:		ga_error(PFX"MFX_WRN_DEVICE_BUSY\n"); break;
	case MFX_WRN_VIDEO_PARAM_CHANGED:	ga_error(PFX"MFX_WRN_VIDEO_PARAM_CHANGED\n"); break;
	case MFX_WRN_PARTIAL_ACCELERATION:	ga_error(PFX"MFX_WRN_PARTIAL_ACCELERATION\n"); break;
	case MFX_WRN_INCOMPATIBLE_VIDEO_PARAM:	ga_error(PFX"MFX_WRN_INCOMPATIBLE_VIDEO_PARAM\n"); break;
	case MFX_WRN_VALUE_NOT_CHANGED:		ga_error(PFX"MFX_WRN_VALUE_NOT_CHANGED\n"); break;
	case MFX_WRN_OUT_OF_RANGE:		ga_error(PFX"MFX_WRN_OUT_OF_RANGE\n"); break;
	case MFX_WRN_FILTER_SKIPPED:		ga_error(PFX"MFX_WRN_FILTER_SKIPPED\n"); break;
	case MFX_WRN_INCOMPATIBLE_AUDIO_PARAM:	ga_error(PFX"WRN_INCOMPATIBLE_AUDIO_PARAM\n"); break;
	case MFX_ERR_UNKNOWN:
	default:
		ret = -1;
		ga_error(PFX"UNKNOWN ERROR (%d)\n", sts);
		break;
	}
#undef	PFX
	return ret;
}

int
mfx_deinit_internal(int cid) {
	int i;
	MFXClose(_session[cid]);
	//
	frame_pool_free(_vpppool[cid][0]);
	frame_pool_free(_vpppool[cid][1]);
	_vpppool[cid][0] = _vpppool[cid][1] = NULL;
	//
	if(_vppresponse[cid][0].mids != NULL) {
		if(_vppresponse[cid][0].NumFrameActual > 0) {
			for(i = 0; i < _vppresponse[cid][0].NumFrameActual; i++)
				ba_free(NULL, _vppresponse[cid][0].mids[i]);
		}
		free(_vppresponse[cid][0].mids);
		_vppresponse[cid][0].mids = NULL;
	}
	//
	if(_vppresponse[cid][1].mids != NULL) {
		if(_vppresponse[cid][1].NumFrameActual > 0) {
			for(i = 0; i < _vppresponse[cid][1].NumFrameActual; i++)
				ba_free(NULL, _vppresponse[cid][1].mids[i]);
		}
		free(_vppresponse[cid][1].mids);
		_vppresponse[cid][1].mids = NULL;
	}
	//
	if(_mfxbs[cid].Data != NULL)	free(_mfxbs[cid].Data);
	memset(&_mfxbs[cid], 0, sizeof(mfxBitstream));
	//
	return 0;
}

mfxStatus
mfx_init_session(mfxSession *s) {
	mfxIMPL impl;
	mfxVersion HWver = {0, 1}, ver;
	mfxStatus sts = MFX_ERR_NONE;
	//
	if((sts = MFXInit(/*MFX_IMPL_SOFTWARE*/MFX_IMPL_HARDWARE_ANY, &HWver, s)) != MFX_ERR_NONE) {
		ga_error("video encoder: init failed.\n");
		return sts;
	}
	// register my frame allocator
	ba_register(*s);
	fa_register(*s);
	//
	MFXQueryIMPL(*s, &impl);
	MFXQueryVersion(*s, &ver);
	_apilevel = (ver.Major<<16) | (ver.Minor<<8);
	ga_error("video encoder: impl=%s, version=%d.%d, API level=%d.%d (%06x)\n",
		(impl & MFX_IMPL_HARDWARE) ? "hardware" : "software",
		HWver.Major, HWver.Minor, ver.Major, ver.Minor,
		_apilevel);
	return sts;
}

mfxStatus
mfx_init_vpp(mfxSession s, int width, int height, int fps, int RGBmode) {
	mfxVideoParam init_param;
	//
	memset(&init_param, 0, sizeof(init_param));
	init_param.AsyncDepth = 1;
	init_param.IOPattern =
		MFX_IOPATTERN_IN_SYSTEM_MEMORY | MFX_IOPATTERN_OUT_SYSTEM_MEMORY;
	//
	init_param.vpp.In.PicStruct = MFX_PICSTRUCT_PROGRESSIVE;
	if(RGBmode == 0) {
		init_param.vpp.In.FourCC = MFX_FOURCC_YV12;
		init_param.vpp.In.ChromaFormat = MFX_CHROMAFORMAT_YUV420;
		ga_error("video encoder: accept YUV input.\n");
	} else {
		init_param.vpp.In.FourCC = MFX_FOURCC_RGB4;
		init_param.vpp.In.ChromaFormat = MFX_CHROMAFORMAT_YUV444;
		ga_error("video encoder: accept RGB input.\n");
	}
	init_param.vpp.In.Width = MFX_ALIGN16(width);
	init_param.vpp.In.Height = MFX_ALIGN16(height);		// 16 for PROGRESSIVE, otherwise 32
	init_param.vpp.In.FrameRateExtN = fps;
	init_param.vpp.In.FrameRateExtD = 1;
	//
	init_param.vpp.Out.PicStruct = MFX_PICSTRUCT_PROGRESSIVE;
	init_param.vpp.Out.FourCC = MFX_FOURCC_NV12;
	init_param.vpp.Out.ChromaFormat = MFX_CHROMAFORMAT_YUV420;
	init_param.vpp.Out.Width = MFX_ALIGN16(width);
	init_param.vpp.Out.Height = MFX_ALIGN16(height);	// 16 for PROGRESSIVE, otherwise 32
	init_param.vpp.Out.FrameRateExtN = fps;
	init_param.vpp.Out.FrameRateExtD = 1;
	//
	return MFXVideoVPP_Init(s, &init_param);
}

mfxStatus
mfx_init_encoder_adv(mfxSession s, ga_encoder_cfg_t encCfg) {
	mfxVideoParam init_param;
	mfxExtCodingOption extCO;
	mfxExtCodingOption2 extCO2;
	mfxExtEncoderROI   extEncoderROI;

    std::vector<mfxExtBuffer*> m_EncExtBuf;
	
	mfxStatus sts;
	//
	memset(&init_param, 0, sizeof(init_param));
	init_param.AsyncDepth = 1;	// low latency
	init_param.IOPattern =
		MFX_IOPATTERN_IN_SYSTEM_MEMORY;
	//
	init_param.mfx.FrameInfo.PicStruct     = MFX_PICSTRUCT_PROGRESSIVE;
	init_param.mfx.FrameInfo.FourCC        = MFX_FOURCC_NV12;
	init_param.mfx.FrameInfo.ChromaFormat  = MFX_CHROMAFORMAT_YUV420;
	init_param.mfx.FrameInfo.Width         = MFX_ALIGN16(encCfg.width);
	init_param.mfx.FrameInfo.Height        = MFX_ALIGN16(encCfg.height);	// 16 for PROGRESSIVE, otherwise 32
	init_param.mfx.FrameInfo.CropW         = encCfg.width;
	init_param.mfx.FrameInfo.CropH         = encCfg.height;
	init_param.mfx.FrameInfo.FrameRateExtN = encCfg.fps;
	init_param.mfx.FrameInfo.FrameRateExtD = 1;
	//
	//init_param.mfx.BRCParamMultiplier = 1;
	init_param.mfx.CodecId                 = MFX_CODEC_AVC;
	init_param.mfx.CodecProfile            = MFX_PROFILE_AVC_MAIN; //MFX_PROFILE_AVC_BASELINE;
	init_param.mfx.CodecLevel              = MFX_LEVEL_AVC_52;
	init_param.mfx.GopPicSize              = encCfg.gopSize;
	init_param.mfx.GopRefDist              = 1;	/* no B-frame */
	init_param.mfx.GopOptFlag              = MFX_GOP_STRICT;
	
	/* usage: from (quality) 1 - 4 - 7 (speed) */
	init_param.mfx.TargetUsage             = MFX_TARGETUSAGE_1;
	init_param.mfx.RateControlMethod       = MFX_RATECONTROL_VBR;
	init_param.mfx.BufferSizeInKB          = 0;
	init_param.mfx.TargetKbps              = encCfg.bitrateKbps;
	init_param.mfx.MaxKbps                 = encCfg.bitrateKbps;
	// for low latency and resilience ...
	init_param.mfx.NumSlice                = encCfg.numOfslices;	// slice
    //
	init_param.mfx.LowPower = MFX_CODINGOPTION_ON;//ble VDENC
	
    // Only use 1 reference frame for the game encoding
	init_param.mfx.NumRefFrame = 1;
	//
	memset(&extCO, 0, sizeof(extCO));
	extCO.MaxDecFrameBuffering = 1;	// speed-up decoding
	if(_apilevel >= 0x010300) {
		ga_error("Intel MSDK encoder: enable Nal HRD conformance.\n");
		extCO.NalHrdConformance   = MFX_CODINGOPTION_ON;
		extCO.VuiVclHrdParameters = MFX_CODINGOPTION_ON;
		ga_error("Intel MSDK encoder: enable ref pic mark repetition SEI message.\n");
		extCO.RefPicMarkRep       = MFX_CODINGOPTION_ON;
		//extCO.SingleSeiNalUnit = MFX_CODINGOPTION_ON;
	}
	
	//
	//extCO.PicTimingSEI = MFX_CODINGOPTION_ON;
	extCO.AUDelimiter     = MFX_CODINGOPTION_ON;
	//
	extCO.Header.BufferId = MFX_EXTBUFF_CODING_OPTION;
	extCO.Header.BufferSz = sizeof(extCO);

	m_EncExtBuf.push_back((mfxExtBuffer *)&extCO);
	
    init_param.NumExtParam = static_cast<mfxU16>(m_EncExtBuf.size());
	init_param.ExtParam =  &m_EncExtBuf[0]; //extBuf;

	ga_error("Inte MSDK encoder: %d of extension buffer\n", init_param.NumExtParam);
	
#if 0
	do {
		mfxVideoParam out;
		mfxExtCodingOption co;
		mfxExtCodingOption2 co2;
		mfxExtBuffer *extBuf2[] = { (mfxExtBuffer*) &co, (mfxExtBuffer*) &co2 };
		memcpy(&out, &init_param, sizeof(out));
		memcpy(&co, &extCO, sizeof(co));
		memcpy(&co2, &extCO2, sizeof(co2));
		out.ExtParam = extBuf2;
		out.NumExtParam = 2;
		sts = MFXVideoENCODE_Query(s, &init_param, &out);
		if(sts != MFX_ERR_NONE) {
			mfx_invalid_status(sts);
			ga_error("MFXVideoENCODE_Query returned error.\n");
		}
		if(memcmp(&extCO, &co, sizeof(co)) != 0)	ga_error("CO is different\n");
		if(memcmp(&extCO2, &co2, sizeof(co2)) != 0)	ga_error("CO2 is different\n");
		if(memcmp(&init_param, &out, sizeof(out)) != 0)	ga_error("OUT is different\n");
	} while(0);
#endif
	//
	ga_error("Intel MSDK encoder: %dx%d (%dx%d) at %.1ffps, gop=%d, usage=%d, target=%dKbps, VDENC=%d\n",
		encCfg.width, encCfg.height,
		init_param.mfx.FrameInfo.Width, init_param.mfx.FrameInfo.Height,
		init_param.mfx.FrameInfo.FrameRateExtN * 1.0 / init_param.mfx.FrameInfo.FrameRateExtD,
		init_param.mfx.GopPicSize,
		init_param.mfx.TargetUsage,
		init_param.mfx.TargetKbps,
		((init_param.mfx.LowPower == MFX_CODINGOPTION_ON) ? 1:0 ));
	//
	sts = MFXVideoENCODE_Init(s, &init_param);
	//
	return sts;
}

mfxStatus
mfx_init_encoder(mfxSession s, int width, int height, int fps, int bitrateKbps) {
	mfxVideoParam init_param;
	mfxExtCodingOption extCO;
	mfxExtCodingOption2 extCO2;
	mfxExtBuffer *extBuf[] = { (mfxExtBuffer*) &extCO, (mfxExtBuffer*) &extCO2 };
	mfxStatus sts;
	//
	memset(&init_param, 0, sizeof(init_param));
	init_param.AsyncDepth = 1;	// low latency
	init_param.IOPattern =
		MFX_IOPATTERN_IN_SYSTEM_MEMORY;
	//
	init_param.mfx.FrameInfo.PicStruct     = MFX_PICSTRUCT_PROGRESSIVE;
	init_param.mfx.FrameInfo.FourCC        = MFX_FOURCC_NV12;
	init_param.mfx.FrameInfo.ChromaFormat  = MFX_CHROMAFORMAT_YUV420;
	init_param.mfx.FrameInfo.Width         = MFX_ALIGN16(width);
	init_param.mfx.FrameInfo.Height        = MFX_ALIGN16(height);	// 16 for PROGRESSIVE, otherwise 32
	init_param.mfx.FrameInfo.CropW         = width;
	init_param.mfx.FrameInfo.CropH         = height;
	init_param.mfx.FrameInfo.FrameRateExtN = fps;
	init_param.mfx.FrameInfo.FrameRateExtD = 1;
	//
	//init_param.mfx.BRCParamMultiplier = 1;
	init_param.mfx.CodecId                 = MFX_CODEC_AVC;
	init_param.mfx.CodecProfile            = MFX_PROFILE_AVC_MAIN; //MFX_PROFILE_AVC_BASELINE;
	init_param.mfx.CodecLevel              = MFX_LEVEL_UNKNOWN; //MFX_LEVEL_AVC_42;
	init_param.mfx.GopPicSize              = fps;
	init_param.mfx.GopRefDist              = 1;	/* no B-frame */
	init_param.mfx.GopOptFlag              = MFX_GOP_STRICT;
	/* usage: from (quality) 1 - 4 - 7 (speed) */
	init_param.mfx.TargetUsage             = MFX_TARGETUSAGE_1;
	init_param.mfx.RateControlMethod       = MFX_RATECONTROL_VBR;
	init_param.mfx.BufferSizeInKB          = 0;
	init_param.mfx.TargetKbps              = bitrateKbps;
	init_param.mfx.MaxKbps                 = bitrateKbps;
	// for low latency and resilience ...
	init_param.mfx.NumSlice                = 4;	// slice
    //
	init_param.mfx.LowPower = MFX_CODINGOPTION_OFF; //VDENC doesn't support deltaQP now.
	//
	memset(&extCO, 0, sizeof(extCO));
	extCO.MaxDecFrameBuffering = 1;	// speed-up decoding
	if(_apilevel >= 0x010300) {
		ga_error("Intel MSDK encoder: enable Nal HRD conformance.\n");
		extCO.NalHrdConformance   = MFX_CODINGOPTION_ON;
		extCO.VuiVclHrdParameters = MFX_CODINGOPTION_ON;
		ga_error("Intel MSDK encoder: enable ref pic mark repetition SEI message.\n");
		extCO.RefPicMarkRep       = MFX_CODINGOPTION_ON;
		//extCO.SingleSeiNalUnit = MFX_CODINGOPTION_ON;
	}
	//
	//extCO.PicTimingSEI = MFX_CODINGOPTION_ON;
	extCO.AUDelimiter = MFX_CODINGOPTION_ON;
	//
	extCO.Header.BufferId = MFX_EXTBUFF_CODING_OPTION;
	extCO.Header.BufferSz = sizeof(extCO);
	// enable intra-refresh
	memset(&extCO2, 0, sizeof(extCO2));
#if 0	// UNSUPPORTED?
	extCO2.IntRefType = 1;		// enable intra-refresh
	extCO2.IntRefCycleSize = 8;
	//extCO2.IntRefQPDelta = 0;	// -51 ~ 51
#endif
	extCO2.BitrateLimit = MFX_CODINGOPTION_ON;
	extCO2.MBBRC = MFX_CODINGOPTION_OFF;
	extCO2.ExtBRC = MFX_CODINGOPTION_OFF;
	extCO2.Trellis = MFX_TRELLIS_UNKNOWN;
	if(_apilevel >= 0x010800) {
		ga_error("Intel MSDK encoder: enable repeat PPS.\n");
		//extCO2.RepeatPPS = MFX_CODINGOPTION_OFF;
		extCO2.RepeatPPS = MFX_CODINGOPTION_ON;
		extCO2.BRefType = MFX_B_REF_OFF;
		extCO2.AdaptiveI = MFX_CODINGOPTION_UNKNOWN;
		extCO2.AdaptiveB = MFX_CODINGOPTION_UNKNOWN;
		extCO2.LookAheadDS = MFX_LOOKAHEAD_DS_UNKNOWN;
	}
	extCO2.Header.BufferId = MFX_EXTBUFF_CODING_OPTION2;
	extCO2.Header.BufferSz = sizeof(extCO2);
	//
	init_param.mfx.NumRefFrame = 1;
	init_param.ExtParam = extBuf;
	if(_apilevel < 0x010600) {
		ga_error("Intel MSDK encoder: disable CodingOption2 (apilevel=%06x)\n", _apilevel);
		init_param.NumExtParam = 1;
	} else {
		init_param.NumExtParam = 2;
	}
#if 0
	do {
		mfxVideoParam out;
		mfxExtCodingOption co;
		mfxExtCodingOption2 co2;
		mfxExtBuffer *extBuf2[] = { (mfxExtBuffer*) &co, (mfxExtBuffer*) &co2 };
		memcpy(&out, &init_param, sizeof(out));
		memcpy(&co, &extCO, sizeof(co));
		memcpy(&co2, &extCO2, sizeof(co2));
		out.ExtParam = extBuf2;
		out.NumExtParam = 2;
		sts = MFXVideoENCODE_Query(s, &init_param, &out);
		if(sts != MFX_ERR_NONE) {
			mfx_invalid_status(sts);
			ga_error("MFXVideoENCODE_Query returned error.\n");
		}
		if(memcmp(&extCO, &co, sizeof(co)) != 0)	ga_error("CO is different\n");
		if(memcmp(&extCO2, &co2, sizeof(co2)) != 0)	ga_error("CO2 is different\n");
		if(memcmp(&init_param, &out, sizeof(out)) != 0)	ga_error("OUT is different\n");
	} while(0);
#endif
	//
	ga_error("Intel MSDK encoder: %dx%d (%dx%d) at %.1ffps, gop=%d, usage=%d, target=%dKbps, VDENC=%d\n",
		width, height,
		init_param.mfx.FrameInfo.Width, init_param.mfx.FrameInfo.Height,
		init_param.mfx.FrameInfo.FrameRateExtN * 1.0 / init_param.mfx.FrameInfo.FrameRateExtD,
		init_param.mfx.GopPicSize,
		init_param.mfx.TargetUsage,
		init_param.mfx.TargetKbps,
		((init_param.mfx.LowPower == MFX_CODINGOPTION_ON) ? 1:0 ));
	//
	sts = MFXVideoENCODE_Init(s, &init_param);
	//
	return sts;
}

mfxStatus
mfx_reconfigure(mfxSession s, int bitrateKbps) {
	mfxStatus sts = MFX_ERR_NONE;
	mfxVideoParam params;
	//
	memset(&params, 0, sizeof(params));
	if((sts = MFXVideoENCODE_GetVideoParam(s, &params)) != MFX_ERR_NONE)
		return sts;
	params.mfx.TargetKbps = bitrateKbps;
	params.mfx.MaxKbps = bitrateKbps;
	return MFXVideoENCODE_Reset(s, &params);
}

mfxStatus
mfx_reconfigure_deltaQP(mfxSession s, int deltaQP) {
	mfxStatus sts = MFX_ERR_NONE;
	mfxVideoParam params;
	//
	memset(&params, 0, sizeof(params));
	if((sts = MFXVideoENCODE_GetVideoParam(s, &params)) != MFX_ERR_NONE)
		return sts;

	
    mfxExtEncoderROI   *pEncROI;
	pEncROI = (mfxExtEncoderROI *)malloc(sizeof(mfxExtEncoderROI));
	memset(pEncROI, 0, sizeof(mfxExtEncoderROI));
	pEncROI->Header.BufferId = MFX_EXTBUFF_ENCODER_ROI;
	pEncROI->Header.BufferSz = sizeof(mfxExtEncoderROI);
	pEncROI->NumROI          = 1;//encCfg.numOfRoi;
	pEncROI->ROIMode         = MFX_ROI_MODE_QP_DELTA;


	mfxFrameInfo *pFrameInfo =  (mfxFrameInfo *)&(params.mfx.FrameInfo);

	pEncROI->ROI[0].Left    = pFrameInfo->Width/4;
	pEncROI->ROI[0].Right   = pFrameInfo->Width*3/4;
	pEncROI->ROI[0].Top     = pFrameInfo->Height/2;
	pEncROI->ROI[0].Bottom  = pFrameInfo->Height;
	pEncROI->ROI[0].DeltaQP = deltaQP;
	
	ga_error("Intel MSDK encoder: width =%d\n", pFrameInfo->Width );
	
    params.NumExtParam =  1;
  	params.ExtParam    = (mfxExtBuffer **)(&pEncROI); //extBuf;

	return MFXVideoENCODE_Reset(s, &params);
}

mfxStatus
mfx_reconfigure_resolution(mfxSession s, int width, int height) {
	mfxStatus sts = MFX_ERR_NONE;
	mfxVideoParam params;
	//
	memset(&params, 0, sizeof(params));
	if((sts = MFXVideoENCODE_GetVideoParam(s, &params)) != MFX_ERR_NONE)
		return sts;

	ga_error("Intel MSDK encoder: orignal setting, w=%d, h=%d,  bitrate = %dkbps\n", params.mfx.FrameInfo.Width, params.mfx.FrameInfo.Height, params.mfx.TargetKbps);

	params.mfx.FrameInfo.Width         = MFX_ALIGN16(width);
	params.mfx.FrameInfo.Height        = MFX_ALIGN16(height);

	params.mfx.FrameInfo.CropW         = width;
	params.mfx.FrameInfo.CropH         = height;

	//params.mfx.TargetKbps = 1024;
	//params.mfx.MaxKbps    = 1024;

	sts = MFXVideoENCODE_Reset(s, &params);

	memset(&params, 0, sizeof(params));
	if((sts = MFXVideoVPP_GetVideoParam(s, &params)) != MFX_ERR_NONE)
			return sts;

	params.vpp.Out.Width               = MFX_ALIGN16(width);
	params.vpp.Out.Height              = MFX_ALIGN16(height);
	sts = MFXVideoVPP_Reset(s, &params);

	ga_error("Intel MSDK encoder: mfx_reconfigure_resolution, w=%d, h=%d,  NumExtParam = %d, %d\n", width, height, params.NumExtParam, sts);

	return sts;
}

mfxStatus
mfx_vpp_pool(mfxSession s, mfxVideoParam *param,
		mfxFrameAllocResponse *inres,  mfxFrameSurface1 **inpool,
		mfxFrameAllocResponse *outres, mfxFrameSurface1 **outpool) {
	//
	mfxStatus sts;
	mfxFrameAllocRequest request[2];
	//
	sts = MFXVideoVPP_QueryIOSurf(s, param, request);
	if(mfx_invalid_status(sts)) {
		ga_error("video encoder: encoder VPP IO surface failed.\n");
		return sts;
	}
	//
	ga_error("Intel MSDK encoder: suggested number of VPP frames = %d+%d\n",
		request[0].NumFrameSuggested, request[1].NumFrameSuggested);
	// allocate IN frames
	sts = fa_alloc(NULL, &request[0], inres);
	if(mfx_invalid_status(sts)) {
		ga_error("video encoder: alloc VPP-IN frame failed.\n");
		return sts;
	}
	if((*inpool = frame_pool_alloc(&request[0].Info, inres)) == NULL) {
		ga_error("video encoder: allocate VPP-IN frame pool failed.\n");
		return MFX_ERR_MEMORY_ALLOC;
	}
	// allocate OUT frames
	sts = fa_alloc(NULL, &request[1], outres);
	if(mfx_invalid_status(sts)) {
		ga_error("Intel MSDK encoder: alloc VPP-OUT frame failed.\n");
		return sts;
	}
	if((*outpool = frame_pool_alloc(&request[1].Info, outres)) == NULL) {
		ga_error("video encoder: allocate VPP-OUT frame pool failed.\n");
		return MFX_ERR_MEMORY_ALLOC;
	}
	//
	return MFX_ERR_NONE;
}

mfxStatus
mfx_encoder_pool(mfxSession s, mfxVideoParam *param,
		mfxFrameAllocResponse *response, mfxFrameSurface1 **pool) {
	//
	mfxStatus sts;
	mfxFrameAllocRequest request;
	//
	sts = MFXVideoENCODE_QueryIOSurf(s, param, &request);
	if(mfx_invalid_status(sts)) {
		ga_error("video encoder: encoder query IO surface failed.\n");
		return sts;
	}
	//
	ga_error("Intel MSDK encoder: suggested number of encoder frames = %d\n", request.NumFrameSuggested);
	// allocate requested frames
	sts = fa_alloc(NULL, &request, response);
	if(mfx_invalid_status(sts)) {
		ga_error("video encoder: alloc frame failed.\n");
		return sts;
	}
	if((*pool = frame_pool_alloc(&request.Info, response)) == NULL) {
		ga_error("video encoder: allocate frame pool failed.\n");
		return MFX_ERR_MEMORY_ALLOC;
	}
	return MFX_ERR_NONE;
}

int mfx_init_internal_adv(int cid, ga_encoder_cfg_t encCfg){
		mfxStatus sts;
		//
		if((sts = mfx_init_session(&_session[cid])) != MFX_ERR_NONE)
			return mfx_invalid_status(sts);
		//
		sts = mfx_init_vpp(_session[cid], encCfg.width, encCfg.height, encCfg.fps, encCfg.useRGB);
		if(mfx_invalid_status(sts)) {
			ga_error("video encoder: VPP initialization failed.\n");
			goto mie_failed;
		}
		//
		sts = mfx_init_encoder_adv(_session[cid], encCfg);
		if(mfx_invalid_status(sts)) {
			ga_error("video encoder: encoder initialization failed.\n");
			goto mie_failed;
		}
		// get the real param
		if(MFXVideoVPP_GetVideoParam(_session[cid], &_vppparam[cid]) != MFX_ERR_NONE
		|| MFXVideoENCODE_GetVideoParam(_session[cid], &_encparam[cid]) != MFX_ERR_NONE) {
			ga_error("video encoder: unable to get VPP/encoder param.\n");
			goto mie_failed;
		}
		//
		if(mfx_vpp_pool(_session[cid], &_vppparam[cid],
				&_vppresponse[cid][0], &_vpppool[cid][0],
				&_vppresponse[cid][1], &_vpppool[cid][1]) != MFX_ERR_NONE) {
			ga_error("video encoder: create VPP pool failed.\n");
			goto mie_failed;
		}
#if 0	// No need because we will use vppout as encoder input
		if(mfx_encoder_pool(_session[cid], &_encparam[cid], &_encresponse[cid], &_encpool[cid]) != MFX_ERR_NONE) {
			ga_error("video encoder: create encoder pool failed.\n");
			goto mie_failed;
		}
#endif

		// allocate spaces for bitstream
		if(_encparam[cid].mfx.BufferSizeInKB > 0) {
			memset(&_mfxbs[cid], 0, sizeof(mfxBitstream));
			_mfxbs[cid].Data = (mfxU8*) malloc(_encparam[cid].mfx.BufferSizeInKB * 1024);
			if(_mfxbs[cid].Data == NULL) {
				ga_error("video encoder: allocate bittream memory failed.\n");
				goto mie_failed;
			}
			_mfxbs[cid].MaxLength = _encparam[cid].mfx.BufferSizeInKB * 1024;
			ga_error("video encoder: max bitstream size = %dKB\n", _encparam[cid].mfx.BufferSizeInKB);
		} else {
			ga_error("video encoder: unknown buffer size.\n");
			goto mie_failed;
		}
		ga_error("video encoder: initialized\n");
		return 0;
	mie_failed:
		MFXClose(_session[cid]);
		exit(-1);
		return -1;


}

int
mfx_init_internal(int cid, int width, int height, int fps, int bitrateKbps, int RGBmode) {
	mfxStatus sts;
	//
	if((sts = mfx_init_session(&_session[cid])) != MFX_ERR_NONE)
		return mfx_invalid_status(sts);
	//
	sts = mfx_init_vpp(_session[cid], width, height, fps, RGBmode);
	if(mfx_invalid_status(sts)) {
		ga_error("video encoder: VPP initialization failed.\n");
		goto mie_failed;
	}
	//
	sts = mfx_init_encoder(_session[cid], width, height, fps, bitrateKbps);
	if(mfx_invalid_status(sts)) {
		ga_error("video encoder: encoder initialization failed.\n");
		goto mie_failed;
	}
	// get the real param
	if(MFXVideoVPP_GetVideoParam(_session[cid], &_vppparam[cid]) != MFX_ERR_NONE
	|| MFXVideoENCODE_GetVideoParam(_session[cid], &_encparam[cid]) != MFX_ERR_NONE) {
		ga_error("video encoder: unable to get VPP/encoder param.\n");
		goto mie_failed;
	}
	//
	if(mfx_vpp_pool(_session[cid], &_vppparam[cid],
			&_vppresponse[cid][0], &_vpppool[cid][0],
			&_vppresponse[cid][1], &_vpppool[cid][1]) != MFX_ERR_NONE) {
		ga_error("video encoder: create VPP pool failed.\n");
		goto mie_failed;
	}
#if 0	// No need because we will use vppout as encoder input
	if(mfx_encoder_pool(_session[cid], &_encparam[cid], &_encresponse[cid], &_encpool[cid]) != MFX_ERR_NONE) {
		ga_error("video encoder: create encoder pool failed.\n");
		goto mie_failed;
	}
#endif
	// allocate spaces for bitstream
	if(_encparam[cid].mfx.BufferSizeInKB > 0) {
		memset(&_mfxbs[cid], 0, sizeof(mfxBitstream));
		_mfxbs[cid].Data = (mfxU8*) malloc(_encparam[cid].mfx.BufferSizeInKB * 1024);
		if(_mfxbs[cid].Data == NULL) {
			ga_error("video encoder: allocate bittream memory failed.\n");
			goto mie_failed;
		}
		_mfxbs[cid].MaxLength = _encparam[cid].mfx.BufferSizeInKB * 1024;
		ga_error("video encoder: max bitstream size = %dKB\n", _encparam[cid].mfx.BufferSizeInKB);
	} else {
		ga_error("video encoder: unknown buffer size.\n");
		goto mie_failed;
	}
	// allocate frame info report caps here:

	typedef struct {
    mfxExtBuffer    Header;

    mfxU32          FrameOrder;
    mfxU16          PicStruct;
    mfxU16          LongTermIdx;
    mfxU32          MAD;
    mfxU16          BRCPanicMode;
    mfxU16          QP;
    mfxU32          SecondFieldOffset;
    mfxU16          reserved[2];

    struct {
        mfxU32      FrameOrder;
        mfxU16      PicStruct;
        mfxU16      LongTermIdx;
        mfxU16      reserved[4];
    } UsedRefListL0[32], UsedRefListL1[32];
} mfxExtAVCEncodedFrameInfo;
	ga_error("video encoder: initialized\n");
	return 0;
mie_failed:
	MFXClose(_session[cid]);
	exit(-1);
	return -1;
}

mfxStatus
mfx_realloc_buffer(mfxSession s, mfxBitstream *pbs) {
	mfxVideoParam param;
	mfxStatus sts = MFX_ERR_NONE;;
	mfxU8* newbuf = NULL;
	mfxU32 newsize = 0;
	//
	if(pbs == NULL) {
		ga_error("video encoder: not a vaild bitstream.\n");
		return MFX_ERR_NULL_PTR;
	}
	memset(&param, 0, sizeof(param));
	if((sts = MFXVideoENCODE_GetVideoParam(s, &param)) != MFX_ERR_NONE) {
		ga_error("video encoder: realloc cannot get video param.\n");
		return sts;
	}
	//
	newsize = param.mfx.BufferSizeInKB * 1024;
	if(pbs->MaxLength > newsize) {
		ga_error("video encoder: cannot realloc to a smaller size.\n");
		return MFX_ERR_UNSUPPORTED;
	}
	//
	ga_error("video encoder: bitstream realloc - %d -> %d\n", pbs->MaxLength, newsize);
	if((newbuf = (mfxU8*) realloc(pbs->Data, newsize)) == NULL) {
		ga_error("video encoder: realloc failed.\n");
		return MFX_ERR_MEMORY_ALLOC;
	}
	//
	pbs->Data = newbuf;
	pbs->DataOffset = 0;
	pbs->MaxLength = newsize;
	//
	return MFX_ERR_NONE;
}

mfxStatus
mfx_encode_vpp(mfxSession s, mfxFrameSurface1 *in, mfxFrameSurface1 *out, mfxSyncPoint *syncp) {
	mfxStatus sts;
vpp_again:
	sts = MFXVideoVPP_RunFrameVPPAsync(s, in, out, NULL, syncp);
	if(sts > MFX_ERR_NONE && *syncp == NULL) {
		if(sts == MFX_WRN_DEVICE_BUSY)
			Sleep(1);	// sleep 1ms
		goto vpp_again;
	}
	if(sts > MFX_ERR_NONE && *syncp != NULL)
		sts = MFX_ERR_NONE;
	return sts;
}

mfxStatus mfx_encode_encode(mfxSession s,
                            mfxEncodeCtrl* ctrl,
                            mfxFrameSurface1* in,
                            mfxBitstream* pbs,
                            mfxSyncPoint* syncp) {
	mfxStatus sts;
enc_again:
  sts = MFXVideoENCODE_EncodeFrameAsync(s, ctrl, in, pbs, syncp);
	if(sts > MFX_ERR_NONE && *syncp == NULL) {
		if(sts == MFX_WRN_DEVICE_BUSY)
			Sleep(1);	// sleep 1ms
		goto enc_again;
	}
	if(sts == MFX_ERR_NOT_ENOUGH_BUFFER) {
		sts = mfx_realloc_buffer(s, pbs);
		goto enc_again;
	}
	if(sts > MFX_ERR_NONE && *syncp != NULL)
		sts = MFX_ERR_NONE;
	if(sts == MFX_ERR_MORE_BITSTREAM)
		sts = MFX_ERR_NONE;
	return sts;
}

