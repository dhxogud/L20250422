#include "UInput.h"
#include "Windows.h"
#include "conio.h"

int UInput::KeyCode; // ���������� �ٸ� Ŭ�������� ���̰� �ϱ� ���ؼ� ����ٰ� ��ߵ�

UInput::UInput()
{

}
UInput::~UInput()
{

}

void UInput::Tick()
{
	if (_kbhit()) // �̰� ����Ƽ�� anyKeyDown()�̶� �����. �Է��� �������� true return��
	{
		KeyCode = _getch();
	}
	else
	{
		KeyCode = 0;
	}
}