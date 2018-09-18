#pragma once

#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
class Ocean {
public:
	char ocean[20][20];
	struct coords {
		int x;
		int y;
	};
	Ocean(int oceanSize);
	int GetSize() {return size;};
	void GenerateOcean();
	void PlaceBoat(int length, coords origin, bool flipped);
	void UpdateOcean();
	void DisplayOcean(int horizontalDisplacement, int verticleDisplacement);
	void goto_xy(int row, int col);
	
	coords ReadCoords();
	
private:
	int size;
	

};