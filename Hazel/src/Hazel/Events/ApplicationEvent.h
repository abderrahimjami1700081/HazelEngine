#pragma once
#include "Event.h"
namespace Hazel {
	class HAZEL_API WindowResizedEvent : public Event
	{
	public:
		WindowResizedEvent(unsigned int width, unsigned int height)
			:m_Width(width), m_Height(height) {}

		inline float GetWidth() const { return m_Width; }
		inline float GetHeight() const { return m_Height; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowResizedEvent: " << GetWidth() << ", " << GetHeight();
			return ss.str();
		}


		EVENT_CLASS_TYPE(WindowResized)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)


	private:
		unsigned int m_Width, m_Height;

	};


	class HAZEL_API WindowCloseEvent : public Event
	{
	public:
		WindowCloseEvent() {}
		EVENT_CLASS_TYPE(WindowClose)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)


	};

	class HAZEL_API AppTickEvent : public Event
	{
		AppTickEvent() {}
		EVENT_CLASS_TYPE(AppTick)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)


	};

	class HAZEL_API AppUpdateEvent : public Event
	{
		AppUpdateEvent() {}
		EVENT_CLASS_TYPE(AppUpdate)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)


	};

	class HAZEL_API AppRenderEvent : public Event
	{
		AppRenderEvent() {}
		EVENT_CLASS_TYPE(AppRender)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)


	};


}