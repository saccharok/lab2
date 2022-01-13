#pragma once
struct Wolf
{
	char wolfName[10];//имя
	double wolfAge;//возраст
	int wolfNumber;//номер вольера
	int wolfCode;//код сотрудника
};

Wolf InitWolf(char* name, double age, int number, int code);//функция создания
void PrintWolf(Wolf animal);//функция вывода
Wolf SetWolf();//функция ввода