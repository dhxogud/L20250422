#include "UEngine.h"
#include "World.h"

UEngine::UEngine()
{
	World = nullptr;
	InputDevice = nullptr;
}
UEngine::~UEngine()
{
	Terminate();
}
void UEngine::Initialize()
{
	InputDevice = new UInput();
	World = new UWorld();
	World->Load();
}
void UEngine::Run()
{
	while (true)
	{
		Input();
		Tick();
		Render();
	}
}
void UEngine::Terminate()
{
	if (World)
	{
		delete World;
		World = nullptr;
	}

	if (InputDevice)
	{
		delete InputDevice;
		InputDevice = nullptr;
	}
}
void UEngine::Input()
{
	// Engine has a Input
	// 키보드, 마우스, 조이스틱, 터치, 자이로 센스 (통해서 입력장치 InputDevice로 묶는다 원래는...)
	InputDevice->Tick(); // 그래서 입력장치도 Tick()을 가지고 있는 이유
	
}

void UEngine::Tick() // 언리얼 엔진에서 '어떤 로직을 처리하는 동작'을 Tick으로 명칭한다.
{
	World->Tick();
}
void UEngine::Render()
{
	World->Render();
}