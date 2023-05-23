#include <context.hpp>

namespace vkb
{
	void context::init_window()
	{
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, title, nullptr, nullptr);
	}

	void context::cleanup_window()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void context::take(std::function<void()> callback)
	{
		while (!glfwWindowShouldClose(window))
		{
			glfwPollEvents();
			callback();
		}
	}
}
