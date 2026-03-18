#pragma once
#include "Point.h"

#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	~APlayer();

	void Move(UPoint point);
	bool CheckIsWall(UPoint point);
	bool CheckIsGoal(UPoint point);
};

