// Project C.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {

    const int SIZE = 10;
    int array(SIZE);
    bool flag = true;
    int left = 0, right = SIZE - 1;
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i < right; i++) 
        {
            if (array[i] > array[i + 1]) 
            {
                double t = array[i];
                array[i] = array[i + 1];
                array[i + 1] = t;
                flag = 1;   
        }
        right--; 
        for (int i = right; i > left; i--) 
        {
            if (array[i - 1] > array[i])
            {
                double t = array[i];
                array[i] = array[i - 1];
                array[i - 1] = t;
                flag = 1;   
            }
        }
        left++;
        if (flag == 0) break;
    }
    for (int i = 0, i < SIZE, i++) {
        cout << array[i] << " ";
    }
}