#include "Boat.h" 

using namespace BattleShip;
	Boat::Boat(int boatLength)
	{
		std::string temp;
		switch (boatLength) {
			case 2:
				temp = "destroyer";
				break;
			case 3:
				temp = "submarine";
				break;
			case 4:
				temp = "battleship";
				break;
			case 5:
				temp = "carrier";

		}
		this->name = temp;
	}

	Boat::~Boat() {

	}
	int Boat::BoatOptions()
	{
		int boatLength;
		char descision;
		std::cout << "\nSelect your boats \nD)estroy\nS)ubmarine\nB)attleship\nC)arrier\n";
		std::cin >> descision;
		descision = tolower(descision);
		switch (descision)
		{
			case 'd':
				boatLength = BattleShip::ships::destroyer;
				break;
			case 's':
				boatLength = BattleShip::ships::submarine;
				break;
			case 'b':
				boatLength = BattleShip::ships::battleship;
				break;
			case 'c':
				boatLength = BattleShip::ships::carrier;
				break;
			default:
				boatLength = -1;
				break;
		}
		return boatLength;

	}
	void Boat::setOrigin() 
	{
		int x, y; 
		std::cout << "Please enter the x coordinate: ";
		std::cin >> x;
		std::cout << "Please enter the y coordinate: ";
		std::cin >> y;
		origin.x = x - 1;
		origin.y = y - 1;
	}