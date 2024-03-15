// Project C.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int min = 0, max = 9;
	const int SIZE = 10;
	int a[SIZE];
	for (int b = 0; b < SIZE; b++) {
		a[b] = min + rand() % (max + 1 - min);
		cout << a[b] << " ";
	}
	cout << endl;
	bool flag;
	for (int c = 0; c < SIZE; c++) {
		flag = true;
		for (int b = 0; b < SIZE - 1 - c; b++) {
			if (a[b] > a[b + 1]) {
				flag = false;
				swap(a[b], a[b + 1]);
			}
		}
		if (flag != false) break;
	}
	for (int b = 0; b < SIZE; b++) {
		cout << a[b] << " ";
	}
}