#pragma once
struct Wolf
{
	char wolfName[10];//���
	double wolfAge;//�������
	int wolfNumber;//����� �������
	int wolfCode;//��� ����������
};

Wolf InitWolf(char* name, double age, int number, int code);//������� ��������
void PrintWolf(Wolf animal);//������� ������
Wolf SetWolf();//������� �����