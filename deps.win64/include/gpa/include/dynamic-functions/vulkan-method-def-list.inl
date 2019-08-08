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


typedef VkResult (VKAPI_CALL *PFN_vkCreateInstance)(const VkInstanceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkInstance * pInstance);

typedef void (VKAPI_CALL *PFN_vkDestroyInstance)(VkInstance instance, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkEnumeratePhysicalDevices)(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceFeatures)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures * pFeatures);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties * pFormatProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceImageFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties * pImageFormatProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceProperties)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties * pProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceQueueFamilyProperties)(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties * pQueueFamilyProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceMemoryProperties)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties * pMemoryProperties);

typedef PFN_vkVoidFunction (VKAPI_CALL *PFN_vkGetInstanceProcAddr)(VkInstance instance, const char * pName);

typedef PFN_vkVoidFunction (VKAPI_CALL *PFN_vkGetDeviceProcAddr)(VkDevice device, const char * pName);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDevice)(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice);

typedef void (VKAPI_CALL *PFN_vkDestroyDevice)(VkDevice device, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkEnumerateInstanceExtensionProperties)(const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkEnumerateDeviceExtensionProperties)(VkPhysicalDevice physicalDevice, const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkEnumerateInstanceLayerProperties)(uint32_t * pPropertyCount, VkLayerProperties * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkEnumerateDeviceLayerProperties)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkLayerProperties * pProperties);

typedef void (VKAPI_CALL *PFN_vkGetDeviceQueue)(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue);

typedef VkResult (VKAPI_CALL *PFN_vkQueueSubmit)(VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence);

typedef VkResult (VKAPI_CALL *PFN_vkQueueWaitIdle)(VkQueue queue);

typedef VkResult (VKAPI_CALL *PFN_vkDeviceWaitIdle)(VkDevice device);

typedef VkResult (VKAPI_CALL *PFN_vkAllocateMemory)(VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory);

typedef void (VKAPI_CALL *PFN_vkFreeMemory)(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkMapMemory)(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void ** ppData);

typedef void (VKAPI_CALL *PFN_vkUnmapMemory)(VkDevice device, VkDeviceMemory memory);

typedef VkResult (VKAPI_CALL *PFN_vkFlushMappedMemoryRanges)(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges);

typedef VkResult (VKAPI_CALL *PFN_vkInvalidateMappedMemoryRanges)(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges);

typedef void (VKAPI_CALL *PFN_vkGetDeviceMemoryCommitment)(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes);

typedef VkResult (VKAPI_CALL *PFN_vkBindBufferMemory)(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);

typedef VkResult (VKAPI_CALL *PFN_vkBindImageMemory)(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset);

typedef void (VKAPI_CALL *PFN_vkGetBufferMemoryRequirements)(VkDevice device, VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetImageMemoryRequirements)(VkDevice device, VkImage image, VkMemoryRequirements * pMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetImageSparseMemoryRequirements)(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceSparseImageFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, VkSparseImageFormatProperties * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkQueueBindSparse)(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence);

typedef VkResult (VKAPI_CALL *PFN_vkCreateFence)(VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence);

typedef void (VKAPI_CALL *PFN_vkDestroyFence)(VkDevice device, VkFence fence, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkResetFences)(VkDevice device, uint32_t fenceCount, const VkFence * pFences);

typedef VkResult (VKAPI_CALL *PFN_vkGetFenceStatus)(VkDevice device, VkFence fence);

typedef VkResult (VKAPI_CALL *PFN_vkWaitForFences)(VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout);

typedef VkResult (VKAPI_CALL *PFN_vkCreateSemaphore)(VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore);

typedef void (VKAPI_CALL *PFN_vkDestroySemaphore)(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateEvent)(VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent);

typedef void (VKAPI_CALL *PFN_vkDestroyEvent)(VkDevice device, VkEvent event, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkGetEventStatus)(VkDevice device, VkEvent event);

typedef VkResult (VKAPI_CALL *PFN_vkSetEvent)(VkDevice device, VkEvent event);

typedef VkResult (VKAPI_CALL *PFN_vkResetEvent)(VkDevice device, VkEvent event);

typedef VkResult (VKAPI_CALL *PFN_vkCreateQueryPool)(VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool);

typedef void (VKAPI_CALL *PFN_vkDestroyQueryPool)(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkGetQueryPoolResults)(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags);

typedef VkResult (VKAPI_CALL *PFN_vkCreateBuffer)(VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer);

typedef void (VKAPI_CALL *PFN_vkDestroyBuffer)(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateBufferView)(VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView);

typedef void (VKAPI_CALL *PFN_vkDestroyBufferView)(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateImage)(VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage);

typedef void (VKAPI_CALL *PFN_vkDestroyImage)(VkDevice device, VkImage image, const VkAllocationCallbacks * pAllocator);

typedef void (VKAPI_CALL *PFN_vkGetImageSubresourceLayout)(VkDevice device, VkImage image, const VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout);

typedef VkResult (VKAPI_CALL *PFN_vkCreateImageView)(VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView);

typedef void (VKAPI_CALL *PFN_vkDestroyImageView)(VkDevice device, VkImageView imageView, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateShaderModule)(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule);

typedef void (VKAPI_CALL *PFN_vkDestroyShaderModule)(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreatePipelineCache)(VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache);

typedef void (VKAPI_CALL *PFN_vkDestroyPipelineCache)(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkGetPipelineCacheData)(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData);

typedef VkResult (VKAPI_CALL *PFN_vkMergePipelineCaches)(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache * pSrcCaches);

typedef VkResult (VKAPI_CALL *PFN_vkCreateGraphicsPipelines)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines);

typedef VkResult (VKAPI_CALL *PFN_vkCreateComputePipelines)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines);

typedef void (VKAPI_CALL *PFN_vkDestroyPipeline)(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreatePipelineLayout)(VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout);

typedef void (VKAPI_CALL *PFN_vkDestroyPipelineLayout)(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateSampler)(VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler);

typedef void (VKAPI_CALL *PFN_vkDestroySampler)(VkDevice device, VkSampler sampler, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDescriptorSetLayout)(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout);

typedef void (VKAPI_CALL *PFN_vkDestroyDescriptorSetLayout)(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDescriptorPool)(VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool);

typedef void (VKAPI_CALL *PFN_vkDestroyDescriptorPool)(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkResetDescriptorPool)(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);

typedef VkResult (VKAPI_CALL *PFN_vkAllocateDescriptorSets)(VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets);

typedef VkResult (VKAPI_CALL *PFN_vkFreeDescriptorSets)(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets);

typedef void (VKAPI_CALL *PFN_vkUpdateDescriptorSets)(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies);

typedef VkResult (VKAPI_CALL *PFN_vkCreateFramebuffer)(VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer);

typedef void (VKAPI_CALL *PFN_vkDestroyFramebuffer)(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateRenderPass)(VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass);

typedef void (VKAPI_CALL *PFN_vkDestroyRenderPass)(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks * pAllocator);

typedef void (VKAPI_CALL *PFN_vkGetRenderAreaGranularity)(VkDevice device, VkRenderPass renderPass, VkExtent2D * pGranularity);

typedef VkResult (VKAPI_CALL *PFN_vkCreateCommandPool)(VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool);

typedef void (VKAPI_CALL *PFN_vkDestroyCommandPool)(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkResetCommandPool)(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags);

typedef VkResult (VKAPI_CALL *PFN_vkAllocateCommandBuffers)(VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers);

typedef void (VKAPI_CALL *PFN_vkFreeCommandBuffers)(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers);

typedef VkResult (VKAPI_CALL *PFN_vkBeginCommandBuffer)(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo);

typedef VkResult (VKAPI_CALL *PFN_vkEndCommandBuffer)(VkCommandBuffer commandBuffer);

typedef VkResult (VKAPI_CALL *PFN_vkResetCommandBuffer)(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);

typedef void (VKAPI_CALL *PFN_vkCmdBindPipeline)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);

typedef void (VKAPI_CALL *PFN_vkCmdSetViewport)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports);

typedef void (VKAPI_CALL *PFN_vkCmdSetScissor)(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors);

typedef void (VKAPI_CALL *PFN_vkCmdSetLineWidth)(VkCommandBuffer commandBuffer, float lineWidth);

typedef void (VKAPI_CALL *PFN_vkCmdSetDepthBias)(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);

typedef void (VKAPI_CALL *PFN_vkCmdSetBlendConstants)(VkCommandBuffer commandBuffer, const float  blendConstants[4]);

typedef void (VKAPI_CALL *PFN_vkCmdSetDepthBounds)(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);

typedef void (VKAPI_CALL *PFN_vkCmdSetStencilCompareMask)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);

typedef void (VKAPI_CALL *PFN_vkCmdSetStencilWriteMask)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);

typedef void (VKAPI_CALL *PFN_vkCmdSetStencilReference)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);

typedef void (VKAPI_CALL *PFN_vkCmdBindDescriptorSets)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets);

typedef void (VKAPI_CALL *PFN_vkCmdBindIndexBuffer)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);

typedef void (VKAPI_CALL *PFN_vkCmdBindVertexBuffers)(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets);

typedef void (VKAPI_CALL *PFN_vkCmdDraw)(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndexed)(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndexedIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);

typedef void (VKAPI_CALL *PFN_vkCmdDispatch)(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);

typedef void (VKAPI_CALL *PFN_vkCmdDispatchIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);

typedef void (VKAPI_CALL *PFN_vkCmdCopyBuffer)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions);

typedef void (VKAPI_CALL *PFN_vkCmdCopyImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions);

typedef void (VKAPI_CALL *PFN_vkCmdBlitImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter);

typedef void (VKAPI_CALL *PFN_vkCmdCopyBufferToImage)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions);

typedef void (VKAPI_CALL *PFN_vkCmdCopyImageToBuffer)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions);

typedef void (VKAPI_CALL *PFN_vkCmdUpdateBuffer)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData);

typedef void (VKAPI_CALL *PFN_vkCmdFillBuffer)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);

typedef void (VKAPI_CALL *PFN_vkCmdClearColorImage)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges);

typedef void (VKAPI_CALL *PFN_vkCmdClearDepthStencilImage)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges);

typedef void (VKAPI_CALL *PFN_vkCmdClearAttachments)(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects);

typedef void (VKAPI_CALL *PFN_vkCmdResolveImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions);

typedef void (VKAPI_CALL *PFN_vkCmdSetEvent)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);

typedef void (VKAPI_CALL *PFN_vkCmdResetEvent)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);

typedef void (VKAPI_CALL *PFN_vkCmdWaitEvents)(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers);

typedef void (VKAPI_CALL *PFN_vkCmdPipelineBarrier)(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers);

typedef void (VKAPI_CALL *PFN_vkCmdBeginQuery)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);

typedef void (VKAPI_CALL *PFN_vkCmdEndQuery)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);

typedef void (VKAPI_CALL *PFN_vkCmdResetQueryPool)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);

typedef void (VKAPI_CALL *PFN_vkCmdWriteTimestamp)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);

typedef void (VKAPI_CALL *PFN_vkCmdCopyQueryPoolResults)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);

typedef void (VKAPI_CALL *PFN_vkCmdPushConstants)(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues);

typedef void (VKAPI_CALL *PFN_vkCmdBeginRenderPass)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents);

typedef void (VKAPI_CALL *PFN_vkCmdNextSubpass)(VkCommandBuffer commandBuffer, VkSubpassContents contents);

typedef void (VKAPI_CALL *PFN_vkCmdEndRenderPass)(VkCommandBuffer commandBuffer);

typedef void (VKAPI_CALL *PFN_vkCmdExecuteCommands)(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers);

typedef VkResult (VKAPI_CALL *PFN_vkEnumerateInstanceVersion)(uint32_t * pApiVersion);

typedef VkResult (VKAPI_CALL *PFN_vkBindBufferMemory2)(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos);

typedef VkResult (VKAPI_CALL *PFN_vkBindImageMemory2)(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos);

typedef void (VKAPI_CALL *PFN_vkGetDeviceGroupPeerMemoryFeatures)(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures);

typedef void (VKAPI_CALL *PFN_vkCmdSetDeviceMask)(VkCommandBuffer commandBuffer, uint32_t deviceMask);

typedef void (VKAPI_CALL *PFN_vkCmdDispatchBase)(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);

typedef VkResult (VKAPI_CALL *PFN_vkEnumeratePhysicalDeviceGroups)(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties);

typedef void (VKAPI_CALL *PFN_vkGetImageMemoryRequirements2)(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetBufferMemoryRequirements2)(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetImageSparseMemoryRequirements2)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceFeatures2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceProperties2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceFormatProperties2)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceImageFormatProperties2)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceQueueFamilyProperties2)(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceMemoryProperties2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties);

typedef void (VKAPI_CALL *PFN_vkTrimCommandPool)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);

typedef void (VKAPI_CALL *PFN_vkGetDeviceQueue2)(VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue);

typedef VkResult (VKAPI_CALL *PFN_vkCreateSamplerYcbcrConversion)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion);

typedef void (VKAPI_CALL *PFN_vkDestroySamplerYcbcrConversion)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDescriptorUpdateTemplate)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate);

typedef void (VKAPI_CALL *PFN_vkDestroyDescriptorUpdateTemplate)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator);

typedef void (VKAPI_CALL *PFN_vkUpdateDescriptorSetWithTemplate)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceExternalBufferProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceExternalFenceProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties);

typedef void (VKAPI_CALL *PFN_vkGetDescriptorSetLayoutSupport)(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport);

typedef void (VKAPI_CALL *PFN_vkDestroySurfaceKHR)(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfaceSupportKHR)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR * pSurfaceCapabilities);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, VkSurfaceFormatKHR * pSurfaceFormats);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes);

typedef VkResult (VKAPI_CALL *PFN_vkCreateSwapchainKHR)(VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain);

typedef void (VKAPI_CALL *PFN_vkDestroySwapchainKHR)(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkGetSwapchainImagesKHR)(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages);

typedef VkResult (VKAPI_CALL *PFN_vkAcquireNextImageKHR)(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex);

typedef VkResult (VKAPI_CALL *PFN_vkQueuePresentKHR)(VkQueue queue, const VkPresentInfoKHR * pPresentInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetDeviceGroupPresentCapabilitiesKHR)(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities);

typedef VkResult (VKAPI_CALL *PFN_vkGetDeviceGroupSurfacePresentModesKHR)(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDevicePresentRectanglesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, VkRect2D * pRects);

typedef VkResult (VKAPI_CALL *PFN_vkAcquireNextImage2KHR)(VkDevice device, const VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPropertiesKHR * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlanePropertiesKHR * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetDisplayPlaneSupportedDisplaysKHR)(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays);

typedef VkResult (VKAPI_CALL *PFN_vkGetDisplayModePropertiesKHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModePropertiesKHR * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDisplayModeKHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode);

typedef VkResult (VKAPI_CALL *PFN_vkGetDisplayPlaneCapabilitiesKHR)(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR * pCapabilities);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDisplayPlaneSurfaceKHR)(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface);

typedef VkResult (VKAPI_CALL *PFN_vkCreateSharedSwapchainsKHR)(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceFeatures2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceProperties2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceFormatProperties2KHR)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceMemoryProperties2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties);

typedef void (VKAPI_CALL *PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures);

typedef void (VKAPI_CALL *PFN_vkCmdSetDeviceMaskKHR)(VkCommandBuffer commandBuffer, uint32_t deviceMask);

typedef void (VKAPI_CALL *PFN_vkCmdDispatchBaseKHR)(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);

typedef void (VKAPI_CALL *PFN_vkTrimCommandPoolKHR)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);

typedef VkResult (VKAPI_CALL *PFN_vkEnumeratePhysicalDeviceGroupsKHR)(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetMemoryFdKHR)(VkDevice device, const VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd);

typedef VkResult (VKAPI_CALL *PFN_vkGetMemoryFdPropertiesKHR)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties);

typedef VkResult (VKAPI_CALL *PFN_vkImportSemaphoreFdKHR)(VkDevice device, const VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetSemaphoreFdKHR)(VkDevice device, const VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd);

typedef void (VKAPI_CALL *PFN_vkCmdPushDescriptorSetKHR)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites);

typedef void (VKAPI_CALL *PFN_vkCmdPushDescriptorSetWithTemplateKHR)(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDescriptorUpdateTemplateKHR)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate);

typedef void (VKAPI_CALL *PFN_vkDestroyDescriptorUpdateTemplateKHR)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator);

typedef void (VKAPI_CALL *PFN_vkUpdateDescriptorSetWithTemplateKHR)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData);

typedef VkResult (VKAPI_CALL *PFN_vkCreateRenderPass2KHR)(VkDevice device, const VkRenderPassCreateInfo2KHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass);

typedef void (VKAPI_CALL *PFN_vkCmdBeginRenderPass2KHR)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfoKHR * pSubpassBeginInfo);

typedef void (VKAPI_CALL *PFN_vkCmdNextSubpass2KHR)(VkCommandBuffer commandBuffer, const VkSubpassBeginInfoKHR * pSubpassBeginInfo, const VkSubpassEndInfoKHR * pSubpassEndInfo);

typedef void (VKAPI_CALL *PFN_vkCmdEndRenderPass2KHR)(VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR * pSubpassEndInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetSwapchainStatusKHR)(VkDevice device, VkSwapchainKHR swapchain);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties);

typedef VkResult (VKAPI_CALL *PFN_vkImportFenceFdKHR)(VkDevice device, const VkImportFenceFdInfoKHR * pImportFenceFdInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetFenceFdKHR)(VkDevice device, const VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkSurfaceCapabilities2KHR * pSurfaceCapabilities);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pSurfaceFormatCount, VkSurfaceFormat2KHR * pSurfaceFormats);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceDisplayProperties2KHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayProperties2KHR * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlaneProperties2KHR * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetDisplayModeProperties2KHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModeProperties2KHR * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetDisplayPlaneCapabilities2KHR)(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR * pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR * pCapabilities);

typedef void (VKAPI_CALL *PFN_vkGetImageMemoryRequirements2KHR)(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetBufferMemoryRequirements2KHR)(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements);

typedef void (VKAPI_CALL *PFN_vkGetImageSparseMemoryRequirements2KHR)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements);

typedef VkResult (VKAPI_CALL *PFN_vkCreateSamplerYcbcrConversionKHR)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion);

typedef void (VKAPI_CALL *PFN_vkDestroySamplerYcbcrConversionKHR)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkBindBufferMemory2KHR)(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos);

typedef VkResult (VKAPI_CALL *PFN_vkBindImageMemory2KHR)(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos);

typedef void (VKAPI_CALL *PFN_vkGetDescriptorSetLayoutSupportKHR)(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndirectCountKHR)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndexedIndirectCountKHR)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDebugReportCallbackEXT)(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugReportCallbackEXT * pCallback);

typedef void (VKAPI_CALL *PFN_vkDestroyDebugReportCallbackEXT)(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks * pAllocator);

typedef void (VKAPI_CALL *PFN_vkDebugReportMessageEXT)(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char * pLayerPrefix, const char * pMessage);

typedef VkResult (VKAPI_CALL *PFN_vkDebugMarkerSetObjectTagEXT)(VkDevice device, const VkDebugMarkerObjectTagInfoEXT * pTagInfo);

typedef VkResult (VKAPI_CALL *PFN_vkDebugMarkerSetObjectNameEXT)(VkDevice device, const VkDebugMarkerObjectNameInfoEXT * pNameInfo);

typedef void (VKAPI_CALL *PFN_vkCmdDebugMarkerBeginEXT)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo);

typedef void (VKAPI_CALL *PFN_vkCmdDebugMarkerEndEXT)(VkCommandBuffer commandBuffer);

typedef void (VKAPI_CALL *PFN_vkCmdDebugMarkerInsertEXT)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo);

typedef void (VKAPI_CALL *PFN_vkCmdBindTransformFeedbackBuffersEXT)(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes);

typedef void (VKAPI_CALL *PFN_vkCmdBeginTransformFeedbackEXT)(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets);

typedef void (VKAPI_CALL *PFN_vkCmdEndTransformFeedbackEXT)(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets);

typedef void (VKAPI_CALL *PFN_vkCmdBeginQueryIndexedEXT)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index);

typedef void (VKAPI_CALL *PFN_vkCmdEndQueryIndexedEXT)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndirectByteCountEXT)(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride);

typedef uint32_t (VKAPI_CALL *PFN_vkGetImageViewHandleNVX)(VkDevice device, const VkImageViewHandleInfoNVX * pInfo);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndirectCountAMD)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);

typedef void (VKAPI_CALL *PFN_vkCmdDrawIndexedIndirectCountAMD)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);

typedef VkResult (VKAPI_CALL *PFN_vkGetShaderInfoAMD)(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t * pInfoSize, void * pInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV * pExternalImageFormatProperties);

typedef void (VKAPI_CALL *PFN_vkCmdBeginConditionalRenderingEXT)(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin);

typedef void (VKAPI_CALL *PFN_vkCmdEndConditionalRenderingEXT)(VkCommandBuffer commandBuffer);

typedef void (VKAPI_CALL *PFN_vkCmdProcessCommandsNVX)(VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX * pProcessCommandsInfo);

typedef void (VKAPI_CALL *PFN_vkCmdReserveSpaceForCommandsNVX)(VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX * pReserveSpaceInfo);

typedef VkResult (VKAPI_CALL *PFN_vkCreateIndirectCommandsLayoutNVX)(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNVX * pIndirectCommandsLayout);

typedef void (VKAPI_CALL *PFN_vkDestroyIndirectCommandsLayoutNVX)(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkCreateObjectTableNVX)(VkDevice device, const VkObjectTableCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkObjectTableNVX * pObjectTable);

typedef void (VKAPI_CALL *PFN_vkDestroyObjectTableNVX)(VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkRegisterObjectsNVX)(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectTableEntryNVX *const * ppObjectTableEntries, const uint32_t * pObjectIndices);

typedef VkResult (VKAPI_CALL *PFN_vkUnregisterObjectsNVX)(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectEntryTypeNVX * pObjectEntryTypes, const uint32_t * pObjectIndices);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX)(VkPhysicalDevice physicalDevice, VkDeviceGeneratedCommandsFeaturesNVX * pFeatures, VkDeviceGeneratedCommandsLimitsNVX * pLimits);

typedef void (VKAPI_CALL *PFN_vkCmdSetViewportWScalingNV)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV * pViewportWScalings);

typedef VkResult (VKAPI_CALL *PFN_vkReleaseDisplayEXT)(VkPhysicalDevice physicalDevice, VkDisplayKHR display);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT * pSurfaceCapabilities);

typedef VkResult (VKAPI_CALL *PFN_vkDisplayPowerControlEXT)(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT * pDisplayPowerInfo);

typedef VkResult (VKAPI_CALL *PFN_vkRegisterDeviceEventEXT)(VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence);

typedef VkResult (VKAPI_CALL *PFN_vkRegisterDisplayEventEXT)(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence);

typedef VkResult (VKAPI_CALL *PFN_vkGetSwapchainCounterEXT)(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue);

typedef VkResult (VKAPI_CALL *PFN_vkGetRefreshCycleDurationGOOGLE)(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE * pDisplayTimingProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetPastPresentationTimingGOOGLE)(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pPresentationTimingCount, VkPastPresentationTimingGOOGLE * pPresentationTimings);

typedef void (VKAPI_CALL *PFN_vkCmdSetDiscardRectangleEXT)(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles);

typedef void (VKAPI_CALL *PFN_vkSetHdrMetadataEXT)(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR * pSwapchains, const VkHdrMetadataEXT * pMetadata);

typedef VkResult (VKAPI_CALL *PFN_vkSetDebugUtilsObjectNameEXT)(VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo);

typedef VkResult (VKAPI_CALL *PFN_vkSetDebugUtilsObjectTagEXT)(VkDevice device, const VkDebugUtilsObjectTagInfoEXT * pTagInfo);

typedef void (VKAPI_CALL *PFN_vkQueueBeginDebugUtilsLabelEXT)(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo);

typedef void (VKAPI_CALL *PFN_vkQueueEndDebugUtilsLabelEXT)(VkQueue queue);

typedef void (VKAPI_CALL *PFN_vkQueueInsertDebugUtilsLabelEXT)(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo);

typedef void (VKAPI_CALL *PFN_vkCmdBeginDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo);

typedef void (VKAPI_CALL *PFN_vkCmdEndDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer);

typedef void (VKAPI_CALL *PFN_vkCmdInsertDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo);

typedef VkResult (VKAPI_CALL *PFN_vkCreateDebugUtilsMessengerEXT)(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger);

typedef void (VKAPI_CALL *PFN_vkDestroyDebugUtilsMessengerEXT)(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks * pAllocator);

typedef void (VKAPI_CALL *PFN_vkSubmitDebugUtilsMessageEXT)(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData);

typedef void (VKAPI_CALL *PFN_vkCmdSetSampleLocationsEXT)(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo);

typedef void (VKAPI_CALL *PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT * pMultisampleProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetImageDrmFormatModifierPropertiesEXT)(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkCreateValidationCacheEXT)(VkDevice device, const VkValidationCacheCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache);

typedef void (VKAPI_CALL *PFN_vkDestroyValidationCacheEXT)(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks * pAllocator);

typedef VkResult (VKAPI_CALL *PFN_vkMergeValidationCachesEXT)(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT * pSrcCaches);

typedef VkResult (VKAPI_CALL *PFN_vkGetValidationCacheDataEXT)(VkDevice device, VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData);

typedef void (VKAPI_CALL *PFN_vkCmdBindShadingRateImageNV)(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout);

typedef void (VKAPI_CALL *PFN_vkCmdSetViewportShadingRatePaletteNV)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV * pShadingRatePalettes);

typedef void (VKAPI_CALL *PFN_vkCmdSetCoarseSampleOrderNV)(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV * pCustomSampleOrders);

typedef VkResult (VKAPI_CALL *PFN_vkCreateAccelerationStructureNV)(VkDevice device, const VkAccelerationStructureCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkAccelerationStructureNV * pAccelerationStructure);

typedef void (VKAPI_CALL *PFN_vkDestroyAccelerationStructureNV)(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks * pAllocator);

typedef void (VKAPI_CALL *PFN_vkGetAccelerationStructureMemoryRequirementsNV)(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2KHR * pMemoryRequirements);

typedef VkResult (VKAPI_CALL *PFN_vkBindAccelerationStructureMemoryNV)(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV * pBindInfos);

typedef void (VKAPI_CALL *PFN_vkCmdBuildAccelerationStructureNV)(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset);

typedef void (VKAPI_CALL *PFN_vkCmdCopyAccelerationStructureNV)(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeNV mode);

typedef void (VKAPI_CALL *PFN_vkCmdTraceRaysNV)(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth);

typedef VkResult (VKAPI_CALL *PFN_vkCreateRayTracingPipelinesNV)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines);

typedef VkResult (VKAPI_CALL *PFN_vkGetRayTracingShaderGroupHandlesNV)(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData);

typedef VkResult (VKAPI_CALL *PFN_vkGetAccelerationStructureHandleNV)(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void * pData);

typedef void (VKAPI_CALL *PFN_vkCmdWriteAccelerationStructuresPropertiesNV)(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);

typedef VkResult (VKAPI_CALL *PFN_vkCompileDeferredNV)(VkDevice device, VkPipeline pipeline, uint32_t shader);

typedef VkResult (VKAPI_CALL *PFN_vkGetMemoryHostPointerPropertiesEXT)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties);

typedef void (VKAPI_CALL *PFN_vkCmdWriteBufferMarkerAMD)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainEXT * pTimeDomains);

typedef VkResult (VKAPI_CALL *PFN_vkGetCalibratedTimestampsEXT)(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation);

typedef void (VKAPI_CALL *PFN_vkCmdDrawMeshTasksNV)(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask);

typedef void (VKAPI_CALL *PFN_vkCmdDrawMeshTasksIndirectNV)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);

typedef void (VKAPI_CALL *PFN_vkCmdDrawMeshTasksIndirectCountNV)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);

typedef void (VKAPI_CALL *PFN_vkCmdSetExclusiveScissorNV)(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D * pExclusiveScissors);

typedef void (VKAPI_CALL *PFN_vkCmdSetCheckpointNV)(VkCommandBuffer commandBuffer, const void * pCheckpointMarker);

typedef void (VKAPI_CALL *PFN_vkGetQueueCheckpointDataNV)(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointDataNV * pCheckpointData);

typedef void (VKAPI_CALL *PFN_vkSetLocalDimmingAMD)(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);

typedef VkDeviceAddress (VKAPI_CALL *PFN_vkGetBufferDeviceAddressEXT)(VkDevice device, const VkBufferDeviceAddressInfoEXT * pInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesNV * pProperties);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)(VkPhysicalDevice physicalDevice, uint32_t * pCombinationCount, VkFramebufferMixedSamplesCombinationNV * pCombinations);

typedef VkResult (VKAPI_CALL *PFN_vkCreateHeadlessSurfaceEXT)(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface);

typedef void (VKAPI_CALL *PFN_vkResetQueryPoolEXT)(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);

typedef VkResult (VKAPI_CALL *PFN_vkCreateWin32SurfaceKHR)(VkInstance instance, const VkWin32SurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface);

typedef VkBool32 (VKAPI_CALL *PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex);

typedef VkResult (VKAPI_CALL *PFN_vkGetMemoryWin32HandleKHR)(VkDevice device, const VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle);

typedef VkResult (VKAPI_CALL *PFN_vkGetMemoryWin32HandlePropertiesKHR)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties);

typedef VkResult (VKAPI_CALL *PFN_vkImportSemaphoreWin32HandleKHR)(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetSemaphoreWin32HandleKHR)(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle);

typedef VkResult (VKAPI_CALL *PFN_vkImportFenceWin32HandleKHR)(VkDevice device, const VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo);

typedef VkResult (VKAPI_CALL *PFN_vkGetFenceWin32HandleKHR)(VkDevice device, const VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle);

typedef VkResult (VKAPI_CALL *PFN_vkGetMemoryWin32HandleNV)(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle);

typedef VkResult (VKAPI_CALL *PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes);

typedef VkResult (VKAPI_CALL *PFN_vkAcquireFullScreenExclusiveModeEXT)(VkDevice device, VkSwapchainKHR swapchain);

typedef VkResult (VKAPI_CALL *PFN_vkReleaseFullScreenExclusiveModeEXT)(VkDevice device, VkSwapchainKHR swapchain);

typedef VkResult (VKAPI_CALL *PFN_vkGetDeviceGroupSurfacePresentModes2EXT)(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes);

