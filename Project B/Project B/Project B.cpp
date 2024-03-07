// Project B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int secs;
	cin >> secs;
	int hours;
	int mins;
	if (secs >= 60) {
		mins = secs / 60;
		secs %= 60;
	}
	else mins = 0;
	if (mins >= 60) {
		hours = mins / 60;
		mins %= 60;
	}
	else hours = 0;
	cout << hours << " hours;" << mins << " minutes;" << secs << " seconds";


	float num;
	cin >> num;
	int money;
	money = num;
	money *= 100;
	num *= 100;
	int money2 = num - money;
	money /= 100;
	cout << money << " dollars " << money2 << " cents ";

	int days;
	cin >> days;
	int weeks;
	if (days >= 7) {
		weeks = days / 7;
		days %= 7;
	}
	else weeks = 0;
	cout << weeks << " weeks " << days << " days ";

}