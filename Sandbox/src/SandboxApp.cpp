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

int main()
{
	SandBox* sandbox = new SandBox();
	sandbox->Run();
	delete sandbox;
}