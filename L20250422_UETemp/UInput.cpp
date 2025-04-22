#include "UInput.h"
#include "Windows.h"
#include "conio.h"

int UInput::KeyCode; // 전역변수가 다른 클래스에서 보이게 하기 위해서 여기다가 써야됨

UInput::UInput()
{

}
UInput::~UInput()
{

}

void UInput::Tick()
{
	if (_kbhit()) // 이거 유니티의 anyKeyDown()이랑 비슷함. 입력이 있을때만 true return함
	{
		KeyCode = _getch();
	}
	else
	{
		KeyCode = 0;
	}
}