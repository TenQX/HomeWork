// Project L.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define q rand() % 9

#include <iostream>
using namespace std;

void fullMatr(int a = 4, int arr[4][4]) {
    for (int b = 0; b < a; b++) {
        for (int c = 0; c < a; c++) {
            arr[b][c] = q;
        }
    }
}

void fullMatr(int a = 4, double arr[4][4]) {
    for (int b = 0; b < a; b++) {
        for (int c = 0; c < a; c++) {
            arr[b][c] = q;
        }
    }
}

void fullMatr(int a = 4, char arr[4][4]) {
    for (int b = 0; b < a; b++) {
        for (int c = 0; c < a; c++) {
            arr[b][c] = 32 + rand() % (127 - 32 + 1);
        }
    }
}

void showMatr(int a = 4, int arr[4][4]) {
    for (int b = 0; b < a; b++) {
        for (int c = 0; c < a; c++) {
            cout << arr[b][c] << " ";
        }
        cout << endl;
    }
}

void showMatr(int a = 4, double arr[4][4]) {
    for (int b = 0; b < a; b++) {
        for (int c = 0; c < a; c++) {
            cout << arr[b][c] << " ";
        }
        cout << endl;
    }
}

void showMatr(int a = 4, char arr[4][4]) {
    for (int b = 0; b < a; b++) {
        for (int c = 0; c < a; c++) {
            cout << arr[b][c] << " ";
        }
        cout << endl;
    }
}

void minMaxInMatr(int a = 4, int arr[4][4]) {
    int min = arr[0][0], max = arr[0][0];
    for (int b = 1; b < a; b++) {
        if (arr[b][b] > max) max = arr[b][b];
        else if (arr[b][b] < min) min = arr[b][b];
    }
    cout << "min is " << min << " and max is " << max << endl;
}

void minMaxInMatr(int a = 4, double arr[4][4]) {
    double min = arr[0][0], max = arr[0][0];
    for (int b = 1; b < a; b++) {
        if (arr[b][b] > max) max = arr[b][b];
        else if (arr[b][b] < min) min = arr[b][b];
    }
    cout << "min is " << min << " and max is " << max << endl;
}

//Стоит ли делать самый большой и самый маленький для символов char, только если по ACSII, но это весьма бессмысленно.

template<typename T>
void sortEveryLineInMatr(int a = 4, T arr[4][4]) {
    bool flag;
    for (int u = 0; u < a; u++) {
        for (int c = 0; c < a; c++) {
            flag = true;
            for (int b = 0; b < a - 1 - c; b++) {
                if (arr[b] > arr[b + 1]) {
                    flag = false;
                    swap(arr[b], arr[b + 1]);
                }
            }
            if (flag != false) break;
        }
    }
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    const int A = 4;
    int arr1[4][4];
    double arr2[4][4];
    char arr3[4][4];


}