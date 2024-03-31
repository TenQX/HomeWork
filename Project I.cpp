// Project I.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int power(int basenum, int powernum) {
    return pow(basenum, powernum);
}

int summa(int startnum, int finishnum) {
    int q = 0;
    for (int m = startnum + 1; m < finishnum; m++) q += m;
    return q;
}


int main()
{
    setlocale(LC_ALL, "rus");
    //int a, b;
    //cin >> a >> b;

    //int ans = power(a, b);
    //cout << ans;

    //int ans = summa(a, b);
    //cout << ans;





}