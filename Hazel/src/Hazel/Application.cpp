#include "hzpch.h"
#include "Application.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"
#include "GLFW/glfw3.h"
namespace Hazel {

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallBack(std::bind(&Application::OnEvent, this, std::placeholders::_1));

	}

	Application::~Application()
	{
	}
	void Application::Run()
	{
		WindowResizedEvent e(1280, 720);
		HZ_TRACE(e);

		while (m_Running)
		{
			glClearColor(1, 0, 0, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}



	void Application::OnEvent(Event & e)
	{
		HZ_CORE_INFO("{0}", e);

	}
}