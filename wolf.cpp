#include "wolf.h"
#include <stdio.h>
#include <malloc.h>

Wolf InitWolf(char* name, double age, int number, int code)
{
	Wolf wolf;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("������. ������� ������� ��� �����!\n");
		wolf.wolfName[0] = '�';
		wolf.wolfName[1] = '�';
		wolf.wolfName[2] = '�';
		wolf.wolfName[3] = '�';
		wolf.wolfName[4] = '\0';
	}
	else *wolf.wolfName = *name;
	free(name);
	if (age <= 0)
	{
		printf("������. ������� ������ ������� �����!\n");
		wolf.wolfAge = 0, 1;
	}
	else wolf.wolfAge = age;
	if (number < 1 || number > 4)
	{
		printf("������. ������� ������ ����� ������� � ������!\n");
		wolf.wolfNumber = 1;
	}
	else wolf.wolfNumber = number;
	if (code < 100000 || code > 999999)
	{
		printf("������. ��� ���������� ������ �������!\n");
		wolf.wolfCode = 100000;
	}
	else wolf.wolfCode = code;
	return wolf;
}

void PrintWolf(Wolf wolf)
{
	printf("%10s, ������� � ����� - %5.2lf, %5d ������, ������������ - %6d\n", wolf.wolfName, wolf.wolfAge, wolf.wolfNumber, wolf.wolfCode);
}

Wolf SetWolf()
{
	Wolf wolf;
	*wolf.wolfName = NULL;
	while (wolf.wolfName == nullptr)
	{
		printf("������� ��� �����: ");
		gets_s(wolf.wolfName);
	}
	wolf.wolfAge = 0;
	while (wolf.wolfAge <= 0)
	{
		printf("������� ������� ����� � �����: ");
		scanf_s("%lf", &wolf.wolfAge);
	}
	wolf.wolfNumber = 0;
	while (wolf.wolfNumber < 0 || wolf.wolfNumber > 4)
	{
		printf("������� ����� ������� � ������(1, 2 ��� 3): ");
		scanf_s("%d", &wolf.wolfNumber);
	}
	wolf.wolfCode = 0;
	while (wolf.wolfCode < 100000 || wolf.wolfCode > 999999)
	{
		printf("������� ��� ���������� (6 ����): ");
		scanf_s("%d", &wolf.wolfCode);
	}
	return wolf;
}