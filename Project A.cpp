// Project A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() { 
	double R1;
	double R2;
	double R3;
	cin >> R1;
	cin >> R2;
	cin >> R3;
	double R0 = (R1 * R2 * R3) / ((R1 * R2) + (R2 * R3) + (R3 * R1));
	cout << R0;


	const double Pi = 3.14;
	double s, l, r;
	cin >> l; r = l / (2 * Pi);
	int S = Pi * r * r; cout << s;
	double v, t, a;
	cin >> v;
	cin >> t;
	cin >> a;
	double s = v * t + (a * t * t) / 2; cout << s;
	}