#include "GameMgr.h"
#include "Boat.h"


	GameMgr::GameMgr()
	{
		char diff = difficultySelect();
		 
		switch (diff)
		{
		case 'e':
			GameMgr::setDifficulty(gameMode::Easy);
			break;
		case 'm':
			GameMgr::setDifficulty(gameMode::Medium);
			break;
		case 'h':
			GameMgr::setDifficulty(gameMode::Hard);
			break;
		case 'i':
			GameMgr::setDifficulty(gameMode::Impossible);
			break;
		default:
			std::cout << "That's not an option\n";
			break;

		}
		
	}


	GameMgr::~GameMgr()
	{

	}

	void GameMgr::GameStart()
	{
		//add loop to more boats, but reduce the boat options in order to balanace game;
		int temp;
		Ocean* PlayerOcean;
		PlayerOcean = new Ocean(GameMgr::getDifficulty());
		PlayerOcean->GenerateOcean();
		PlayerOcean->DisplayOcean(5, 5);
		temp = Boat::BoatOptions();
		Boat* boatTemp;
		boatTemp = new Boat(temp);
		boatTemp->setOrigin();
		PlayerOcean->PlaceBoat(boatTemp, true);
		PlayerOcean->DisplayOcean(5,5);
		
	}

	char GameMgr::difficultySelect()
	{
		char temp;
		std::cout << "What difficulty are you playing on?\ne)asy\nm)edium\nh)ard\ni)mpossible\n";
		std::cin >> temp;
		temp = tolower(temp);
		return temp;
	}



