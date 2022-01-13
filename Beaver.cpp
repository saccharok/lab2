#include "Beaver.h"
#include <stdio.h>
#include <malloc.h>

Beaver InitBeaver(char* name, double weight, double lenght)
{
	Beaver beaver;
	name = (char*)malloc(10);
	if (name == nullptr)
	{
		printf("������. ������� ������� ��� �����!\n");
		beaver.bName[0] = '�';
		beaver.bName[1] = '�';
		beaver.bName[2] = '�';
		beaver.bName[3] = '\0';
	}
	else *beaver.bName = *name;
	free(name);
	if (weight <= 0)
	{
		printf("������. ������� ������ ��� �����!\n");
		beaver.bWeight = 2.1;
	}
	else beaver.bWeight = weight;
	if (lenght <= 0)
	{
		printf("������. ������� ������� ����� ������!\n");
		beaver.bLength = 20.2;
	}
	else beaver.bLength = lenght;
	return beaver;
}

void PrintBeaver(Beaver beaver)
{
	printf("%10s, ��� � �� - %5.2lf, ����� ������ � ���������� - %5.2lf\n", beaver.bName, beaver.bWeight, beaver.bLength);
}

Beaver SetBeaver()
{
	Beaver beaver;
	*beaver.bName = NULL;
	while (beaver.bName == nullptr)
	{
		printf("������� ��� �����: ");
		gets_s(beaver.bName);
	}
	beaver.bWeight = 0;
	while (beaver.bWeight <= 0)
	{
		printf("������� ��� ����� � �����������: ");
		scanf_s("%lf", &beaver.bWeight);
	}
	beaver.bLength = 0;
	while (beaver.bLength <= 0)
	{
		printf("������� ����� ������ � �����������: ");
		scanf_s("%lf", &beaver.bLength);
	}
	return beaver;
}