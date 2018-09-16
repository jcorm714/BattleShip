#include "Boat.h" 


Boat::Boat(int boatLength, std::string boatName)
	:length(boatLength), name(boatName)
{
	Boats.push_back(this);
	this->index = sizeof(Boats) / sizeof(Boats.at(0)) - 1;
}

Boat::~Boat() { 

}