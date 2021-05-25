#ifdef __COOL_APP_VULKAN

#include "ImageView.h"
#include "../../Renderer.h"

namespace Cool::Vulkan {

ImageView::ImageView() {
	//VkImageViewCreateInfo createInfo{};
	//createInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
	//createInfo.image = swapChainImages[i];
	//createInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
	//createInfo.format = swapChainImageFormat;
	//createInfo.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
	//createInfo.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
	//createInfo.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
	//createInfo.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
	//createInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
	//createInfo.subresourceRange.baseMipLevel = 0;
	//createInfo.subresourceRange.levelCount = 1;
	//createInfo.subresourceRange.baseArrayLayer = 0;
	//createInfo.subresourceRange.layerCount = 1;
	//if (vkCreateImageView(Renderer::device(), &createInfo, nullptr, &_image_view) != VK_SUCCESS) {
	//	throw std::runtime_error("failed to create image views!");
	//}
}

} // namespace Cool::Vulkan

#endif