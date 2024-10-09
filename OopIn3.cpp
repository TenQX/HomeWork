#include <string>
#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

//class Complex
//{
//private:
//    double real;
//    double imaginary;
//public:
//    Complex(double real, double imaginary) : real{ real }, imaginary{ imaginary }{}
//    void print() {
//        cout << this->real << " + " << this->imaginary << "i" << endl;
//    }
//    Complex operator+(const Complex& other) {
//        Complex result(this->real + other.real, this->imaginary + other.imaginary);
//        return result;
//    }
//    Complex operator-(const Complex& other) {
//        Complex result(this->real - other.real, this->imaginary - other.imaginary);
//        return result;
//    }
//    Complex operator*(const Complex& other) {
//        Complex result(this->real * other.real - this->imaginary * other.imaginary, this->imaginary * other.real + this->real * other.imaginary);
//        return result;
//    }
//    Complex operator/(const Complex& other) {
//        Complex result((this->real * other.real + this->imaginary * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary), (this->imaginary * other.real - this->real * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary));
//        return result;
//    }
//    bool operator==(const Complex& other) {
//        return (this->real == other.real && this->imaginary == other.imaginary);
//    }
//    bool operator>(const Complex& other) {
//        return (this->real > other.real);
//    }
//    bool operator<(const Complex& other) {
//        return (this->real < other.real);
//    }
//    bool operator>=(const Complex& other) {
//        return ((this->real == other.real && this->imaginary == other.imaginary) || this->real > other.real);
//    }
//    bool operator<=(const Complex& other) {
//        return ((this->real == other.real && this->imaginary == other.imaginary) || this->real < other.real);
//    }
//    bool operator!=(const Complex& other) {
//        return (this->real != other.real || this->imaginary != other.imaginary);
//    }
//
//
//};

template <typename T>
class DynamicArray {
private:
    int size = 0;
    T* arr = nullptr;

public:
    DynamicArray() {
        this->arr = new T[size];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    T operator[](int i)const {
        return this->arr[i];
    }

    T& operator[](int i) {
        return this->arr[i];
    }

    operator bool(){
        return size % 2 == 0;
    }
    operator int() {
        return size;
    }
    operator string() {
        return "Не Балуйся";
    }
    operator char() {
        return char(12);
    }

    DynamicArray operator=(DynamicArray& other) {
        delete[] this->arr;
        this->arr = new T[other.size];
        for (int b = 0; b < other.size; b++) {
            this->arr[b] = other.arr[b];
        }
        this->size = other.size;
        return *this;
    }

    void operator()(T val) {
        T* buf = new T[this->size + 1];
        for (int b = 0; b < this->size; b++) {
            buf[b] = this->arr[b];
        }
        buf[this->size] = val;
        delete[] this->arr;
        this->arr = buf;
        this->size++;
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
    DynamicArray<int> arr;
    arr(5);
    arr(7);
    arr(1);
    arr(12);
    arr(25);
    arr.print();
    DynamicArray<int> arr2;
    arr2 = arr;
    arr2.print();

}

