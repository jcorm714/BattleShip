#pragma once
#include"Boat.h"
#include"Ocean.h"
#include<vector>
class GameMgr
{
public:
	GameMgr();
	~GameMgr();
	void GameStart();
	void setDifficulty(int value) { difficulty = value; }
	int getDifficulty() { return difficulty; }
	void setBoatCount(int value) { boatCount = value; }
	int getBoatCount() { return boatCount; }

	static char difficultySelect();
private:
	int difficulty;
	int boatCount
	
};


