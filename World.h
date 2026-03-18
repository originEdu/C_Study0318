#pragma once
class Floor;
class Wall;

class UWorld
{
public:
	UWorld();
	~UWorld();

	Floor* Floors;
	Wall* Walls;

	void ChangeGameOver(bool IsGameOver);
};

