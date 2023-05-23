#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <spdlog/spdlog.h>
#include <vulkan/vulkan_raii.hpp>

namespace vkb
{
	class context
	{
		void init_window();
		void cleanup_window();

		void take(std::function<void()> callback);

	private:
		GLFWwindow *window;

		const char *title = "vkb";
		const uint32_t width = 1280;
		const uint32_t height = 720;
	};
}
