#pragma once
#include "Core.h"


#include "Window.h"
#include"LayerStack.h"
#include "Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"
namespace Hazel {


	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);





	private:
		bool OnWindowClose(WindowCloseEvent& e);


		LayerStack m_LayerStack;


		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//To be defined in CLIENT
	Application* CreateApplication();

}
