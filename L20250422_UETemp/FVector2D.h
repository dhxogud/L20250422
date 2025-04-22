#pragma once
struct FVector2D
{
public:

	FVector2D();
	FVector2D(int InX, int InY);
	virtual ~FVector2D();

	int X;
	int Y;
};

