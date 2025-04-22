#include "AActor.h"


AActor::AActor()
{
	Shape = ' '; // 사실상 안보이는 상태
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