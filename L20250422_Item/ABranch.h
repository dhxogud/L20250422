#pragma once
#include "AItem.h"

class ABranch : public AItem
{
public:
	ABranch();
	virtual ~ABranch();
	virtual void Use() override;
	void Swing();
};

