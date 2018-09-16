#pragma once

#include<iostream>
#include<windows.h>
#include<time.h>
class Ocean {
public:
	char ocean[15][15];
	
	Ocean();
	
	int GetSize() {return size;};
	void SetSize(int value) { size = value; }
	void GenerateOcean();
	void PlaceBoat(int length, int orginX, int orginY, bool flipped);
	void UpdateOcean();
	void DisplayOcean(int horizontalDisplacement, int verticleDisplacement);
	void goto_xy(int row, int col);
	
private:
	int size;
	

};