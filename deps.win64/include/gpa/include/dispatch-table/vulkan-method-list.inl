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
struct
{
    
    VkResult (VKAPI_CALL *vkCreateInstance)(const VkInstanceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkInstance * pInstance, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyInstance)(VkInstance instance, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumeratePhysicalDevices)(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceFeatures)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures * pFeatures, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties * pFormatProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceImageFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties * pImageFormatProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceProperties)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceQueueFamilyProperties)(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties * pQueueFamilyProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceMemoryProperties)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties * pMemoryProperties, struct ::GPADispatchTable const*& tlsRef);
    
    PFN_vkVoidFunction (VKAPI_CALL *vkGetInstanceProcAddr)(VkInstance instance, const char * pName, struct ::GPADispatchTable const*& tlsRef);
    
    PFN_vkVoidFunction (VKAPI_CALL *vkGetDeviceProcAddr)(VkDevice device, const char * pName, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDevice)(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyDevice)(VkDevice device, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumerateInstanceExtensionProperties)(const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumerateDeviceExtensionProperties)(VkPhysicalDevice physicalDevice, const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumerateInstanceLayerProperties)(uint32_t * pPropertyCount, VkLayerProperties * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumerateDeviceLayerProperties)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkLayerProperties * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetDeviceQueue)(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkQueueSubmit)(VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkQueueWaitIdle)(VkQueue queue, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkDeviceWaitIdle)(VkDevice device, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkAllocateMemory)(VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkFreeMemory)(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkMapMemory)(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void ** ppData, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkUnmapMemory)(VkDevice device, VkDeviceMemory memory, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkFlushMappedMemoryRanges)(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkInvalidateMappedMemoryRanges)(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetDeviceMemoryCommitment)(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBindBufferMemory)(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBindImageMemory)(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetBufferMemoryRequirements)(VkDevice device, VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetImageMemoryRequirements)(VkDevice device, VkImage image, VkMemoryRequirements * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetImageSparseMemoryRequirements)(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceSparseImageFormatProperties)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, VkSparseImageFormatProperties * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkQueueBindSparse)(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateFence)(VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyFence)(VkDevice device, VkFence fence, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkResetFences)(VkDevice device, uint32_t fenceCount, const VkFence * pFences, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetFenceStatus)(VkDevice device, VkFence fence, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkWaitForFences)(VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateSemaphore)(VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroySemaphore)(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateEvent)(VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyEvent)(VkDevice device, VkEvent event, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetEventStatus)(VkDevice device, VkEvent event, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkSetEvent)(VkDevice device, VkEvent event, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkResetEvent)(VkDevice device, VkEvent event, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateQueryPool)(VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyQueryPool)(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetQueryPoolResults)(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateBuffer)(VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyBuffer)(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateBufferView)(VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyBufferView)(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateImage)(VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyImage)(VkDevice device, VkImage image, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetImageSubresourceLayout)(VkDevice device, VkImage image, const VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateImageView)(VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyImageView)(VkDevice device, VkImageView imageView, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateShaderModule)(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyShaderModule)(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreatePipelineCache)(VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyPipelineCache)(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPipelineCacheData)(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkMergePipelineCaches)(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache * pSrcCaches, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateGraphicsPipelines)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateComputePipelines)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyPipeline)(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreatePipelineLayout)(VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyPipelineLayout)(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateSampler)(VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroySampler)(VkDevice device, VkSampler sampler, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDescriptorSetLayout)(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyDescriptorSetLayout)(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDescriptorPool)(VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyDescriptorPool)(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkResetDescriptorPool)(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkAllocateDescriptorSets)(VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkFreeDescriptorSets)(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkUpdateDescriptorSets)(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateFramebuffer)(VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyFramebuffer)(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateRenderPass)(VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyRenderPass)(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetRenderAreaGranularity)(VkDevice device, VkRenderPass renderPass, VkExtent2D * pGranularity, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateCommandPool)(VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyCommandPool)(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkResetCommandPool)(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkAllocateCommandBuffers)(VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkFreeCommandBuffers)(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBeginCommandBuffer)(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEndCommandBuffer)(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkResetCommandBuffer)(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBindPipeline)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetViewport)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetScissor)(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetLineWidth)(VkCommandBuffer commandBuffer, float lineWidth, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetDepthBias)(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetBlendConstants)(VkCommandBuffer commandBuffer, const float  blendConstants[4], struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetDepthBounds)(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetStencilCompareMask)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetStencilWriteMask)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetStencilReference)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBindDescriptorSets)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBindIndexBuffer)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBindVertexBuffers)(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDraw)(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndexed)(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndexedIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDispatch)(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDispatchIndirect)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdCopyBuffer)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdCopyImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBlitImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdCopyBufferToImage)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdCopyImageToBuffer)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdUpdateBuffer)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdFillBuffer)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdClearColorImage)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdClearDepthStencilImage)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdClearAttachments)(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdResolveImage)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetEvent)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdResetEvent)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdWaitEvents)(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdPipelineBarrier)(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBeginQuery)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdEndQuery)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdResetQueryPool)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdWriteTimestamp)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdCopyQueryPoolResults)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdPushConstants)(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBeginRenderPass)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdNextSubpass)(VkCommandBuffer commandBuffer, VkSubpassContents contents, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdEndRenderPass)(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdExecuteCommands)(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumerateInstanceVersion)(uint32_t * pApiVersion, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBindBufferMemory2)(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBindImageMemory2)(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetDeviceGroupPeerMemoryFeatures)(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetDeviceMask)(VkCommandBuffer commandBuffer, uint32_t deviceMask, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDispatchBase)(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumeratePhysicalDeviceGroups)(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetImageMemoryRequirements2)(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetBufferMemoryRequirements2)(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetImageSparseMemoryRequirements2)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceFeatures2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceProperties2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceFormatProperties2)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceImageFormatProperties2)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceQueueFamilyProperties2)(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceMemoryProperties2)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceSparseImageFormatProperties2)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkTrimCommandPool)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetDeviceQueue2)(VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateSamplerYcbcrConversion)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroySamplerYcbcrConversion)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDescriptorUpdateTemplate)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyDescriptorUpdateTemplate)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkUpdateDescriptorSetWithTemplate)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceExternalBufferProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceExternalFenceProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceExternalSemaphoreProperties)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetDescriptorSetLayoutSupport)(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroySurfaceKHR)(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfaceSupportKHR)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfaceCapabilitiesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR * pSurfaceCapabilities, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfaceFormatsKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, VkSurfaceFormatKHR * pSurfaceFormats, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfacePresentModesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateSwapchainKHR)(VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroySwapchainKHR)(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetSwapchainImagesKHR)(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkAcquireNextImageKHR)(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkQueuePresentKHR)(VkQueue queue, const VkPresentInfoKHR * pPresentInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDeviceGroupPresentCapabilitiesKHR)(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDeviceGroupSurfacePresentModesKHR)(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDevicePresentRectanglesKHR)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, VkRect2D * pRects, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkAcquireNextImage2KHR)(VkDevice device, const VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceDisplayPropertiesKHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPropertiesKHR * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceDisplayPlanePropertiesKHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlanePropertiesKHR * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDisplayPlaneSupportedDisplaysKHR)(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDisplayModePropertiesKHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModePropertiesKHR * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDisplayModeKHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDisplayPlaneCapabilitiesKHR)(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR * pCapabilities, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDisplayPlaneSurfaceKHR)(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateSharedSwapchainsKHR)(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceFeatures2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceProperties2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceFormatProperties2KHR)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceImageFormatProperties2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceQueueFamilyProperties2KHR)(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceMemoryProperties2KHR)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceSparseImageFormatProperties2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetDeviceGroupPeerMemoryFeaturesKHR)(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetDeviceMaskKHR)(VkCommandBuffer commandBuffer, uint32_t deviceMask, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDispatchBaseKHR)(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkTrimCommandPoolKHR)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkEnumeratePhysicalDeviceGroupsKHR)(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceExternalBufferPropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetMemoryFdKHR)(VkDevice device, const VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetMemoryFdPropertiesKHR)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkImportSemaphoreFdKHR)(VkDevice device, const VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetSemaphoreFdKHR)(VkDevice device, const VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdPushDescriptorSetKHR)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdPushDescriptorSetWithTemplateKHR)(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDescriptorUpdateTemplateKHR)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyDescriptorUpdateTemplateKHR)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkUpdateDescriptorSetWithTemplateKHR)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateRenderPass2KHR)(VkDevice device, const VkRenderPassCreateInfo2KHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBeginRenderPass2KHR)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfoKHR * pSubpassBeginInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdNextSubpass2KHR)(VkCommandBuffer commandBuffer, const VkSubpassBeginInfoKHR * pSubpassBeginInfo, const VkSubpassEndInfoKHR * pSubpassEndInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdEndRenderPass2KHR)(VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR * pSubpassEndInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetSwapchainStatusKHR)(VkDevice device, VkSwapchainKHR swapchain, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceExternalFencePropertiesKHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkImportFenceFdKHR)(VkDevice device, const VkImportFenceFdInfoKHR * pImportFenceFdInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetFenceFdKHR)(VkDevice device, const VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfaceCapabilities2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkSurfaceCapabilities2KHR * pSurfaceCapabilities, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfaceFormats2KHR)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pSurfaceFormatCount, VkSurfaceFormat2KHR * pSurfaceFormats, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceDisplayProperties2KHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayProperties2KHR * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceDisplayPlaneProperties2KHR)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlaneProperties2KHR * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDisplayModeProperties2KHR)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModeProperties2KHR * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDisplayPlaneCapabilities2KHR)(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR * pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR * pCapabilities, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetImageMemoryRequirements2KHR)(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetBufferMemoryRequirements2KHR)(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetImageSparseMemoryRequirements2KHR)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateSamplerYcbcrConversionKHR)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroySamplerYcbcrConversionKHR)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBindBufferMemory2KHR)(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBindImageMemory2KHR)(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetDescriptorSetLayoutSupportKHR)(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndirectCountKHR)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndexedIndirectCountKHR)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDebugReportCallbackEXT)(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugReportCallbackEXT * pCallback, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyDebugReportCallbackEXT)(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDebugReportMessageEXT)(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char * pLayerPrefix, const char * pMessage, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkDebugMarkerSetObjectTagEXT)(VkDevice device, const VkDebugMarkerObjectTagInfoEXT * pTagInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkDebugMarkerSetObjectNameEXT)(VkDevice device, const VkDebugMarkerObjectNameInfoEXT * pNameInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDebugMarkerBeginEXT)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDebugMarkerEndEXT)(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDebugMarkerInsertEXT)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBindTransformFeedbackBuffersEXT)(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBeginTransformFeedbackEXT)(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdEndTransformFeedbackEXT)(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBeginQueryIndexedEXT)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdEndQueryIndexedEXT)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndirectByteCountEXT)(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride, struct ::GPADispatchTable const*& tlsRef);
    
    uint32_t (VKAPI_CALL *vkGetImageViewHandleNVX)(VkDevice device, const VkImageViewHandleInfoNVX * pInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndirectCountAMD)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawIndexedIndirectCountAMD)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetShaderInfoAMD)(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t * pInfoSize, void * pInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceExternalImageFormatPropertiesNV)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV * pExternalImageFormatProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBeginConditionalRenderingEXT)(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdEndConditionalRenderingEXT)(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdProcessCommandsNVX)(VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX * pProcessCommandsInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdReserveSpaceForCommandsNVX)(VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX * pReserveSpaceInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateIndirectCommandsLayoutNVX)(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNVX * pIndirectCommandsLayout, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyIndirectCommandsLayoutNVX)(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateObjectTableNVX)(VkDevice device, const VkObjectTableCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkObjectTableNVX * pObjectTable, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyObjectTableNVX)(VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkRegisterObjectsNVX)(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectTableEntryNVX *const * ppObjectTableEntries, const uint32_t * pObjectIndices, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkUnregisterObjectsNVX)(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectEntryTypeNVX * pObjectEntryTypes, const uint32_t * pObjectIndices, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX)(VkPhysicalDevice physicalDevice, VkDeviceGeneratedCommandsFeaturesNVX * pFeatures, VkDeviceGeneratedCommandsLimitsNVX * pLimits, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetViewportWScalingNV)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV * pViewportWScalings, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkReleaseDisplayEXT)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfaceCapabilities2EXT)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT * pSurfaceCapabilities, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkDisplayPowerControlEXT)(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT * pDisplayPowerInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkRegisterDeviceEventEXT)(VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkRegisterDisplayEventEXT)(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetSwapchainCounterEXT)(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetRefreshCycleDurationGOOGLE)(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE * pDisplayTimingProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPastPresentationTimingGOOGLE)(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pPresentationTimingCount, VkPastPresentationTimingGOOGLE * pPresentationTimings, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetDiscardRectangleEXT)(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkSetHdrMetadataEXT)(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR * pSwapchains, const VkHdrMetadataEXT * pMetadata, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkSetDebugUtilsObjectNameEXT)(VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkSetDebugUtilsObjectTagEXT)(VkDevice device, const VkDebugUtilsObjectTagInfoEXT * pTagInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkQueueBeginDebugUtilsLabelEXT)(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkQueueEndDebugUtilsLabelEXT)(VkQueue queue, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkQueueInsertDebugUtilsLabelEXT)(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBeginDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdEndDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdInsertDebugUtilsLabelEXT)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateDebugUtilsMessengerEXT)(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyDebugUtilsMessengerEXT)(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkSubmitDebugUtilsMessageEXT)(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetSampleLocationsEXT)(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetPhysicalDeviceMultisamplePropertiesEXT)(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT * pMultisampleProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetImageDrmFormatModifierPropertiesEXT)(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateValidationCacheEXT)(VkDevice device, const VkValidationCacheCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyValidationCacheEXT)(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkMergeValidationCachesEXT)(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT * pSrcCaches, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetValidationCacheDataEXT)(VkDevice device, VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBindShadingRateImageNV)(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetViewportShadingRatePaletteNV)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV * pShadingRatePalettes, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetCoarseSampleOrderNV)(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV * pCustomSampleOrders, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateAccelerationStructureNV)(VkDevice device, const VkAccelerationStructureCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkAccelerationStructureNV * pAccelerationStructure, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkDestroyAccelerationStructureNV)(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetAccelerationStructureMemoryRequirementsNV)(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2KHR * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkBindAccelerationStructureMemoryNV)(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV * pBindInfos, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdBuildAccelerationStructureNV)(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdCopyAccelerationStructureNV)(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeNV mode, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdTraceRaysNV)(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateRayTracingPipelinesNV)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetRayTracingShaderGroupHandlesNV)(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetAccelerationStructureHandleNV)(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdWriteAccelerationStructuresPropertiesNV)(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCompileDeferredNV)(VkDevice device, VkPipeline pipeline, uint32_t shader, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetMemoryHostPointerPropertiesEXT)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdWriteBufferMarkerAMD)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainEXT * pTimeDomains, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetCalibratedTimestampsEXT)(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawMeshTasksNV)(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawMeshTasksIndirectNV)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdDrawMeshTasksIndirectCountNV)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetExclusiveScissorNV)(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D * pExclusiveScissors, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkCmdSetCheckpointNV)(VkCommandBuffer commandBuffer, const void * pCheckpointMarker, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkGetQueueCheckpointDataNV)(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointDataNV * pCheckpointData, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkSetLocalDimmingAMD)(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable, struct ::GPADispatchTable const*& tlsRef);
    
    VkDeviceAddress (VKAPI_CALL *vkGetBufferDeviceAddressEXT)(VkDevice device, const VkBufferDeviceAddressInfoEXT * pInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesNV * pProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)(VkPhysicalDevice physicalDevice, uint32_t * pCombinationCount, VkFramebufferMixedSamplesCombinationNV * pCombinations, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateHeadlessSurfaceEXT)(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface, struct ::GPADispatchTable const*& tlsRef);
    
    void (VKAPI_CALL *vkResetQueryPoolEXT)(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkCreateWin32SurfaceKHR)(VkInstance instance, const VkWin32SurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface, struct ::GPADispatchTable const*& tlsRef);
    
    VkBool32 (VKAPI_CALL *vkGetPhysicalDeviceWin32PresentationSupportKHR)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetMemoryWin32HandleKHR)(VkDevice device, const VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetMemoryWin32HandlePropertiesKHR)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkImportSemaphoreWin32HandleKHR)(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetSemaphoreWin32HandleKHR)(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkImportFenceWin32HandleKHR)(VkDevice device, const VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetFenceWin32HandleKHR)(VkDevice device, const VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetMemoryWin32HandleNV)(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetPhysicalDeviceSurfacePresentModes2EXT)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkAcquireFullScreenExclusiveModeEXT)(VkDevice device, VkSwapchainKHR swapchain, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkReleaseFullScreenExclusiveModeEXT)(VkDevice device, VkSwapchainKHR swapchain, struct ::GPADispatchTable const*& tlsRef);
    
    VkResult (VKAPI_CALL *vkGetDeviceGroupSurfacePresentModes2EXT)(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes, struct ::GPADispatchTable const*& tlsRef);
    

} Vulkan;
