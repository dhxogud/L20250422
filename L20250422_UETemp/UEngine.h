#pragma once
#include "World.h"
#include "UInput.h"

class UEngine
{
public:
	UEngine();
	virtual ~UEngine();
	
	void Initialize();
	void Run();
	void Terminate();

private:
	void Input();
	void Tick();
	void Render();

	UWorld* World;
	UInput* InputDevice;
};

