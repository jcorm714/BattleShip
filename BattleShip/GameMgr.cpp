#include "GameMgr.h"



GameMgr::GameMgr()
{
	char diff = difficultySelect();
	int difficult;
	switch (diff)
	{
	case 'e':
		difficult = 5;
		break;
	case 'm':
		difficult = 10;
		break;
	case 'h':
		difficult = 15;
		break;
	case 'i':
		difficult = 20;
		break;
	default:
		difficult = 0;
		break;

	}
	GameMgr::setDifficulty(difficult);
}


GameMgr::~GameMgr()
{
	
}

void GameMgr::GameStart()
{
	Ocean* PlayerOcean;
	PlayerOcean = new Ocean(GameMgr::getDifficulty());
	PlayerOcean->GenerateOcean();
	PlayerOcean->DisplayOcean(5, 5);
}

char GameMgr::difficultySelect() 
{
	char temp;
	std::cout << "What difficulty are you playing on? e)asy, m)edium, h)ard, i)mpossible ";
	std::cin >> temp;
	temp = tolower(temp);
	return temp;
}



