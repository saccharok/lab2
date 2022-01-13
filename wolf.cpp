#include "wolf.h"
#include <stdio.h>
#include <malloc.h>

Wolf InitWolf(char* name, double age, int number, int code)
{
	Wolf wolf;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("Ошибка. Неверно введено имя волка!\n");
		wolf.wolfName[0] = 'О';
		wolf.wolfName[1] = 'л';
		wolf.wolfName[2] = 'е';
		wolf.wolfName[3] = 'г';
		wolf.wolfName[4] = '\0';
	}
	else *wolf.wolfName = *name;
	free(name);
	if (age <= 0)
	{
		printf("Ошибка. Неверно введен возраст волка!\n");
		wolf.wolfAge = 0, 1;
	}
	else wolf.wolfAge = age;
	if (number < 1 || number > 4)
	{
		printf("Ошибка. Неверно введен номер вольера с волком!\n");
		wolf.wolfNumber = 1;
	}
	else wolf.wolfNumber = number;
	if (code < 100000 || code > 999999)
	{
		printf("Ошибка. Код сотрудника введен неверно!\n");
		wolf.wolfCode = 100000;
	}
	else wolf.wolfCode = code;
	return wolf;
}

void PrintWolf(Wolf wolf)
{
	printf("%10s, возраст в годах - %5.2lf, %5d вольер, отвественный - %6d\n", wolf.wolfName, wolf.wolfAge, wolf.wolfNumber, wolf.wolfCode);
}

Wolf SetWolf()
{
	Wolf wolf;
	*wolf.wolfName = NULL;
	while (wolf.wolfName == nullptr)
	{
		printf("Введите имя волка: ");
		gets_s(wolf.wolfName);
	}
	wolf.wolfAge = 0;
	while (wolf.wolfAge <= 0)
	{
		printf("Введите возраст волка в годах: ");
		scanf_s("%lf", &wolf.wolfAge);
	}
	wolf.wolfNumber = 0;
	while (wolf.wolfNumber < 0 || wolf.wolfNumber > 4)
	{
		printf("Введите номер вольера с волком(1, 2 или 3): ");
		scanf_s("%d", &wolf.wolfNumber);
	}
	wolf.wolfCode = 0;
	while (wolf.wolfCode < 100000 || wolf.wolfCode > 999999)
	{
		printf("Введите код сотрудника (6 цифр): ");
		scanf_s("%d", &wolf.wolfCode);
	}
	return wolf;
}