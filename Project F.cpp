// Project F.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	//1
	//srand(time(NULL));
	//int min = 0, max = 10;
	//const int SIZE = 10;
	//int array(SIZE);
	//for (int b = 0; b < SIZE; b++) {
	//	array[b] = min + rand() % (max - min + 1);
	//	cout << array[b];
	//}
	//cout << endl;
	//int a = array[0], c = array[0];
	//for (int b = 1; b < SIZE; b++) {
	//	if (a > array[b]) c = array[b];
	//	else a = array[b];
	//}
	//cout << a << " " << c;

	//2
	//srand(time(NULL));
	//int min = 0, max = 10;
	//const int SIZE = 10;
	//int array(SIZE);
	//for (int b = 0; b < SIZE; b++) {
	//	array[b] = min + rand() % (max - min + 1);
	//	cout << array[b];
	//}
	//cout << endl;
	/*int sum, u;
	cin >> u;
	sum = 0;
	for (int b = 0; b < SIZE; b++)
	{
		if (array[b] < u){
			sum += array[b];
		}

	}
	cout << endl;
	cout << sum;*/

	//3
	/*srand(time(NULL));
	const int SIZE = 12;
	int array(SIZE);
	int st, end, min, max;
	for (int b = 0; b < SIZE; b++) {
		cin >> array[b];
	}
	cin >> st;
	cin >> end;
	min = st - 1;
	max = st - 1;
	for (int b = st; b <= end - 1; b++) {
		if (array[b] > array[max]) max = b;
		if (array[b] < array[min]) min = b;
	cout << min + 1 << endl;
	cout << max + 1
	}*/
}
