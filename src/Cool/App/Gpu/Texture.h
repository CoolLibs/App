#pragma once
#ifdef __COOL_APP_VULKAN
#include <vulkan/vulkan.h>
#endif

namespace Cool {

class Texture {
public:
	Texture();
	~Texture();
	void updload_image_data(int width, int height, unsigned char* data);

private:
#ifdef __COOL_APP_VULKAN
	VkImage textureImage;
	VkDeviceMemory textureImageMemory;
#endif
};

} // namespace Cool