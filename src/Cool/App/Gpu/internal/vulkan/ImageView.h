#pragma once
#ifdef __COOL_APP_VULKAN
#include <vulkan/vulkan.h>

namespace Cool::Vulkan {

class ImageView {
public:
	ImageView();
	inline VkImageView operator*() { return _image_view; }

private:
	VkImageView _image_view;
};

} // namespace Cool::Vulkan

#endif