#pragma once
#ifdef __COOL_APP_VULKAN

#include <vulkan/vulkan.h>

namespace Cool::Vulkan {

class Context {
public:
	static void Initialize(const char** extensions, uint32_t extensions_count);
	static void ShutDown0();
	static void ShutDown1();

	static void set_surface_format();

public:
	static VkAllocationCallbacks*   g_Allocator;
	static VkInstance               g_Instance;
	static VkPhysicalDevice         g_PhysicalDevice;
	static VkDevice                 g_Device;
	static uint32_t                 g_QueueFamily;
	static VkQueue                  g_Queue;
	static VkDebugReportCallbackEXT g_DebugReport;
	static VkPipelineCache          g_PipelineCache;
	static VkDescriptorPool         g_DescriptorPool;
	static VkCommandPool            _command_pool;

	static VkSurfaceFormatKHR  g_SurfaceFormat;
	static VkPresentModeKHR    g_PresentMode;
};

} // namespace Cool::Vulkan

#endif