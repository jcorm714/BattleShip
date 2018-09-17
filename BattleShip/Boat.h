#pragma once
#include<string>

class Boat
{
public:
	
	Boat(int boatLength, std::string boatName);
	bool isPlaced() { return placed; }
	int GetIndex() { return index; }
	~Boat();
	
private:
	std::string name;
	int length;
	bool placed;
	int index;
};

