#ifdef __COOL_APP_VULKAN

#include <vulkan/vulkan.h>

namespace Cool::Vulkan {

uint32_t findMemoryType(uint32_t typeFilter, VkMemoryPropertyFlags properties);
void create_buffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties, VkBuffer& buffer, VkDeviceMemory& bufferMemory);
VkCommandBuffer beginSingleTimeCommands();
void endSingleTimeCommands(VkCommandBuffer commandBuffer);
void copyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, VkDeviceSize size);
void copyBufferToImage(VkBuffer buffer, VkImage image, uint32_t width, uint32_t height);

} // namespace Cool::Vulkan

#endif