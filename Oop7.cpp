#include <iostream>
#include <string>

using namespace std;

class Complex
{
public:
    double real;
    double imaginary;
    Complex() {}
    Complex(double real, double imaginary) : real{ real }, imaginary{ imaginary } {}
    Complex operator+(const Complex& other) {
        Complex result(this->real + other.real, this->imaginary + other.imaginary);
        return result;
    }
    Complex operator-(const Complex& other) {
        Complex result(this->real - other.real, this->imaginary - other.imaginary);
        return result;
    }
    Complex operator*(const Complex& other) {
        Complex result(this->real * other.real - this->imaginary * other.imaginary, this->imaginary * other.real + this->real * other.imaginary);
        return result;
    }
    Complex operator/(const Complex& other) {
        Complex result((this->real * other.real + this->imaginary * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary), (this->imaginary * other.real - this->real * other.imaginary) / (other.real * other.real + other.imaginary * other.imaginary));
        return result;
    }
    bool operator==(const Complex& other) {
        return (this->real == other.real && this->imaginary == other.imaginary);
    }
    bool operator>(const Complex& other) {
        return (this->real > other.real);
    }
    bool operator<(const Complex& other) {
        return (this->real < other.real);
    }
    bool operator>=(const Complex& other) {
        return ((this->real == other.real && this->imaginary == other.imaginary) || this->real > other.real);
    }
    bool operator<=(const Complex& other) {
        return ((this->real == other.real && this->imaginary == other.imaginary) || this->real < other.real);
    }
    bool operator!=(const Complex& other) {
        return (this->real != other.real || this->imaginary != other.imaginary);
    }
};



ostream& operator << (ostream& out, const Complex& number) {
    out << number.real << " + " << number.imaginary << "i" << endl;
    return out;
}
istream& operator >> (istream& in, Complex& number) {
    double real, imaginary;
    in >> real >> imaginary;
    number.real = real;
    number.imaginary = imaginary;
    return in;
}



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

    operator bool() {
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

    double meanAr() {
        double mean = 0;
        for (int b = 0; b < size; b++) {
            mean += this->arr[b];
        }
        mean /= size;
        return mean;
    }
};

int main()
{
    DynamicArray<int> arr;
    arr(5);
    arr(4);
    arr(3);
    arr(12);
    arr(6);
    arr(8);
    arr.print();
    int a;
    cin >> a;
    try {
        cout << arr[a];
    }
    catch (out_of_range e){
        cout << "incorrect index";
    }
    cin >> a;
    try {
        cout << arr[a];
    }
    catch (out_of_range e) {
        cout << "incorrect index";
    }
    cin >> a;
    try {
        cout << arr[a];
    }
    catch (out_of_range e) {
        cout << "incorrect index";
    }
    cin >> a;
    try {
        cout << arr[a];
    }
    catch (out_of_range e) {
        cout << "incorrect index";
    }
    cin >> a;
    try {
        cout << arr[a];
    }
    catch (out_of_range e) {
        cout << "incorrect index";
    }
}

