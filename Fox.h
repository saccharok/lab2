#pragma once
struct Fox
{
	char foxName[10];
	double foxWeight;
	double foxAge;
	int foxNumber;
	int foxCode;
};

Fox InitFox(char* name, double weight, double age, int number, int code);
void PrintFox(Fox fox);
Fox SetFox();