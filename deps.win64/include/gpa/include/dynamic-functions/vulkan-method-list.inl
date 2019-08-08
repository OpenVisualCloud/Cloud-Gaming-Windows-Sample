/******************************************************************************
        Copyright 2019 Intel Corporation.
 
This software and the related documents are Intel copyrighted materials,
and your use of them is governed by the express license under which they
were provided to you ("License"). Unless the License provides otherwise,
you may not use, modify, copy, publish, distribute, disclose or transmit
this software or the related documents without Intel's prior written
permission.


 This software and the related documents are provided as is, with no express
or implied warranties, other than those that are expressly stated in the
License.

******************************************************************************/

METHOD(vkCreateInstance)

METHOD(vkDestroyInstance)

METHOD(vkEnumeratePhysicalDevices)

METHOD(vkGetPhysicalDeviceFeatures)

METHOD(vkGetPhysicalDeviceFormatProperties)

METHOD(vkGetPhysicalDeviceImageFormatProperties)

METHOD(vkGetPhysicalDeviceProperties)

METHOD(vkGetPhysicalDeviceQueueFamilyProperties)

METHOD(vkGetPhysicalDeviceMemoryProperties)

METHOD(vkGetInstanceProcAddr)

METHOD(vkGetDeviceProcAddr)

METHOD(vkCreateDevice)

METHOD(vkDestroyDevice)

METHOD(vkEnumerateInstanceExtensionProperties)

METHOD(vkEnumerateDeviceExtensionProperties)

METHOD(vkEnumerateInstanceLayerProperties)

METHOD(vkEnumerateDeviceLayerProperties)

METHOD(vkGetDeviceQueue)

METHOD(vkQueueSubmit)

METHOD(vkQueueWaitIdle)

METHOD(vkDeviceWaitIdle)

METHOD(vkAllocateMemory)

METHOD(vkFreeMemory)

METHOD(vkMapMemory)

METHOD(vkUnmapMemory)

METHOD(vkFlushMappedMemoryRanges)

METHOD(vkInvalidateMappedMemoryRanges)

METHOD(vkGetDeviceMemoryCommitment)

METHOD(vkBindBufferMemory)

METHOD(vkBindImageMemory)

METHOD(vkGetBufferMemoryRequirements)

METHOD(vkGetImageMemoryRequirements)

METHOD(vkGetImageSparseMemoryRequirements)

METHOD(vkGetPhysicalDeviceSparseImageFormatProperties)

METHOD(vkQueueBindSparse)

METHOD(vkCreateFence)

METHOD(vkDestroyFence)

METHOD(vkResetFences)

METHOD(vkGetFenceStatus)

METHOD(vkWaitForFences)

METHOD(vkCreateSemaphore)

METHOD(vkDestroySemaphore)

METHOD(vkCreateEvent)

METHOD(vkDestroyEvent)

METHOD(vkGetEventStatus)

METHOD(vkSetEvent)

METHOD(vkResetEvent)

METHOD(vkCreateQueryPool)

METHOD(vkDestroyQueryPool)

METHOD(vkGetQueryPoolResults)

METHOD(vkCreateBuffer)

METHOD(vkDestroyBuffer)

METHOD(vkCreateBufferView)

METHOD(vkDestroyBufferView)

METHOD(vkCreateImage)

METHOD(vkDestroyImage)

METHOD(vkGetImageSubresourceLayout)

METHOD(vkCreateImageView)

METHOD(vkDestroyImageView)

METHOD(vkCreateShaderModule)

METHOD(vkDestroyShaderModule)

METHOD(vkCreatePipelineCache)

METHOD(vkDestroyPipelineCache)

METHOD(vkGetPipelineCacheData)

METHOD(vkMergePipelineCaches)

METHOD(vkCreateGraphicsPipelines)

METHOD(vkCreateComputePipelines)

METHOD(vkDestroyPipeline)

METHOD(vkCreatePipelineLayout)

METHOD(vkDestroyPipelineLayout)

METHOD(vkCreateSampler)

METHOD(vkDestroySampler)

METHOD(vkCreateDescriptorSetLayout)

METHOD(vkDestroyDescriptorSetLayout)

METHOD(vkCreateDescriptorPool)

METHOD(vkDestroyDescriptorPool)

METHOD(vkResetDescriptorPool)

METHOD(vkAllocateDescriptorSets)

METHOD(vkFreeDescriptorSets)

METHOD(vkUpdateDescriptorSets)

METHOD(vkCreateFramebuffer)

METHOD(vkDestroyFramebuffer)

METHOD(vkCreateRenderPass)

METHOD(vkDestroyRenderPass)

METHOD(vkGetRenderAreaGranularity)

METHOD(vkCreateCommandPool)

METHOD(vkDestroyCommandPool)

METHOD(vkResetCommandPool)

METHOD(vkAllocateCommandBuffers)

METHOD(vkFreeCommandBuffers)

METHOD(vkBeginCommandBuffer)

METHOD(vkEndCommandBuffer)

METHOD(vkResetCommandBuffer)

METHOD(vkCmdBindPipeline)

METHOD(vkCmdSetViewport)

METHOD(vkCmdSetScissor)

METHOD(vkCmdSetLineWidth)

METHOD(vkCmdSetDepthBias)

METHOD(vkCmdSetBlendConstants)

METHOD(vkCmdSetDepthBounds)

METHOD(vkCmdSetStencilCompareMask)

METHOD(vkCmdSetStencilWriteMask)

METHOD(vkCmdSetStencilReference)

METHOD(vkCmdBindDescriptorSets)

METHOD(vkCmdBindIndexBuffer)

METHOD(vkCmdBindVertexBuffers)

METHOD(vkCmdDraw)

METHOD(vkCmdDrawIndexed)

METHOD(vkCmdDrawIndirect)

METHOD(vkCmdDrawIndexedIndirect)

METHOD(vkCmdDispatch)

METHOD(vkCmdDispatchIndirect)

METHOD(vkCmdCopyBuffer)

METHOD(vkCmdCopyImage)

METHOD(vkCmdBlitImage)

METHOD(vkCmdCopyBufferToImage)

METHOD(vkCmdCopyImageToBuffer)

METHOD(vkCmdUpdateBuffer)

METHOD(vkCmdFillBuffer)

METHOD(vkCmdClearColorImage)

METHOD(vkCmdClearDepthStencilImage)

METHOD(vkCmdClearAttachments)

METHOD(vkCmdResolveImage)

METHOD(vkCmdSetEvent)

METHOD(vkCmdResetEvent)

METHOD(vkCmdWaitEvents)

METHOD(vkCmdPipelineBarrier)

METHOD(vkCmdBeginQuery)

METHOD(vkCmdEndQuery)

METHOD(vkCmdResetQueryPool)

METHOD(vkCmdWriteTimestamp)

METHOD(vkCmdCopyQueryPoolResults)

METHOD(vkCmdPushConstants)

METHOD(vkCmdBeginRenderPass)

METHOD(vkCmdNextSubpass)

METHOD(vkCmdEndRenderPass)

METHOD(vkCmdExecuteCommands)

METHOD(vkEnumerateInstanceVersion)

METHOD(vkBindBufferMemory2)

METHOD(vkBindImageMemory2)

METHOD(vkGetDeviceGroupPeerMemoryFeatures)

METHOD(vkCmdSetDeviceMask)

METHOD(vkCmdDispatchBase)

METHOD(vkEnumeratePhysicalDeviceGroups)

METHOD(vkGetImageMemoryRequirements2)

METHOD(vkGetBufferMemoryRequirements2)

METHOD(vkGetImageSparseMemoryRequirements2)

METHOD(vkGetPhysicalDeviceFeatures2)

METHOD(vkGetPhysicalDeviceProperties2)

METHOD(vkGetPhysicalDeviceFormatProperties2)

METHOD(vkGetPhysicalDeviceImageFormatProperties2)

METHOD(vkGetPhysicalDeviceQueueFamilyProperties2)

METHOD(vkGetPhysicalDeviceMemoryProperties2)

METHOD(vkGetPhysicalDeviceSparseImageFormatProperties2)

METHOD(vkTrimCommandPool)

METHOD(vkGetDeviceQueue2)

METHOD(vkCreateSamplerYcbcrConversion)

METHOD(vkDestroySamplerYcbcrConversion)

METHOD(vkCreateDescriptorUpdateTemplate)

METHOD(vkDestroyDescriptorUpdateTemplate)

METHOD(vkUpdateDescriptorSetWithTemplate)

METHOD(vkGetPhysicalDeviceExternalBufferProperties)

METHOD(vkGetPhysicalDeviceExternalFenceProperties)

METHOD(vkGetPhysicalDeviceExternalSemaphoreProperties)

METHOD(vkGetDescriptorSetLayoutSupport)

METHOD(vkDestroySurfaceKHR)

METHOD(vkGetPhysicalDeviceSurfaceSupportKHR)

METHOD(vkGetPhysicalDeviceSurfaceCapabilitiesKHR)

METHOD(vkGetPhysicalDeviceSurfaceFormatsKHR)

METHOD(vkGetPhysicalDeviceSurfacePresentModesKHR)

METHOD(vkCreateSwapchainKHR)

METHOD(vkDestroySwapchainKHR)

METHOD(vkGetSwapchainImagesKHR)

METHOD(vkAcquireNextImageKHR)

METHOD(vkQueuePresentKHR)

METHOD(vkGetDeviceGroupPresentCapabilitiesKHR)

METHOD(vkGetDeviceGroupSurfacePresentModesKHR)

METHOD(vkGetPhysicalDevicePresentRectanglesKHR)

METHOD(vkAcquireNextImage2KHR)

METHOD(vkGetPhysicalDeviceDisplayPropertiesKHR)

METHOD(vkGetPhysicalDeviceDisplayPlanePropertiesKHR)

METHOD(vkGetDisplayPlaneSupportedDisplaysKHR)

METHOD(vkGetDisplayModePropertiesKHR)

METHOD(vkCreateDisplayModeKHR)

METHOD(vkGetDisplayPlaneCapabilitiesKHR)

METHOD(vkCreateDisplayPlaneSurfaceKHR)

METHOD(vkCreateSharedSwapchainsKHR)

METHOD(vkGetPhysicalDeviceFeatures2KHR)

METHOD(vkGetPhysicalDeviceProperties2KHR)

METHOD(vkGetPhysicalDeviceFormatProperties2KHR)

METHOD(vkGetPhysicalDeviceImageFormatProperties2KHR)

METHOD(vkGetPhysicalDeviceQueueFamilyProperties2KHR)

METHOD(vkGetPhysicalDeviceMemoryProperties2KHR)

METHOD(vkGetPhysicalDeviceSparseImageFormatProperties2KHR)

METHOD(vkGetDeviceGroupPeerMemoryFeaturesKHR)

METHOD(vkCmdSetDeviceMaskKHR)

METHOD(vkCmdDispatchBaseKHR)

METHOD(vkTrimCommandPoolKHR)

METHOD(vkEnumeratePhysicalDeviceGroupsKHR)

METHOD(vkGetPhysicalDeviceExternalBufferPropertiesKHR)

METHOD(vkGetMemoryFdKHR)

METHOD(vkGetMemoryFdPropertiesKHR)

METHOD(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)

METHOD(vkImportSemaphoreFdKHR)

METHOD(vkGetSemaphoreFdKHR)

METHOD(vkCmdPushDescriptorSetKHR)

METHOD(vkCmdPushDescriptorSetWithTemplateKHR)

METHOD(vkCreateDescriptorUpdateTemplateKHR)

METHOD(vkDestroyDescriptorUpdateTemplateKHR)

METHOD(vkUpdateDescriptorSetWithTemplateKHR)

METHOD(vkCreateRenderPass2KHR)

METHOD(vkCmdBeginRenderPass2KHR)

METHOD(vkCmdNextSubpass2KHR)

METHOD(vkCmdEndRenderPass2KHR)

METHOD(vkGetSwapchainStatusKHR)

METHOD(vkGetPhysicalDeviceExternalFencePropertiesKHR)

METHOD(vkImportFenceFdKHR)

METHOD(vkGetFenceFdKHR)

METHOD(vkGetPhysicalDeviceSurfaceCapabilities2KHR)

METHOD(vkGetPhysicalDeviceSurfaceFormats2KHR)

METHOD(vkGetPhysicalDeviceDisplayProperties2KHR)

METHOD(vkGetPhysicalDeviceDisplayPlaneProperties2KHR)

METHOD(vkGetDisplayModeProperties2KHR)

METHOD(vkGetDisplayPlaneCapabilities2KHR)

METHOD(vkGetImageMemoryRequirements2KHR)

METHOD(vkGetBufferMemoryRequirements2KHR)

METHOD(vkGetImageSparseMemoryRequirements2KHR)

METHOD(vkCreateSamplerYcbcrConversionKHR)

METHOD(vkDestroySamplerYcbcrConversionKHR)

METHOD(vkBindBufferMemory2KHR)

METHOD(vkBindImageMemory2KHR)

METHOD(vkGetDescriptorSetLayoutSupportKHR)

METHOD(vkCmdDrawIndirectCountKHR)

METHOD(vkCmdDrawIndexedIndirectCountKHR)

METHOD(vkCreateDebugReportCallbackEXT)

METHOD(vkDestroyDebugReportCallbackEXT)

METHOD(vkDebugReportMessageEXT)

METHOD(vkDebugMarkerSetObjectTagEXT)

METHOD(vkDebugMarkerSetObjectNameEXT)

METHOD(vkCmdDebugMarkerBeginEXT)

METHOD(vkCmdDebugMarkerEndEXT)

METHOD(vkCmdDebugMarkerInsertEXT)

METHOD(vkCmdBindTransformFeedbackBuffersEXT)

METHOD(vkCmdBeginTransformFeedbackEXT)

METHOD(vkCmdEndTransformFeedbackEXT)

METHOD(vkCmdBeginQueryIndexedEXT)

METHOD(vkCmdEndQueryIndexedEXT)

METHOD(vkCmdDrawIndirectByteCountEXT)

METHOD(vkGetImageViewHandleNVX)

METHOD(vkCmdDrawIndirectCountAMD)

METHOD(vkCmdDrawIndexedIndirectCountAMD)

METHOD(vkGetShaderInfoAMD)

METHOD(vkGetPhysicalDeviceExternalImageFormatPropertiesNV)

METHOD(vkCmdBeginConditionalRenderingEXT)

METHOD(vkCmdEndConditionalRenderingEXT)

METHOD(vkCmdProcessCommandsNVX)

METHOD(vkCmdReserveSpaceForCommandsNVX)

METHOD(vkCreateIndirectCommandsLayoutNVX)

METHOD(vkDestroyIndirectCommandsLayoutNVX)

METHOD(vkCreateObjectTableNVX)

METHOD(vkDestroyObjectTableNVX)

METHOD(vkRegisterObjectsNVX)

METHOD(vkUnregisterObjectsNVX)

METHOD(vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX)

METHOD(vkCmdSetViewportWScalingNV)

METHOD(vkReleaseDisplayEXT)

METHOD(vkGetPhysicalDeviceSurfaceCapabilities2EXT)

METHOD(vkDisplayPowerControlEXT)

METHOD(vkRegisterDeviceEventEXT)

METHOD(vkRegisterDisplayEventEXT)

METHOD(vkGetSwapchainCounterEXT)

METHOD(vkGetRefreshCycleDurationGOOGLE)

METHOD(vkGetPastPresentationTimingGOOGLE)

METHOD(vkCmdSetDiscardRectangleEXT)

METHOD(vkSetHdrMetadataEXT)

METHOD(vkSetDebugUtilsObjectNameEXT)

METHOD(vkSetDebugUtilsObjectTagEXT)

METHOD(vkQueueBeginDebugUtilsLabelEXT)

METHOD(vkQueueEndDebugUtilsLabelEXT)

METHOD(vkQueueInsertDebugUtilsLabelEXT)

METHOD(vkCmdBeginDebugUtilsLabelEXT)

METHOD(vkCmdEndDebugUtilsLabelEXT)

METHOD(vkCmdInsertDebugUtilsLabelEXT)

METHOD(vkCreateDebugUtilsMessengerEXT)

METHOD(vkDestroyDebugUtilsMessengerEXT)

METHOD(vkSubmitDebugUtilsMessageEXT)

METHOD(vkCmdSetSampleLocationsEXT)

METHOD(vkGetPhysicalDeviceMultisamplePropertiesEXT)

METHOD(vkGetImageDrmFormatModifierPropertiesEXT)

METHOD(vkCreateValidationCacheEXT)

METHOD(vkDestroyValidationCacheEXT)

METHOD(vkMergeValidationCachesEXT)

METHOD(vkGetValidationCacheDataEXT)

METHOD(vkCmdBindShadingRateImageNV)

METHOD(vkCmdSetViewportShadingRatePaletteNV)

METHOD(vkCmdSetCoarseSampleOrderNV)

METHOD(vkCreateAccelerationStructureNV)

METHOD(vkDestroyAccelerationStructureNV)

METHOD(vkGetAccelerationStructureMemoryRequirementsNV)

METHOD(vkBindAccelerationStructureMemoryNV)

METHOD(vkCmdBuildAccelerationStructureNV)

METHOD(vkCmdCopyAccelerationStructureNV)

METHOD(vkCmdTraceRaysNV)

METHOD(vkCreateRayTracingPipelinesNV)

METHOD(vkGetRayTracingShaderGroupHandlesNV)

METHOD(vkGetAccelerationStructureHandleNV)

METHOD(vkCmdWriteAccelerationStructuresPropertiesNV)

METHOD(vkCompileDeferredNV)

METHOD(vkGetMemoryHostPointerPropertiesEXT)

METHOD(vkCmdWriteBufferMarkerAMD)

METHOD(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)

METHOD(vkGetCalibratedTimestampsEXT)

METHOD(vkCmdDrawMeshTasksNV)

METHOD(vkCmdDrawMeshTasksIndirectNV)

METHOD(vkCmdDrawMeshTasksIndirectCountNV)

METHOD(vkCmdSetExclusiveScissorNV)

METHOD(vkCmdSetCheckpointNV)

METHOD(vkGetQueueCheckpointDataNV)

METHOD(vkSetLocalDimmingAMD)

METHOD(vkGetBufferDeviceAddressEXT)

METHOD(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)

METHOD(vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)

METHOD(vkCreateHeadlessSurfaceEXT)

METHOD(vkResetQueryPoolEXT)

METHOD(vkCreateWin32SurfaceKHR)

METHOD(vkGetPhysicalDeviceWin32PresentationSupportKHR)

METHOD(vkGetMemoryWin32HandleKHR)

METHOD(vkGetMemoryWin32HandlePropertiesKHR)

METHOD(vkImportSemaphoreWin32HandleKHR)

METHOD(vkGetSemaphoreWin32HandleKHR)

METHOD(vkImportFenceWin32HandleKHR)

METHOD(vkGetFenceWin32HandleKHR)

METHOD(vkGetMemoryWin32HandleNV)

METHOD(vkGetPhysicalDeviceSurfacePresentModes2EXT)

METHOD(vkAcquireFullScreenExclusiveModeEXT)

METHOD(vkReleaseFullScreenExclusiveModeEXT)

METHOD(vkGetDeviceGroupSurfacePresentModes2EXT)

