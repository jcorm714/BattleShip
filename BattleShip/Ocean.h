#pragma once


#include<iostream>
#include<vector>
#include "Boat.h"
#include "BattleShip.h"
using namespace BattleShip;
	class Ocean {
	public:
		char ocean[20][20];
		std::vector< Boat*> Boats;
		Ocean(int oceanSize);
		int GetSize() { return size; };
		void GenerateOcean();
		void PlaceBoat(Boat* b, bool flipped);
		void UpdateOcean();
		void DisplayOcean(int horizontalDisplacement, int verticleDisplacement);
		
		BattleShip::coords ReadCoords();



	private:
		int size;


	};
