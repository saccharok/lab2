#pragma once
struct Bear
{
	char bearName[10];
	double bearWeight;
	double bearHigh;
	double bearAge;
};

Bear InitBear(char* name, double weight, double high, double age);
void PrintBear(Bear bear);
Bear SetBear();