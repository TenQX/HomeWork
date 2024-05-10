// Project P.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define q rand() % 9
#define p 1 + rand() % 8

#include <iostream>
using namespace std;

void showMass(int** arr) {
	int row = _msize(arr) / sizeof(arr[0]);
	for (int b = 0; b < row; b++) {
		int col = _msize(arr[b]) / sizeof(arr[b][0]);
		for (int c = 0; c < col; c++) {
			cout << arr[b][c] << " ";
		}
		cout << endl;
	}
}

void addMassToRow(int** arr, int* array, int ind) {
	int row = _msize(arr) / sizeof(arr[0]);
	int** buf = new int* [row + 1];
	for (int b = 0; b < ind; b++)
	{
		buf[b] = arr[b];
	}
	buf[ind] = array;
	for (int b = ind + 1; b < row + 1; b++)
	{
		buf[b] = arr[b - 1];
	}
	delete[] arr;
	arr = buf;
}

void delRowOfMass(int** arr, int* array, int ind) {
	int row = _msize(arr) / sizeof(arr[0]);
	int** buf = new int* [row - 1];
	for (int b = 0; b < ind; b++)
	{
		buf[b] = arr[b];
	}
	for (int b = ind; b < row - 1; b++)
	{
		buf[b] = arr[b + 1];
	}
	delete[] arr;
	arr = buf;
}

void addElemToRowCol(int** arr, int elem, int rowInd, int colInd) {
	int col = _msize(arr[rowInd]) / sizeof(arr[rowInd][0]);
	int* buf = new int [col + 1];
	for (int b = 0; b < colInd; b++)
	{
		buf[b] = arr[rowInd][b];
	}
	buf[colInd] = elem;
	for (int b = colInd + 1; b < col + 1; b++)
	{
		buf[b] = arr[rowInd][b - 1];
	}
	delete[] arr[rowInd];
	arr[rowInd] = buf;
}

void delElemWithRowCol(int** arr, int rowInd, int colInd) {
	int col = _msize(arr[rowInd]) / sizeof(arr[rowInd][0]);
	int* buf = new int[col - 1];
	for (int b = 0; b < colInd; b++)
	{
		buf[b] = arr[rowInd][b];
	}
	for (int b = colInd + 1; b < col - 1; b++)
	{
		buf[b] = arr[rowInd][b + 1];
	}
	delete[] arr[rowInd];
	arr[rowInd] = buf;
}

void delElemWithValue(int** arr, int elem) {
	int rowInd;
	int colInd;
	int row = _msize(arr) / sizeof(arr[0]);
	for (int b = 0; b < row; b++) {
		int col = _msize(arr[b]) / sizeof(arr[b][0]);
		for (int c = 0; c < col; c++) {
			if (arr[b][c] == elem)
			{
				delElemWithRowCol(arr, b, c);
				return;
			}
		}
	}
}

int main() {}