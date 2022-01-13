#pragma once
struct Beaver
{
	char bName[10];
	double bWeight;
	double bLength;
};

Beaver InitBeaver(char* name, double weiht, double lenght);
void PrintBeaver(Beaver beaver);
Beaver SetBeaver();