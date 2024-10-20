#include <Crucible.h>

class Sandbox : public CE::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};


CE::Application* CE::CreateApplication()
{
	return new Sandbox();
}