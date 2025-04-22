#pragma once
#include "FVector2D.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	void AddActorWorldOffset(FVector2D offset);
	virtual void Tick();
	virtual void Render();
	FVector2D Location; // ���� �̰� protected�� ���δµ� ������ �� ���ϰ� ������

	char Shape;
};

//Actor has a FVector2D