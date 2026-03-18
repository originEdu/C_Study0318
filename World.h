#pragma once
class Floor;
class Wall;
class Player;
class Monster;
class Goal;

class UWorld
{
public:
	UWorld();
	~UWorld();

	Floor* Floors;
	Wall* Walls;
	Player* Player;
	Monster* Monster;
	Goal* Goal;
	

};

