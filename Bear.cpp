#include "Bear.h"
#include <stdio.h>
#include <malloc.h>

Bear InitBear(char* name, double weight, double high, double age)
{
	Bear bear;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("Ошибка. Вы не ввели имя медведя!\n");
		bear.bearName[0] = 'В';
		bear.bearName[1] = 'а';
		bear.bearName[2] = 'н';
		bear.bearName[3] = 'я';
		bear.bearName[4] = '\0';
	}
	else *bear.bearName = *name;
	if (weight <= 0)
	{
		printf("Ошибка. Вы не ввели вес медведя!");
		bear.bearWeight = 65, 4;
	}
	else bear.bearWeight = weight;
	if (high <= 0)
	{
		printf("Ошибка. Вы не ввели рост медведя!");
		bear.bearHigh = 1, 9;
	}
	else bear.bearHigh = high;
	if (age <= 0)
	{
		printf("Ошибка. Вы не ввели возраст медведя!\n");
		bear.bearAge = 3, 2;
	}
	else bear.bearAge = age;
	return bear;
}

void PrintBear(Bear bear)
{
	printf("%10s, вес в килограммах - %5.2lf, рост в метрах - %5.2lf, возраст в годах - %5.2lf", bear.bearName, bear.bearWeight, bear.bearHigh, bear.bearAge);
}

Bear SetBear()
{
	Bear bear;
	*bear.bearName = NULL;
	while (bear.bearName == nullptr)
	{
		printf("Введите имя медведя: ");
		gets_s(bear.bearName);
	}
	bear.bearWeight = 0;
	while (bear.bearWeight <= 0)
	{
		printf("Введите вес медведя: ");
		scanf_s("%lf", &bear.bearWeight);
	}
	bear.bearHigh = 0;
	while (bear.bearHigh <= 0)
	{
		printf("Введите рост медведя: ");
		scanf_s("%lf", &bear.bearHigh);
	}
	bear.bearAge = 0;
	while (bear.bearAge <= 0)
	{
		printf("Введите вораст медведя: ");
		scanf_s("%lf", &bear.bearAge);
	}
	return bear;
}