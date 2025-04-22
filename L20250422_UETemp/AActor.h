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
	FVector2D Location; // 보통 이건 protected로 감싸는데 지금은 걍 편하게 슬려고

	char Shape;
};

//Actor has a FVector2D