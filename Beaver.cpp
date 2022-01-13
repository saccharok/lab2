#include "Beaver.h"
#include <stdio.h>
#include <malloc.h>

Beaver InitBeaver(char* name, double weight, double lenght)
{
	Beaver beaver;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("Ошибка. Неверно введено имя бобра!\n");
		beaver.bName[0] = 'У';
		beaver.bName[1] = 'л';
		beaver.bName[2] = 'я';
		beaver.bName[3] = '\0';
	}
	else *beaver.bName = *name;
	free(name);
	if (weight <= 0)
	{
		printf("Ошибка. Неверно введен вес бобра!\n");
		beaver.bWeight = 2.1;
	}
	else beaver.bWeight = weight;
	if (lenght <= 0)
	{
		printf("Ошибка. Неверно введена длина хвоста!\n");
		beaver.bLength = 20.2;
	}
	else beaver.bLength = lenght;
	return beaver;
}

void PrintBeaver(Beaver beaver)
{
	printf("%10s, вес в кг - %5.2lf, длина хвоста в сантимерах - %5.2lf\n", beaver.bName, beaver.bWeight, beaver.bLength);
}

Beaver SetBeaver()
{
	Beaver beaver;
	*beaver.bName = NULL;
	while (beaver.bName == nullptr)
	{
		printf("Введите имя бобра: ");
		gets_s(beaver.bName);
	}
	beaver.bWeight = 0;
	while (beaver.bWeight <= 0)
	{
		printf("Введите вес бобра в килограммах: ");
		scanf_s("%lf", &beaver.bWeight);
	}
	beaver.bLength = 0;
	while (beaver.bLength <= 0)
	{
		printf("Введите длину хвоста в сантиметрах: ");
		scanf_s("%lf", &beaver.bLength);
	}
	return beaver;
}