#pragma once
#include<string>
#include "BattleShip.h"
#include<iostream>
using namespace BattleShip;
class Boat
{
public:
	
	Boat(int boatLength);
	void setOrigin();
	coords getOrigin() { return origin; }
	int getLength() { return length; }
	void setLength(int value) { length = value; }
	int getIndex() { return index; }
	void setIndex(int value) { index = value; }
	static int BoatOptions();
	
	~Boat();
	
private:
	std::string name;
	int length;
	coords origin;
	int index;
	
	
};

