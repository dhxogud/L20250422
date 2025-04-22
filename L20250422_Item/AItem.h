#pragma once
class AItem
{
public:
	AItem();
	virtual ~AItem();

	// (=0)의 의미 = 순수 가상 함수 -> 부모에선 구현이 안되어 있으므로 반드시 상속받은 자식들은 구현해 주어야함
	// C++에선 순수 가상 함수, 다른데에선 추상 클래스? 그게 이건가
	virtual void Use() = 0;
};

