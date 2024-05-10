// Project Q.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define q rand() % 9
#define p 1 + rand() % 8

#include <iostream>
using namespace std;

void quickSort(int* arr, int start, int fin) {
	if (start < fin) {
		int pv = arr[fin];
		int i = start;
		int j = start;
		while (i <= fin) {
			if (arr[i] > pv) {
				i++;
			}
			else {
				swap(arr[i], arr[j]);
				i++;
				j++;
			}
		}
		int mk = j - 1;
		quickSort(arr, start, mk - 1);
		quickSort(arr, mk + 1, fin);
	}
}

int main() 
{
	int* arr = new int[10];
	for (int b = 0; b < 10; b++)
	{
		arr[b] = q;
	}
	for (int b = 0; b < 10; b++)
	{
		cout << arr[b] << " ";
	}
	cout << endl;
	quickSort(arr, 0, 9);
	for (int b = 0; b < 10; b++)
	{
		cout << arr[b] << " ";
	}
	cout << endl;
}