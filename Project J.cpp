// Project J.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define q rand() % 9
#include <iostream>
using namespace std;

void fullMass(int arr[], int SIZE) {
    for (int b = 0; b < SIZE; b++) arr[b] = q;
}

void showMass(int arr[], int SIZE) {
    for (int b = 0; b < SIZE; b++) cout << arr[b] << " ";
    cout << endl;
}

void isLucky(int num) {
    int a, b, c, d, e, f;
    a = num % 10;
    b = (((num % 100) - (num % 10)) / 10);
    c = (((num % 1000) - (num % 100) - (num % 10)) / 100);
    d = (((num % 10000) - (num % 1000) - (num % 100) - (num % 10)) / 1000);
    e = (((num % 100000) - (num % 10000) - (num % 1000) - (num % 100) - (num % 10)) / 10000);
    f = (((num % 1000000) - (num % 100000) - (num % 10000) - (num % 1000) - (num % 100) - (num % 10)) / 100000);
    cout << a << b << c << d << e << f;
    if (a + b + c == d + e + f) cout << "Dis is the lucky one";
    else cout << "Just a number xD";
}

void lineSearch(int num, int arr[], int SIZE) {
    for (int b = 0; b < SIZE; b++) {
        if (arr[b] == num) cout << b << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    /*int a;
    cin >> a;
    if (a < 1000000 && a > 99999) isLucky(a);
    else cout << "Number ain't 6 digits :(";*/

    //const int SIZE = 10;
    //int a;
    //cin >> a;
    //int arr[SIZE];
    //fullMass(arr, SIZE);
    //showMass(arr, SIZE);
    //lineSearch(a, arr, SIZE);



}