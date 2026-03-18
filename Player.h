#pragma once
#include "Point.h"
class UPlayer
{
public:
	UPlayer();
	~UPlayer();

	UPoint Position;

	void Move(UPoint point);
	bool CheckIsGoal(UPoint point);
};

