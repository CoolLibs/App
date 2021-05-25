#ifdef __COOL_APP_VULKAN

#include "../../Framebuffer.h"
#include "../../GraphicsPipeline.h"
#include <Cool/App/RenderState.h>
#include <Cool/App/Gpu/internal/vulkan/Context.h>

namespace Cool {

Framebuffer::Framebuffer(GraphicsPipeline& pipeline) {
    VkImageView attachments[] = {
        _color_image_view
    };
    VkFramebufferCreateInfo framebufferInfo{};
    framebufferInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    framebufferInfo.renderPass = pipeline.render_pass;
    framebufferInfo.attachmentCount = 1;
    framebufferInfo.pAttachments = attachments;
    framebufferInfo.width = RenderState::Size().width();
    framebufferInfo.height = RenderState::Size().height();
    framebufferInfo.layers = 1;

    if (vkCreateFramebuffer(Vulkan::Context::g_Device, &framebufferInfo, nullptr, &_framebuffer) != VK_SUCCESS) {
        throw std::runtime_error("failed to create framebuffer!");
    }
}

} // namespace Cool

#endif