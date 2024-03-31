// Project H.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    //1
    //int min = 0, max = 9;
    //const int ROW = 4;
    //const int COL = 5;
    //int array[ROW][COL];
    //for (int b = 0; b < ROW; b++) {
    //    for (int c = 0; c < COL; c++) {
    //        array[b][c] = min + rand() % (max + 1 - min);
    //        cout << array[b][c] << " ";
    //    }
    // cout << endl;
    //}
    //cout << endl;
    //int u;
    //for (int c = 0; c < COL; c++) {
    //    u += array[0][c];
    //}
    //int a = 0;
    //for (int b = 1; b < ROW; b++) {
    //    for (int c = 0; c < COL; c++) {
    //        a += array[b][c];
    //        if (a < u) u = a;
    //    }
    //    a = 0;
    //}
    //cout << u;

    //2
    /*int min = 0, max = 9;
    const int ROW = 4;
    const int COL = 5;
    int array[ROW][COL];
    for (int b = 0; b < ROW; b++) {
        for (int c = 0; c < COL; c++) {
            array[b][c] = min + rand() % (max + 1 - min);
            cout << array[b][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int a;
    cin >> a;
    int u = 0;
    for (int b = 0; b < ROW; b++) {
        for (int c = 0; c < COL; c++) {
            if (array[b][c] % 10 == a) u += 1;
        }
        cout << "в строке номер " << b << " " << u << " чисел, оканчивающихся на " << a << endl;
        u = 0;
    }*/

    //3
    /*int min = 0, max = 9;
    const int ROW = 3;
    const int COL = 3;
    int array[ROW][COL];
    for (int b = 0; b < ROW; b++) {
        for (int c = 0; c < COL; c++) {
            array[b][c] = min + rand() % (max + 1 - min);
            cout << array[b][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
    bool flag = true;
    for (int b = 0; b < ROW; b++) {
        for (int c = 0; c < COL; c++) {
            if (array[b][c] != array[c][b]) flag = false;
        }
        if (flag == false) {
            cout << "NO";
            break;
        }
    }
    if (flag == true) cout << "YES";
    */
}