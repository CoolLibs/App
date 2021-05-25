#pragma once
#ifdef __COOL_APP_VULKAN
#include <vulkan/vulkan.h>

namespace Cool::Vulkan {

inline void check_vk_result(VkResult err) {
    if (err == 0)
        return;
    Log::ErrorWithoutBreakpoint("[Vulkan] Error: VkResult = {}", err);
    if (err < 0)
        abort();
}

} // namespace Cool::Vulkan

#endif