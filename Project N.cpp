// Project N.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define q rand() % 9 
#include <iostream> 
using namespace std;


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int size1;
    //int size2; 
    cin >> size1;
    //cin >> size2; 
    int* array1 = new int[size1];
    //int* array2 = new int[size2]; 
    for (int b = 0; b < size1; b++) array1[b] = q;
    for (int b = 0; b < size1; b++) cout << array1[b] << " ";
    cout << endl;
    //for (int b = 0; b < size2; b++) array2[b] = q; 
    //for (int b = 0; b < size2; b++) cout << array2[b] << " "; 
    //cout << endl; 

    //int i = 3; 
    //int* buf = new int[size1 + size2]; 
    //for (int b = 0; b < i; b++) buf[b] = array1[b]; 
    //for (int b = 0; b < size2; b++) buf[b + i] = array2[b]; 
    //for (int b = i + size2; b < size1 + size2; b++) buf[b] = array1[b - size2]; 
    //delete[] array1; 
    //array1 = buf; 
    //size1 += size2; 
    //for (int b = 0; b < size1; b++) cout << array1[b] << " "; 
    //cout << endl; 
    //for (int b = 0; b < size2; b++) cout << array2[b] << " "; 
    //cout << endl; 

    int a;
    cin >> a;
    int i = -1;
    for (int b = 0; b < size1; b++) {
        if (array1[b] == a) {
            i = b;
            break;
        }
    }
    if (i == -1) {
        for (int b = 0; b < size1; b++) cout << array1[b] << " ";
    }
    else {
        int* buf = new int[size1 - 1];
        for (int b = 0; b < i; b++) buf[b] = array1[b];
        for (int b = i; b < size1; b++) buf[b] = array1[b + 1];
        delete[] array1;
        array1 = buf;
        size1--;
        for (int b = 0; b < size1; b++) cout << array1[b] << " ";
        cout << endl;
    }
}
