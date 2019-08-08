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






#include "dispatch-table/dispatch-table.h"

namespace gpa {
namespace vulkan {


VkResult VKAPI_CALL Passthrough_vkCreateInstance(const VkInstanceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkInstance * pInstance, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateInstance;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(pCreateInfo, pAllocator, pInstance, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyInstance;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumeratePhysicalDevices(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumeratePhysicalDevices;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pPhysicalDeviceCount, pPhysicalDevices, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures * pFeatures, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceFeatures;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pFeatures, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties * pFormatProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceFormatProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, format, pFormatProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties * pImageFormatProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceImageFormatProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties * pQueueFamilyProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceQueueFamilyProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties * pMemoryProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceMemoryProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pMemoryProperties, tlsRef);
}

PFN_vkVoidFunction VKAPI_CALL Passthrough_vkGetInstanceProcAddr(VkInstance instance, const char * pName, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetInstanceProcAddr;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pName, tlsRef);
}

PFN_vkVoidFunction VKAPI_CALL Passthrough_vkGetDeviceProcAddr(VkDevice device, const char * pName, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceProcAddr;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pName, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDevice;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pCreateInfo, pAllocator, pDevice, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyDevice(VkDevice device, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyDevice;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumerateInstanceExtensionProperties(const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumerateInstanceExtensionProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(pLayerName, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumerateDeviceExtensionProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pLayerName, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumerateInstanceLayerProperties(uint32_t * pPropertyCount, VkLayerProperties * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumerateInstanceLayerProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkLayerProperties * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumerateDeviceLayerProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pPropertyCount, pProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceQueue;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, queueFamilyIndex, queueIndex, pQueue, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkQueueSubmit;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, submitCount, pSubmits, fence, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkQueueWaitIdle(VkQueue queue, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkQueueWaitIdle;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkDeviceWaitIdle(VkDevice device, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDeviceWaitIdle;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkAllocateMemory(VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkAllocateMemory;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pAllocateInfo, pAllocator, pMemory, tlsRef);
}

void VKAPI_CALL Passthrough_vkFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkFreeMemory;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, memory, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void ** ppData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkMapMemory;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, memory, offset, size, flags, ppData, tlsRef);
}

void VKAPI_CALL Passthrough_vkUnmapMemory(VkDevice device, VkDeviceMemory memory, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkUnmapMemory;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, memory, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkFlushMappedMemoryRanges;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, memoryRangeCount, pMemoryRanges, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkInvalidateMappedMemoryRanges;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, memoryRangeCount, pMemoryRanges, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceMemoryCommitment;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, memory, pCommittedMemoryInBytes, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBindBufferMemory;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, buffer, memory, memoryOffset, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBindImageMemory;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, image, memory, memoryOffset, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetBufferMemoryRequirements;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, buffer, pMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageMemoryRequirements;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, image, pMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageSparseMemoryRequirements;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, VkSparseImageFormatProperties * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSparseImageFormatProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkQueueBindSparse;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, bindInfoCount, pBindInfo, fence, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateFence(VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateFence;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pFence, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyFence;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, fence, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkResetFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkResetFences;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, fenceCount, pFences, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetFenceStatus(VkDevice device, VkFence fence, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetFenceStatus;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, fence, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkWaitForFences;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, fenceCount, pFences, waitAll, timeout, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateSemaphore;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pSemaphore, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroySemaphore;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, semaphore, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateEvent(VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateEvent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pEvent, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyEvent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, event, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetEventStatus(VkDevice device, VkEvent event, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetEventStatus;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, event, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkSetEvent(VkDevice device, VkEvent event, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkSetEvent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, event, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkResetEvent(VkDevice device, VkEvent event, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkResetEvent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, event, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateQueryPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pQueryPool, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyQueryPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, queryPool, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetQueryPoolResults;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateBuffer(VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pBuffer, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, buffer, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateBufferView(VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateBufferView;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pView, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyBufferView;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, bufferView, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateImage(VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pImage, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, image, pAllocator, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageSubresourceLayout;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, image, pSubresource, pLayout, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateImageView(VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateImageView;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pView, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyImageView;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, imageView, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateShaderModule;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pShaderModule, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyShaderModule;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, shaderModule, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreatePipelineCache;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pPipelineCache, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyPipelineCache;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipelineCache, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPipelineCacheData;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipelineCache, pDataSize, pData, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache * pSrcCaches, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkMergePipelineCaches;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, dstCache, srcCacheCount, pSrcCaches, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateGraphicsPipelines;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateComputePipelines;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyPipeline;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipeline, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreatePipelineLayout;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pPipelineLayout, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyPipelineLayout;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipelineLayout, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateSampler(VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateSampler;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pSampler, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroySampler;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, sampler, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDescriptorSetLayout;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pSetLayout, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyDescriptorSetLayout;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorSetLayout, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDescriptorPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pDescriptorPool, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyDescriptorPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorPool, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkResetDescriptorPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorPool, flags, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkAllocateDescriptorSets;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pAllocateInfo, pDescriptorSets, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkFreeDescriptorSets;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorPool, descriptorSetCount, pDescriptorSets, tlsRef);
}

void VKAPI_CALL Passthrough_vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkUpdateDescriptorSets;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateFramebuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pFramebuffer, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyFramebuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, framebuffer, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateRenderPass;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pRenderPass, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyRenderPass;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, renderPass, pAllocator, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D * pGranularity, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetRenderAreaGranularity;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, renderPass, pGranularity, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateCommandPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pCommandPool, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyCommandPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, commandPool, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkResetCommandPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, commandPool, flags, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkAllocateCommandBuffers;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pAllocateInfo, pCommandBuffers, tlsRef);
}

void VKAPI_CALL Passthrough_vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkFreeCommandBuffers;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, commandPool, commandBufferCount, pCommandBuffers, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBeginCommandBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pBeginInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEndCommandBuffer(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEndCommandBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkResetCommandBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, flags, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBindPipeline;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pipelineBindPoint, pipeline, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetViewport;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstViewport, viewportCount, pViewports, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetScissor;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstScissor, scissorCount, pScissors, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetLineWidth;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, lineWidth, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetDepthBias;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float  blendConstants[4], struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetBlendConstants;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, blendConstants, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetDepthBounds;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, minDepthBounds, maxDepthBounds, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetStencilCompareMask;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, faceMask, compareMask, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetStencilWriteMask;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, faceMask, writeMask, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetStencilReference;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, faceMask, reference, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBindDescriptorSets;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBindIndexBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, indexType, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBindVertexBuffers;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDraw;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndexed;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndirect;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, drawCount, stride, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndexedIndirect;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, drawCount, stride, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDispatch;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, groupCountX, groupCountY, groupCountZ, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDispatchIndirect;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdCopyBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdCopyImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBlitImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdCopyBufferToImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdCopyImageToBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdUpdateBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, dstBuffer, dstOffset, dataSize, pData, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdFillBuffer;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, dstBuffer, dstOffset, size, data, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdClearColorImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdClearDepthStencilImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdClearAttachments;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, attachmentCount, pAttachments, rectCount, pRects, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdResolveImage;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetEvent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, event, stageMask, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdResetEvent;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, event, stageMask, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdWaitEvents;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdPipelineBarrier;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBeginQuery;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, queryPool, query, flags, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdEndQuery;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, queryPool, query, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdResetQueryPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, queryPool, firstQuery, queryCount, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdWriteTimestamp;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pipelineStage, queryPool, query, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdCopyQueryPoolResults;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdPushConstants;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, layout, stageFlags, offset, size, pValues, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBeginRenderPass;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pRenderPassBegin, contents, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdNextSubpass;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, contents, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdEndRenderPass(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdEndRenderPass;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdExecuteCommands;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, commandBufferCount, pCommandBuffers, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumerateInstanceVersion(uint32_t * pApiVersion, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumerateInstanceVersion;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(pApiVersion, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBindBufferMemory2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, bindInfoCount, pBindInfos, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBindImageMemory2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, bindInfoCount, pBindInfos, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceGroupPeerMemoryFeatures;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetDeviceMask;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, deviceMask, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDispatchBase;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumeratePhysicalDeviceGroups;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageMemoryRequirements2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, pMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetBufferMemoryRequirements2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, pMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageSparseMemoryRequirements2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceFeatures2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pFeatures, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceProperties2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceFormatProperties2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, format, pFormatProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceImageFormatProperties2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pImageFormatInfo, pImageFormatProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceQueueFamilyProperties2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceMemoryProperties2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pMemoryProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSparseImageFormatProperties2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pFormatInfo, pPropertyCount, pProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkTrimCommandPool;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, commandPool, flags, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceQueue2;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pQueueInfo, pQueue, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateSamplerYcbcrConversion;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pYcbcrConversion, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroySamplerYcbcrConversion;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, ycbcrConversion, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDescriptorUpdateTemplate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyDescriptorUpdateTemplate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorUpdateTemplate, pAllocator, tlsRef);
}

void VKAPI_CALL Passthrough_vkUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkUpdateDescriptorSetWithTemplate;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorSet, descriptorUpdateTemplate, pData, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceExternalBufferProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pExternalBufferInfo, pExternalBufferProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceExternalFenceProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pExternalFenceInfo, pExternalFenceProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceExternalSemaphoreProperties;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDescriptorSetLayoutSupport;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pSupport, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroySurfaceKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, surface, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfaceSupportKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, queueFamilyIndex, surface, pSupported, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR * pSurfaceCapabilities, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, surface, pSurfaceCapabilities, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, VkSurfaceFormatKHR * pSurfaceFormats, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfaceFormatsKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfacePresentModesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, surface, pPresentModeCount, pPresentModes, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateSwapchainKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pSwapchain, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroySwapchainKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetSwapchainImagesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, pSwapchainImageCount, pSwapchainImages, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkAcquireNextImageKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, timeout, semaphore, fence, pImageIndex, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR * pPresentInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkQueuePresentKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, pPresentInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceGroupPresentCapabilitiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pDeviceGroupPresentCapabilities, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceGroupSurfacePresentModesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, surface, pModes, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, VkRect2D * pRects, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDevicePresentRectanglesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, surface, pRectCount, pRects, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkAcquireNextImage2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pAcquireInfo, pImageIndex, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPropertiesKHR * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceDisplayPropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlanePropertiesKHR * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDisplayPlaneSupportedDisplaysKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, planeIndex, pDisplayCount, pDisplays, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModePropertiesKHR * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDisplayModePropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, display, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDisplayModeKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, display, pCreateInfo, pAllocator, pMode, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR * pCapabilities, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDisplayPlaneCapabilitiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, mode, planeIndex, pCapabilities, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDisplayPlaneSurfaceKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pCreateInfo, pAllocator, pSurface, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateSharedSwapchainsKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceFeatures2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pFeatures, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceFormatProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, format, pFormatProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceImageFormatProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pImageFormatInfo, pImageFormatProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceQueueFamilyProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceMemoryProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pMemoryProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pFormatInfo, pPropertyCount, pProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceGroupPeerMemoryFeaturesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetDeviceMaskKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, deviceMask, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDispatchBaseKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ, tlsRef);
}

void VKAPI_CALL Passthrough_vkTrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkTrimCommandPoolKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, commandPool, flags, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkEnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkEnumeratePhysicalDeviceGroupsKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceExternalBufferPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceExternalBufferPropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pExternalBufferInfo, pExternalBufferProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetMemoryFdKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pGetFdInfo, pFd, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetMemoryFdPropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, handleType, fd, pMemoryFdProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkImportSemaphoreFdKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pImportSemaphoreFdInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetSemaphoreFdKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pGetFdInfo, pFd, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdPushDescriptorSetKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdPushDescriptorSetWithTemplateKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, descriptorUpdateTemplate, layout, set, pData, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDescriptorUpdateTemplateKHR(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDescriptorUpdateTemplateKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyDescriptorUpdateTemplateKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorUpdateTemplate, pAllocator, tlsRef);
}

void VKAPI_CALL Passthrough_vkUpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkUpdateDescriptorSetWithTemplateKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, descriptorSet, descriptorUpdateTemplate, pData, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2KHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateRenderPass2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pRenderPass, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfoKHR * pSubpassBeginInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBeginRenderPass2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pRenderPassBegin, pSubpassBeginInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfoKHR * pSubpassBeginInfo, const VkSubpassEndInfoKHR * pSubpassEndInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdNextSubpass2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR * pSubpassEndInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdEndRenderPass2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pSubpassEndInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetSwapchainStatusKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceExternalFencePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceExternalFencePropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pExternalFenceInfo, pExternalFenceProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR * pImportFenceFdInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkImportFenceFdKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pImportFenceFdInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetFenceFdKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pGetFdInfo, pFd, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkSurfaceCapabilities2KHR * pSurfaceCapabilities, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfaceCapabilities2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pSurfaceInfo, pSurfaceCapabilities, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pSurfaceFormatCount, VkSurfaceFormat2KHR * pSurfaceFormats, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfaceFormats2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayProperties2KHR * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceDisplayProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlaneProperties2KHR * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModeProperties2KHR * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDisplayModeProperties2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, display, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR * pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR * pCapabilities, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDisplayPlaneCapabilities2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pDisplayPlaneInfo, pCapabilities, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageMemoryRequirements2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, pMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetBufferMemoryRequirements2KHR(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetBufferMemoryRequirements2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, pMemoryRequirements, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetImageSparseMemoryRequirements2KHR(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageSparseMemoryRequirements2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateSamplerYcbcrConversionKHR(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateSamplerYcbcrConversionKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pYcbcrConversion, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroySamplerYcbcrConversionKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, ycbcrConversion, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBindBufferMemory2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, bindInfoCount, pBindInfos, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBindImageMemory2KHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, bindInfoCount, pBindInfos, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetDescriptorSetLayoutSupportKHR(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDescriptorSetLayoutSupportKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pSupport, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndirectCountKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndexedIndirectCountKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugReportCallbackEXT * pCallback, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDebugReportCallbackEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pCreateInfo, pAllocator, pCallback, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyDebugReportCallbackEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, callback, pAllocator, tlsRef);
}

void VKAPI_CALL Passthrough_vkDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char * pLayerPrefix, const char * pMessage, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDebugReportMessageEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkDebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT * pTagInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDebugMarkerSetObjectTagEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pTagInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkDebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT * pNameInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDebugMarkerSetObjectNameEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pNameInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDebugMarkerBeginEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pMarkerInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDebugMarkerEndEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDebugMarkerInsertEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pMarkerInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBindTransformFeedbackBuffersEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBeginTransformFeedbackEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdEndTransformFeedbackEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBeginQueryIndexedEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, queryPool, query, flags, index, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdEndQueryIndexedEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, queryPool, query, index, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndirectByteCountEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride, tlsRef);
}

uint32_t VKAPI_CALL Passthrough_vkGetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX * pInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageViewHandleNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndirectCountAMD;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawIndexedIndirectCountAMD;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t * pInfoSize, void * pInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetShaderInfoAMD;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipeline, shaderStage, infoType, pInfoSize, pInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV * pExternalImageFormatProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBeginConditionalRenderingEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pConditionalRenderingBegin, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdEndConditionalRenderingEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdProcessCommandsNVX(VkCommandBuffer commandBuffer, const VkCmdProcessCommandsInfoNVX * pProcessCommandsInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdProcessCommandsNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pProcessCommandsInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdReserveSpaceForCommandsNVX(VkCommandBuffer commandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX * pReserveSpaceInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdReserveSpaceForCommandsNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pReserveSpaceInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateIndirectCommandsLayoutNVX(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNVX * pIndirectCommandsLayout, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateIndirectCommandsLayoutNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pIndirectCommandsLayout, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyIndirectCommandsLayoutNVX(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyIndirectCommandsLayoutNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, indirectCommandsLayout, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateObjectTableNVX(VkDevice device, const VkObjectTableCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkObjectTableNVX * pObjectTable, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateObjectTableNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pObjectTable, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyObjectTableNVX(VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyObjectTableNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, objectTable, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkRegisterObjectsNVX(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectTableEntryNVX *const * ppObjectTableEntries, const uint32_t * pObjectIndices, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkRegisterObjectsNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, objectTable, objectCount, ppObjectTableEntries, pObjectIndices, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkUnregisterObjectsNVX(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectEntryTypeNVX * pObjectEntryTypes, const uint32_t * pObjectIndices, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkUnregisterObjectsNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(VkPhysicalDevice physicalDevice, VkDeviceGeneratedCommandsFeaturesNVX * pFeatures, VkDeviceGeneratedCommandsLimitsNVX * pLimits, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pFeatures, pLimits, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV * pViewportWScalings, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetViewportWScalingNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstViewport, viewportCount, pViewportWScalings, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkReleaseDisplayEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, display, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT * pSurfaceCapabilities, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfaceCapabilities2EXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, surface, pSurfaceCapabilities, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT * pDisplayPowerInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDisplayPowerControlEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, display, pDisplayPowerInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkRegisterDeviceEventEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pDeviceEventInfo, pAllocator, pFence, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkRegisterDisplayEventEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, display, pDisplayEventInfo, pAllocator, pFence, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetSwapchainCounterEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, counter, pCounterValue, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE * pDisplayTimingProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetRefreshCycleDurationGOOGLE;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, pDisplayTimingProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pPresentationTimingCount, VkPastPresentationTimingGOOGLE * pPresentationTimings, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPastPresentationTimingGOOGLE;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, pPresentationTimingCount, pPresentationTimings, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetDiscardRectangleEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles, tlsRef);
}

void VKAPI_CALL Passthrough_vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR * pSwapchains, const VkHdrMetadataEXT * pMetadata, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkSetHdrMetadataEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchainCount, pSwapchains, pMetadata, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkSetDebugUtilsObjectNameEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pNameInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT * pTagInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkSetDebugUtilsObjectTagEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pTagInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkQueueBeginDebugUtilsLabelEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, pLabelInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkQueueEndDebugUtilsLabelEXT(VkQueue queue, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkQueueEndDebugUtilsLabelEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, tlsRef);
}

void VKAPI_CALL Passthrough_vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkQueueInsertDebugUtilsLabelEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, pLabelInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBeginDebugUtilsLabelEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pLabelInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdEndDebugUtilsLabelEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdInsertDebugUtilsLabelEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pLabelInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateDebugUtilsMessengerEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pCreateInfo, pAllocator, pMessenger, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyDebugUtilsMessengerEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, messenger, pAllocator, tlsRef);
}

void VKAPI_CALL Passthrough_vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkSubmitDebugUtilsMessageEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, messageSeverity, messageTypes, pCallbackData, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetSampleLocationsEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pSampleLocationsInfo, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT * pMultisampleProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceMultisamplePropertiesEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, samples, pMultisampleProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetImageDrmFormatModifierPropertiesEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, image, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateValidationCacheEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pValidationCache, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyValidationCacheEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, validationCache, pAllocator, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkMergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT * pSrcCaches, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkMergeValidationCachesEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, dstCache, srcCacheCount, pSrcCaches, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetValidationCacheDataEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, validationCache, pDataSize, pData, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBindShadingRateImageNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, imageView, imageLayout, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV * pShadingRatePalettes, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetViewportShadingRatePaletteNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV * pCustomSampleOrders, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetCoarseSampleOrderNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkAccelerationStructureNV * pAccelerationStructure, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateAccelerationStructureNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pCreateInfo, pAllocator, pAccelerationStructure, tlsRef);
}

void VKAPI_CALL Passthrough_vkDestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks * pAllocator, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkDestroyAccelerationStructureNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, accelerationStructure, pAllocator, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetAccelerationStructureMemoryRequirementsNV(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2KHR * pMemoryRequirements, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetAccelerationStructureMemoryRequirementsNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, pMemoryRequirements, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV * pBindInfos, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkBindAccelerationStructureMemoryNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, bindInfoCount, pBindInfos, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdBuildAccelerationStructureNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeNV mode, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdCopyAccelerationStructureNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, dst, src, mode, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdTraceRaysNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateRayTracingPipelinesNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetRayTracingShaderGroupHandlesNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipeline, firstGroup, groupCount, dataSize, pData, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void * pData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetAccelerationStructureHandleNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, accelerationStructure, dataSize, pData, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdWriteAccelerationStructuresPropertiesNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCompileDeferredNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pipeline, shader, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetMemoryHostPointerPropertiesEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, handleType, pHostPointer, pMemoryHostPointerProperties, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdWriteBufferMarkerAMD;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainEXT * pTimeDomains, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pTimeDomainCount, pTimeDomains, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetCalibratedTimestampsEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawMeshTasksNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, taskCount, firstTask, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawMeshTasksIndirectNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, drawCount, stride, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdDrawMeshTasksIndirectCountNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D * pExclusiveScissors, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetExclusiveScissorNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors, tlsRef);
}

void VKAPI_CALL Passthrough_vkCmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void * pCheckpointMarker, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCmdSetCheckpointNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(commandBuffer, pCheckpointMarker, tlsRef);
}

void VKAPI_CALL Passthrough_vkGetQueueCheckpointDataNV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointDataNV * pCheckpointData, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetQueueCheckpointDataNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(queue, pCheckpointDataCount, pCheckpointData, tlsRef);
}

void VKAPI_CALL Passthrough_vkSetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkSetLocalDimmingAMD;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapChain, localDimmingEnable, tlsRef);
}

VkDeviceAddress VKAPI_CALL Passthrough_vkGetBufferDeviceAddressEXT(VkDevice device, const VkBufferDeviceAddressInfoEXT * pInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetBufferDeviceAddressEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesNV * pProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pPropertyCount, pProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t * pCombinationCount, VkFramebufferMixedSamplesCombinationNV * pCombinations, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pCombinationCount, pCombinations, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateHeadlessSurfaceEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pCreateInfo, pAllocator, pSurface, tlsRef);
}

void VKAPI_CALL Passthrough_vkResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkResetQueryPoolEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, queryPool, firstQuery, queryCount, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkCreateWin32SurfaceKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(instance, pCreateInfo, pAllocator, pSurface, tlsRef);
}

VkBool32 VKAPI_CALL Passthrough_vkGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceWin32PresentationSupportKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, queueFamilyIndex, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetMemoryWin32HandleKHR(VkDevice device, const VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetMemoryWin32HandleKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pGetWin32HandleInfo, pHandle, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetMemoryWin32HandlePropertiesKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, handleType, handle, pMemoryWin32HandleProperties, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkImportSemaphoreWin32HandleKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pImportSemaphoreWin32HandleInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetSemaphoreWin32HandleKHR(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetSemaphoreWin32HandleKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pGetWin32HandleInfo, pHandle, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkImportFenceWin32HandleKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pImportFenceWin32HandleInfo, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetFenceWin32HandleKHR(VkDevice device, const VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetFenceWin32HandleKHR;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pGetWin32HandleInfo, pHandle, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetMemoryWin32HandleNV;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, memory, handleType, pHandle, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetPhysicalDeviceSurfacePresentModes2EXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkAcquireFullScreenExclusiveModeEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkReleaseFullScreenExclusiveModeEXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, swapchain, tlsRef);
}

VkResult VKAPI_CALL Passthrough_vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes, struct ::GPADispatchTable const*& tlsRef)
{
    auto * currLayerFunPtr = tlsRef->Vulkan.vkGetDeviceGroupSurfacePresentModes2EXT;
    LAYER_PREAMBLE(tlsRef);
    return currLayerFunPtr(device, pSurfaceInfo, pModes, tlsRef);
}




} // vulkan
} // gpa
