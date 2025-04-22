#include "AActor.h"


AActor::AActor(char Shape)
{
	this->Shape = Shape;
}
AActor::~AActor()
{
	
}
void AActor::Tick()
{

}
void AActor::AddRelativeLocation(FVector2D Delta)
{
	Location.X += Delta.X;
	Location.Y += Delta.Y;
}