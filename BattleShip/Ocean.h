#pragma once

#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
class Ocean {
public:
	char ocean[20][20];
	Ocean(int oceanSize);
	int GetSize() {return size;};
	void GenerateOcean();
	void PlaceBoat(int length, int orginX, int orginY, bool flipped);
	void UpdateOcean();
	void DisplayOcean(int horizontalDisplacement, int verticleDisplacement);
	void goto_xy(int row, int col);
	
private:
	int size;
	

};