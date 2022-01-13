#include "Raccon.h"
#include <stdio.h>
#include <malloc.h>

Raccon InitRaccon(char* name, double weight, double age)
{
	Raccon raccon;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("Ошибка. Вы не ввели имя енота!\n");
		raccon.rName[0] = 'Д';
		raccon.rName[1] = 'и';
		raccon.rName[2] = 'м';
		raccon.rName[3] = 'а';
		raccon.rName[4] = '\0';
	}
	else *raccon.rName = *name;
	free(name);
	if (weight <= 0)
	{
		printf("Ошибка. Вы не ввели вес енота!\n");
		raccon.rWeight = 4.2;
	}
	else raccon.rWeight = weight;
	if (age <= 0)
	{
		printf("Ошибка. Вы не ввели врзраст енота!\n");
		raccon.rAge = 2;
	}
	else raccon.rAge = age;
	return raccon;
}

void PrintRaccn(Raccon raccon)
{
	printf("%10s, вес в килограммах - %5.2lf, возраст в годах - %5.2lf", raccon.rName, raccon.rWeight, raccon.rAge);
}

Raccon SetRaccon()
{
	Raccon raccon;
	*raccon.rName = NULL;
	while (raccon.rName == nullptr)
	{
		printf("Введите имя енота: ");
		gets_s(raccon.rName);
	}
	raccon.rWeight = 0;
	while (raccon.rWeight <= 0)
	{
		printf("Введите вес енота: ");
		scanf_s("%lf", &raccon.rWeight);
	}
	raccon.rAge = 0;
	while (raccon.rAge <= 0)
	{
		printf("Введите вораст енота: ");
		scanf_s("%lf", &raccon.rAge);
	}
	return raccon;
}