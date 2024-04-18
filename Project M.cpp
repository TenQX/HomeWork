// Project M.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define q rand() % 9

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int* arr = new int [5];
    int* parr = arr;
    cout << parr;
}