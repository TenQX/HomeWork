#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#define random(min, max) min + rand() % (max - min + 1);

using namespace std;

int** createAndFillArray(int m, int n) {
	int** arr = new int* [m];
	for (int b = 0; b < m; b++) {
		arr[b] = new int[n];
	}
	for (int b = 0; b < m; b++) {
		for (int c = 0; c < n; c++) {
			arr[b][c] = random(0, 100);
		}
	}
	return arr;
}

int** deleteRowAndColumn(int** arr, int rowIndex, int colIndex) {
	int row = _msize(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [row - 1];
	for (int b = 0; b < row - 1; b++) {
		arr[b] = new int[col - 1];
	}
	for (int b = 0; b < rowIndex; b++) {
		for (int c = 0; c < colIndex; c++) {
			buf[b][c] = arr[b][c];
		}
		for (int c = colIndex; c < col; c++) {
			buf[b][c] = arr[b][c + 1];
		}
	}
	for (int b = rowIndex; b < row; b++) {
		for (int c = 0; c < colIndex; c++) {
			buf[b][c] = arr[b + 1][c];
		}
		for (int c = colIndex; c < col; c++) {
			buf[b][c] = arr[b + 1][c + 1];
		}	
	}
}

void rotateArray90Degrees(int** arr) {
	int row = _msize(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [col];
	for (int b = 0; b < col; b++) {
		buf[b] = new int[row];
	}
	for (int bO = 0, b = 0; bO < row, b < col; bO++, b++) {
		for (int cO = 0, c = row - 1; cO < col, c > 0; cO++, c--) {
			buf[b][c] = arr[bO][cO];
		}
	}
}



int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
}