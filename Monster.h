#pragma once
#include "Point.h"

class AMonster
{
public:
	AMonster();
	~AMonster();

	char RenderChar;
	UPoint Position;
	
	void Move(UPoint Position);
};

