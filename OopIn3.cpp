#include <string>
#include <iostream>
#include <vector>
#include <windows.h>


using namespace std;

class Complex
{
public:
    double real;
    double imaginary;
    Complex() {}
    Complex(double real, double imaginary) : real{ real }, imaginary{ imaginary }{}
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

    double meanAr() {
        double mean = 0;
        for (int b = 0; b < size; b++) {
            mean += this->arr[b];
        }
        mean /= size;
        return mean;
    }
};

template <typename T>
T lineEquation(T k, T b) {
    return -b / k;
}

template <typename T>
pair<T, T> QuadrathicEquation(T a, T b, T c) {
    pair<T, T> pairX;
    pairX.first = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    pairX.second = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    return pairX;
}

template <typename T>
T comparsion(T a, T b) {
    if (a > b) {
        return a;
    }
    return b;
}

template<typename T>
class myStack {
private:
    const int step = 3;
    int stackSize;
    int nowSize;
    T* st;
public:
    myStack() {
        this->stackSize = this->step;
        this->nowSize = 0;
        this->st = new T[stackSize];
    }
    bool isFull() {
        return this->nowSize == this->stackSize;
    }
    bool isEmpty() {
        return this->nowSize == 0;
    }
    void addMemory() {
        this->stackSize += this->step;
    }
    void destroyMemory() {
        this->stackSize -= this->step;
    }
    T top() {
        return const this->st[this->nowSize - 1];
    }
    int knowNowSize() {
        return this->nowSize;
    }
    void puch(T elem) {
        if (isFull()) addMemory();
        T* buf = new T[this->stackSize];
        for (int b = 0; b < this->nowSize; b++) {
            buf[b] = this->st[b];
        }
        buf[this->nowSize] = elem;
        delete[] this->st;
        this->st = buf;
        this->nowSize++;
    }
    void pop() {
        if (this->stackSize - this->nowSize > 6) destroyMemory();
        T* buf = new T[this->stackSize];
        for (int b = 0; b < this->nowSize - 1; b++) {
            buf[b] = this->st[b];
        }
        delete[] this->st;
        this->st = buf;
        this->nowSize--;
    }
    void clearStack() {
        delete[] this->st;
        this->nowSize = 0;
        this->stackSize = this->step;
        st = new T[stackSize];
    }
};


template<typename T>
class myQueueWithPrior {
private:
    const int step = 3;
    int queueSize;
    int nowSize;
    T* q;
    int* prior;
public:
    myQueueWithPrior() {
        this->queueSize = this->step;
        this->nowSize = 0;
        this->q = new T[queueSize];
        this->prior = new int[queueSize];
    }
    bool isFull() {
        return this->nowSize == this->queueSize;
    }
    bool isEmpty() {
        return this->nowSize == 0;
    }
    void addMemory() {
        this->queueSize += this->step;
    }
    void destroyMemory() {
        this->queueSize -= this->step;
    }
    T top() {
        return const this->q[0];
    }
    int knowNowSize() {
        return this->nowSize;
    }
    void push(T elem, int pr) {
        if (isFull()) addMemory();
        T* buf = new T[this->queueSize];
        int* alt = new int[this->queueSize];
        for (int b = 0; b < this->nowSize; b++) {
            buf[b] = this->q[b];
        }
        for (int b = 0; b < this->nowSize; b++) {
            alt[b] = this->prior[b];
        }
        buf[this->nowSize] = elem;
        alt[this->nowSize] = pr;
        delete[] this->q;
        this->q = buf;
        this->nowSize++;
    }
    void pop() {
        if (this->queueSize - this->nowSize > 6) destroyMemory();
        T* buf = new T[this->queueSize];
        for (int b = 1; b < this->nowSize; b++) {
            buf[b - 1] = this->q[b];
        }
        delete[] this->q;
        this->q = buf;
        this->nowSize--;
    }
    void clearQueue() {
        delete[] this->q;
        this->nowSize = 0;
        this->queueSize = this->step;
        q = new T[queueSize];
    }
};



template<typename T>
class myQueue {
private:
    const int step = 3;
    int queueSize;
    int nowSize;
    T* q;
public:
    myQueue() {
        this->queueSize = this->step;
        this->nowSize = 0;
        this->q = new T[queueSize];
    }
    bool isFull() {
        return this->nowSize == this->queueSize;
    }
    bool isEmpty() {
        return this->nowSize == 0;
    }
    void addMemory() {
        this->queueSize += this->step;
    }
    void destroyMemory() {
        this->queueSize -= this->step;
    }
    T top() {
        return const this->q[0];
    }
    int knowNowSize() {
        return this->nowSize;
    }
    void push(T elem) {
        if (isFull()) addMemory();
        T* buf = new T[this->queueSize];
        for (int b = 0; b < this->nowSize; b++) {
            buf[b] = this->q[b];
        }
        buf[this->nowSize] = elem;
        delete[] this->q;
        this->q = buf;
        this->nowSize++;
    }
    void pop() {
        if (this->queueSize - this->nowSize > 6) destroyMemory();
        T* buf = new T[this->queueSize];
        for (int b = 1; b < this->nowSize; b++) {
            buf[b - 1] = this->q[b];
        }
        delete[] this->q;
        this->q = buf;
        this->nowSize--;
    }
    void clearQueue() {
        delete[] this->q;
        this->nowSize = 0;
        this->queueSize = this->step;
        q = new T[queueSize];
    }
};



template<typename T>
class myQueueRing {
private:
    const int step = 3;
    int queueSize;
    int nowSize;
    T* q;
public:
    myQueueRing() {
        this->queueSize = this->step;
        this->nowSize = 0;
        this->q = new T[queueSize];
    }
    bool isFull() {
        return this->nowSize == this->queueSize;
    }
    bool isEmpty() {
        return this->nowSize == 0;
    }
    void addMemory() {
        this->queueSize += this->step;
    }
    void destroyMemory() {
        this->queueSize -= this->step;
    }
    T top() {
        return const this->q[0];
    }
    int knowNowSize() {
        return this->nowSize;
    }
    void push(T elem) {
        if (isFull()) addMemory();
        T* buf = new T[this->queueSize];
        for (int b = 0; b < this->nowSize; b++) {
            buf[b] = this->q[b];
        }
        buf[this->nowSize] = elem;
        delete[] this->q;
        this->q = buf;
        this->nowSize++;
    }
    void pop() {
        if (this->queueSize - this->nowSize > 6) destroyMemory();
        T* buf = new T[this->queueSize];
        for (int b = 1; b < this->nowSize; b++) {
            buf[b - 1] = this->q[b];
        }
        buf[nowSize] = this->q[0];
        delete[] this->q;
        this->q = buf;
        this->nowSize--;
    }
    void clearQueue() {
        delete[] this->q;
        this->nowSize = 0;
        this->queueSize = this->step;
        q = new T[queueSize];
    }
};

int main() {
    
}

