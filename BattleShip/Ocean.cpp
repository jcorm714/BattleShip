
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

void Ocean::PlaceBoat(int length, int orginX, int orginY, bool flipped)
{
	
	if (flipped) {
		for (int i = 0; i < length; i++)
		{
			Ocean::ocean[orginX][orginY + i] = 'B';
		}
	}
	else if (!flipped)
		for(int i = 0; i < length; i++)
		{
			Ocean::ocean[orginX + i][orginY] = 'B';
		}
	else {

		std::cout << "That is not a valid position"  << std::endl;
	}

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



