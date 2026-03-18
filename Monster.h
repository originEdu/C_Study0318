#pragma once
#include "Point.h"

class UMonster
{
public:
	UMonster();
	~UMonster();

	UPoint Position;
	
	void Move(UPoint Position);
};

