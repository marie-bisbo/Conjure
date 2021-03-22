#include <Conjure.h>

class SandBox : public Conjure::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Conjure::Application* Conjure::CreateApplication()
{
	return new SandBox();
}