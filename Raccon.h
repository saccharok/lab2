#pragma once
struct Raccon
{
	char rName[10];
	double rWeight;
	double rAge;
};

Raccon InitRaccon(char* name, double weight, double age);
void PrintRaccn(Raccon raccon);
Raccon SetRaccon();

