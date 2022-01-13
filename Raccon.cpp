#include "Raccon.h"
#include <stdio.h>
#include <malloc.h>

Raccon InitRaccon(char* name, double weight, double age)
{
	Raccon raccon;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("������. �� �� ����� ��� �����!\n");
		raccon.rName[0] = '�';
		raccon.rName[1] = '�';
		raccon.rName[2] = '�';
		raccon.rName[3] = '�';
		raccon.rName[4] = '\0';
	}
	else *raccon.rName = *name;
	free(name);
	if (weight <= 0)
	{
		printf("������. �� �� ����� ��� �����!\n");
		raccon.rWeight = 4.2;
	}
	else raccon.rWeight = weight;
	if (age <= 0)
	{
		printf("������. �� �� ����� ������� �����!\n");
		raccon.rAge = 2;
	}
	else raccon.rAge = age;
	return raccon;
}

void PrintRaccn(Raccon raccon)
{
	printf("%10s, ��� � ����������� - %5.2lf, ������� � ����� - %5.2lf", raccon.rName, raccon.rWeight, raccon.rAge);
}

Raccon SetRaccon()
{
	Raccon raccon;
	*raccon.rName = NULL;
	while (raccon.rName == nullptr)
	{
		printf("������� ��� �����: ");
		gets_s(raccon.rName);
	}
	raccon.rWeight = 0;
	while (raccon.rWeight <= 0)
	{
		printf("������� ��� �����: ");
		scanf_s("%lf", &raccon.rWeight);
	}
	raccon.rAge = 0;
	while (raccon.rAge <= 0)
	{
		printf("������� ������ �����: ");
		scanf_s("%lf", &raccon.rAge);
	}
	return raccon;
}