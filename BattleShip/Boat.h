#pragma once
#include<string>
#include<vector>
class Boat
{
public:
	static std::vector <Boat* > Boats;
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

