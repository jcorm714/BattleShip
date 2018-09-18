#pragma once
#include<string>
#include<Windows.h>
#include<iostream>
#include<time.h>
namespace BattleShip {
	struct coords {
		int x;
		int y;
	};
	enum gameMode {
		Easy = 5,
		Medium = 10,
		Hard = 15,
		Impossible = 20,
	};
	enum ships {
		destroyer = 2,
		submarine,
		battleship,
		carrier,
	};

	void ScreenClear();
	void goto_xy(int row, int col);
	void GamePause();
	int RandomNum(int max);
	
	

}
