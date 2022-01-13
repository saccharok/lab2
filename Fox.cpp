#include "Fox.h"
#include <stdio.h>
#include <malloc.h>

Fox InitFox(char* name, double weight, double age, int number, int code)
{
	Fox fox;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("������. �� �� ����� ��� ����!\n");
		fox.foxName[0] = '�';
		fox.foxName[1] = '�';
		fox.foxName[2] = '�';
		fox.foxName[3] = '�';
		fox.foxName[4] = '\0';
	}
	else *fox.foxName = *name;
	free(name);
	if (weight <= 0)
	{
		printf("������. ������� ������ ��� ����!\n");
		fox.foxWeight = 2.1;
	}
	else fox.foxWeight = weight;
	if (age <= 0)
	{
		printf("������. ������� ������ ������� ����!\n");
		fox.foxAge = 0.1;
	}
	else fox.foxAge = age;
	if (number < 5 || number > 6)
	{
		printf("������. ������� ������ ����� ������� � �����!\n");
		fox.foxNumber = 5;
	}
	else fox.foxNumber = number;
	if (code < 100000 || code > 999999)
	{
		printf("������. ��� ���������� ������ �������!\n");
		fox.foxCode = 100000;
	}
	else fox.foxCode = code;
	return fox;
}

void PrintFox(Fox fox)
{
	printf("%10s, ��� � ����������� - %5.2lf, ������� � ����� - %5.2lf, %5d ������, ������������� - %6d", fox.foxName, fox.foxWeight, fox.foxAge, fox.foxNumber, fox.foxCode);
}

Fox SetFox()
{
	Fox fox;
	*fox.foxName = NULL;
	while (fox.foxName == nullptr)
	{
		printf("������� ��� ����: ");
		gets_s(fox.foxName);
	}
	fox.foxWeight = 0;
	while (fox.foxWeight <= 0)
	{
		printf("������� ��� ����: ");
		scanf_s("%lf", &fox.foxWeight);
	}
	fox.foxAge = 0;
	while (fox.foxAge <= 0)
	{
		printf("������� ������� ����: ");
		scanf_s("%lf", &fox.foxAge);
	}
	fox.foxNumber = 0;
	while (fox.foxNumber < 5 || fox.foxNumber > 6)
	{
		printf("������� ����� �������(5 ��� 6): ");
		scanf_s("%d", &fox.foxNumber);
	}
	fox.foxCode = 0;
	while (fox.foxCode < 100000 || fox.foxCode > 999999)
	{
		printf("������� ��� ���������� (6 ����): ");
		scanf_s("%d", &fox.foxCode);
	}
	return fox;
}