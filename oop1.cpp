#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

template <typename T>
class DynamicArray {
private:
    int size = 0;
    T* arr = new T [size];

public:
    ~DynamicArray() {
        delete[] arr;
    }

    int arrSize() {
        return size;
    }

    void addElem(T elem) {
        T* buf = new T[size + 1];
        for (int b = 0; b < size; b++) {
            buf[b] = arr[b];
        }
        buf[size] = elem;
        delete[] arr;
        arr = buf;
        size++;
    }

    void print() {
        for (int b = 0; b < size; b++) {
            cout << arr[b] << " ";
        }
        cout << endl;
    }

    void deleteLastElem() {
        T* buf = new T[size - 1];

        for (int b = 0; b < size - 1; b++) {
            buf[b] = arr[b];
        }

        delete[] arr;
        arr = buf;
        size--;
    }

    void clearAll() {
        delete[] arr;
        arr = nullptr;
        size = 0;
    }
};



int main() {
    DynamicArray<int> array;

    array.addElem(15);
    array.addElem(21);
    array.addElem(6);
    array.addElem(-12);

    array.print();
    cout << array.arrSize() << endl;

    array.deleteLastElem();
    array.print();
    cout << array.arrSize() << endl;

    array.clearAll();
    array.print();
    cout << array.arrSize() << endl;

}