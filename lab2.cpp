// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <Windows.h>
#include "wolf.h"
#include "Beaver.h"
#include "Fox.h"
#include "Raccon.h"
#include "Bear.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //структура Wolf - волк
    char wName[10] = "Волк";
    char* nW = wName;
    Wolf wolf1;
    wolf1 = InitWolf(nW, 3, 2, 129334);
    PrintWolf(wolf1);
    Wolf wolf2;
    wolf2 = SetWolf();
    PrintWolf(wolf2);
    //структура Beaver - бобер
    char beavName[10] = "Бобер";
    char *nB = beavName;
    Beaver beaver1;
    beaver1 = InitBeaver(nB, 4.5, 20);
    PrintBeaver(beaver1);
    Beaver beaver2;
    beaver2 = SetBeaver();
    PrintBeaver(beaver2);
    //структура Fox - лиса
    char fName[10] = "Лиса";
    char* nF = fName;
    Fox fox1;
    fox1 = InitFox(nF, 2.2, 2, 5, 124835);
    PrintFox(fox1);
    Fox fox2;
    fox2 = SetFox();
    PrintFox(fox2);
    //структура Raccon - енот
    char rName[10] = "Енот";
    char* nR = rName;
    Raccon rac1;
    rac1 = InitRaccon(nR, 5.7, 6);
    PrintRaccn(rac1);
    Raccon rac2;
    rac2 = SetRaccon();
    PrintRaccn(rac2);
    //Структура Bear - медведь
    char bearName[10] = "Медведь";
    char* nBear = bearName;
    Bear bear1;
    bear1 = InitBear(nBear, 10.2, 1.6, 7);
    PrintBear(bear1);
    Bear bear2;
    bear2 = SetBear();
    PrintBear(bear2);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
