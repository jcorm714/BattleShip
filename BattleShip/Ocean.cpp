
#include "Ocean.h";

Ocean::Ocean(int oceanSize)
	:size(oceanSize)
{

}



void Ocean::goto_xy(int row, int col)
{
	COORD coord;
	coord.X = col; 
	coord.Y = row;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	return;
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

void Ocean::PlaceBoat(int length, Ocean::coords origin, bool flipped)
{
	
	if (flipped) {
		for (int i = 0; i < length; i++)
		{
			Ocean::ocean[origin.x][origin.y + i] = 'B';
		}
	}
	else if (!flipped)
		for(int i = 0; i < length; i++)
		{
			Ocean::ocean[origin.x + i][origin.y] = 'B';
		}
	else {

		std::cout << "That is not a valid position"  << std::endl;
	}

}

Ocean::coords Ocean::ReadCoords() {
	Ocean::coords temp;
	std::cout << "Enter the x coordinate: ";
	std::cin >> temp.x;
	std::cout << "\nEnter the y coordinate: ";
	std::cin >> temp.y;
	return temp;
}


void Ocean::DisplayOcean(int horizontalDisplacement, int verticleDisplacement) {

	int r, c;
	r = c = 0;
	goto_xy(horizontalDisplacement, verticleDisplacement-2); std::cout << "Y";
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



