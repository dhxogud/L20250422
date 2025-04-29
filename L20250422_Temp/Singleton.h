#pragma once
#include <iostream>

class Singleton
{
private:
	Singleton() {

	}

	static Singleton* Instance;

public:
	~Singleton()
	{
		delete Instance;
		Instance = nullptr;
	}

	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Singleton();
		}
		return Instance;
	}
	void Tick()
	{
		std::cout << "singleton" << std::endl;
	}
};