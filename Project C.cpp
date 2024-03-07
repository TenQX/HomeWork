// Project C.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	if (num > 99999 && num < 1000000) {
		int a, b, c, d, e, f;
		a = num % 10;
		b = (num % 100 - a) / 10;
		c = (num % 1000 - b - a) / 100;
		d = (num % 10000 - c - b - a) / 1000;
		e = (num % 100000 - d - c - b - a) / 10000;
		f = (num % 1000000 - e - d - c - b - a) / 100000;
		if (a + b + c == d + e + f) cout << "Your number is lucky!\n";
		else cout << "just a number xD";
	}
	else cout << " ERROR 0000000000000...";

	int num;
	cin >> num;
	if (num > 999 && num < 10000) {
		int a, b, c, d;
		a = num % 10;
		b = (num % 100 - a) / 10;
		c = (num % 1000 - b - a) / 100;
		d = (num % 10000 - c - b - a) / 1000;
		cout << c << d << a << b;
	}
	else cout << " ERROR 0000000000000...";

	int a1, a2, a3, a4, a5, a6, a7;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
	int a;
	if (a1 >= a2) a = a1;
	else if (a2 > a1) a = a2;
	if (a3 > a) a = a3;
	if (a4 > a) a = a4;
	if (a5 > a) a = a5;
	if (a6 > a) a = a6;
	if (a7 > a) a = a7;
	cout << a;
}