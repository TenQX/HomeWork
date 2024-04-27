// Project O.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define q rand() % 9
#define p 1 + rand() % 8

#include <iostream>
using namespace std;

int main()
{
    //int row, col;
    //cin >> row >> col;
    //int** arr = new int* [row]; 
    //for (int b = 0; b < row; b++) {
    //    arr[b] = new int[col]; 
    //}
    //for (int b = 0; b < row; b++) {
    //    for (int c = 0; c < col; c++) {
    //        arr[b][c] = q;
    //    }
    //}
    //for (int b = 0; b < row; b++) {
    //    for (int c = 0; c < col; c++) {
    //        cout << arr[b][c] << " ";
    //    }
    //    cout << endl;
    //}

    //int num, i;
    //cin >>num >> i;

    //int** buf = new int* [row];
    //for (int b = 0; b < i; b++) {
    //    buf[b] = arr[b];
    //}
    //for (int b = i + 1; b < row; b++) {
    //    buf[b] = arr[b];
    //}
    //buf[i] = new int[col + 1];
    //for (int b = 0; b < col; b++) {
    //    buf[i][b] = arr[i][b];
    //}
    //buf[i][col] = num;
    //arr = buf;
    //for (int b = 0; b < row; b++) {
    //    col = _msize(arr[b]) / sizeof(arr[b][0]);
    //    for (int c = 0; c < col; c++) {
    //        cout << arr[b][c] << " ";
    //    }
    //    cout << endl;
    //}



    int row = 5;
    int col;
    int** arr = new int* [row];
    for (int b = 0; b < row; b++) {
        arr[b] = new int[p];
    }
    for (int b = 0; b < row; b++) {
        col = _msize(arr[b]) / sizeof(arr[b][0]);
        for (int c = 0; c < col; c++) {
            arr[b][c] = q;
        }
    }
    for (int b = 0; b < row; b++) {
        col = _msize(arr[b]) / sizeof(arr[b][0]);
        for (int c = 0; c < col; c++) {
            cout << arr[b][c] << " ";
        }
        cout << endl;
    }

}