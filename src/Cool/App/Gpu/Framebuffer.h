#pragma once
#ifdef __COOL_APP_VULKAN
#include <vulkan/vulkan.h>
#endif

namespace Cool {

class GraphicsPipeline;

class Framebuffer {
public:
	Framebuffer(GraphicsPipeline& pipeline);


private:
#ifdef __COOL_APP_VULKAN
	VkFramebuffer _framebuffer;
	VkImageView _color_image_view;
#endif
};

} // namespace Cool