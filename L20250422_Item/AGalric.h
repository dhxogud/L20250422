#pragma once
#include "AItem.h"

class AGalric : public AItem
{
public:
	AGalric();
	virtual ~AGalric();

	virtual void Use() override;
	void Smell();
};

