#include "BattleShip.h"

void BattleShip::ScreenClear()
{
	//replace with better alternative later? 
	system("CLS");
}

void BattleShip::GamePause()
{
	//replace with better alternative later?
	std::cout << "\n\n\n";
	system("PAUSE");
}
void BattleShip::goto_xy(int row, int col)
{
	COORD coord;
	coord.X = col;
	coord.Y = row;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	return;
}

int BattleShip::RandomNum(int max)
{
	int x;
	srand(time(NULL));
	x = rand() % max;
	return x;
}