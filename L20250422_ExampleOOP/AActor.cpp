#include "AActor.h"


AActor::AActor()
{
	Shape = ' '; // ��ǻ� �Ⱥ��̴� ����
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