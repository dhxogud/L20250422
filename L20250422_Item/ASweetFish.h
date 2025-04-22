#pragma once
#include "AItem.h"

class ASweetFish : public AItem
{
public:
	ASweetFish();
	virtual ~ASweetFish();
	virtual void Use() override;
};

