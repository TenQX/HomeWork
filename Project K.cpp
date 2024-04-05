// Project K.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#define q rand() % 9

#include <iostream>
using namespace std;

void conversion(int base, int syst) {
    int otv = base, ost = 0, buf = 1, ans = 0;
    while (otv >= syst) {
        ost = otv % syst;
        otv = int(otv / syst);
        ans += ost * buf;
        buf *= 10;
        //cout << otv << " " << ost << " " << ans << endl;
    }
    ans += otv * buf;
    cout << ans;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b;
    cin >> a >> b;
    conversion(a, b);
}



//Работает только с системами ниже 10, так как не знаю способа встроить в итоговый integer (то есть в переменную) значения букв (A, B, H, etc.)