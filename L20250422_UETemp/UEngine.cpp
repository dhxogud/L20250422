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
	// Ű����, ���콺, ���̽�ƽ, ��ġ, ���̷� ���� (���ؼ� �Է���ġ InputDevice�� ���´� ������...)
	InputDevice->Tick(); // �׷��� �Է���ġ�� Tick()�� ������ �ִ� ����
	
}

void UEngine::Tick() // �𸮾� �������� '� ������ ó���ϴ� ����'�� Tick���� ��Ī�Ѵ�.
{
	World->Tick();
}
void UEngine::Render()
{
	World->Render();
}