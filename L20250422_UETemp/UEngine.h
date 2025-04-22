#pragma once
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
};

