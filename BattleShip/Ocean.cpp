
#include "Ocean.h";
using namespace BattleShip;
	Ocean::Ocean(int oceanSize)
		:size(oceanSize)
	{

	}



	void Ocean::GenerateOcean() {

		std::cout << "generating ocean...." << std::endl;
		for (int i = 0; i < GetSize(); i++)
		{
			for (int j = 0; j < GetSize(); j++)
			{
				Ocean::ocean[i][j] = 'O';
			}
		}
		std::cout << "generated!";
	}

	void Ocean::PlaceBoat(Boat* b, bool flipped)
	{
		b->setIndex(sizeof(Ocean::Boats) / sizeof(Ocean::Boats.at(0)));
		Ocean::Boats.push_back(b);
		coords temp = b->getOrigin();
		int length = b->getLength();
		
			try {
				if (flipped) {
					for (int i = 0; i < length; i++)
					{
						Ocean::ocean[temp.x][temp.y + i] = 'B';
					}
				}
				else if (!flipped)
					for (int i = 0; i < length; i++)
					{
						Ocean::ocean[temp.x + i][temp.y] = 'B';
					}
				
			}
			catch (...)
			{
				std::cout << "The boat is out of range of the ocean\n";
			}
	}

	

	coords Ocean::ReadCoords()
	{
		coords temp;
		std::cout << "Enter the x coordinate: ";
		std::cin >> temp.x;
		std::cout << "\nEnter the y coordinate: ";
		std::cin >> temp.y;
		return temp;
	}


	void Ocean::DisplayOcean(int horizontalDisplacement, int verticleDisplacement) {

		
		int r, c;
		r = c = 0;
		ScreenClear();
		goto_xy(horizontalDisplacement, verticleDisplacement - 2); std::cout << "Y";
		goto_xy(verticleDisplacement - 1, horizontalDisplacement);  std::cout << "X";
		r += verticleDisplacement;
		c += horizontalDisplacement;

		for (int i = 0; i < GetSize(); i++)
		{
			for (int j = 0; j < GetSize(); j++)
			{
				goto_xy(r + j, c + i * 2); std::cout << Ocean::ocean[i][j];
			}
		}
	}




