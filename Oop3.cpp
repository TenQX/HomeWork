#include <string>
#include <iostream>
#include <vector>
#include <windows.h>

#define random(min, max) min + rand() % (max - min + 1)

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

//всё, что просили выполнить для класса string выполнено в шаблонном DynamicArray, так как из него легко можно сделать string, и все задания на нём реализуемы

template <typename T>
class DynamicArray {
private:
    int size = 0;
    T* arr = nullptr;

public:
    DynamicArray() {
        this->arr = new T[size];
    }

    DynamicArray(DynamicArray&& moved) {;
        this->arr = new T[moved.size];
        for (int b = 0; b < moved.size; b++) {
            this->arr[b] = moved.arr[b];
        }
        this->size = moved.size;
        moved.arr = nullptr;
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
};



enum Category {
    Tshirt,
    Shirt,
    Coat,
    Jacket,
    Miscellaneous
};



class OverCoat {
private:
    Category type;
    string name;
    double price;
public:
    OverCoat(string name, Category type, double price) {
        this->name = name;
        this->price = price;
        this->type = type;
    }
    OverCoat() {}
    void operator=(const OverCoat& other) {
        this->name = other.name;
        this->price = other.price;
        this->type = other.type;
    }
    bool operator==(const OverCoat& other) {
        return this->type == other.type;
    }
    bool operator>(const OverCoat& other) {
        return this->price > other.price;
    }
    bool operator<(const OverCoat& other) {
        return this->price < other.price;
    }
};



class Flat {
private:
    string adress;
    double area;
    double price;
public:
    Flat(string adress, double area, double price) {
        this->adress = adress;
        this->price = price;
        this->area = area;
    }
    Flat() {}
    void operator=(const Flat& other) {
        this->adress = other.adress;
        this->price = other.price;
        this->area = other.area;
    }
    bool operator==(const Flat& other) {
        return this->area == other.area;
    }
    bool operator>(const Flat& other) {
        return this->price > other.price;
    }
    bool operator<(const Flat& other) {
        return this->price < other.price;
    }
};



enum Week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Satursday,
    Sunday
};



enum Month {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};



class Date {
public:
    int year;
    Month month;
    int day;
    Week weekDay;
    Date(int day, Month month, int year, Week weekDay) {
        this->day = day;
        this->month = month;
        this->year = year;
        this->weekDay = weekDay;
    }
    string monToStr() {
        if (this->month == January) return "January";
        else if (this->month == February) return "February";
        else if (this->month == March) return "March";
        else if (this->month == April) return "April";
        else if (this->month == May) return "May";
        else if (this->month == June) return "June";
        else if (this->month == July) return "July";
        else if (this->month == August) return "August";
        else if (this->month == September) return "September";
        else if (this->month == October) return "October";
        else if (this->month == November) return "November";
        else return "December";
    }
    void operator=(const Date& other) {
        this->day = other.day;
        this->month = other.month;
        this->year = other.year;
        this->weekDay = other.weekDay;
    }
    bool operator==(Date& other) {
        return this->day == other.day && this->month == other.month && this->year == other.year;
    }
    bool operator>(const Date& other) {
        if (this->year > other.year) return 1;
        else if (this->year < other.year) return 0;
        if (this->month > other.month) return 1;
        else if (this->month < other.month) return 0;
        if (this->day > other.day) return 1;
        return 0;
    }
    bool operator<(const Date& other) {
        if (this->year < other.year) return 1;
        else if (this->year > other.year) return 0;
        if (this->month < other.month) return 1;
        else if (this->month > other.month) return 0;
        if (this->day < other.day) return 1;
        return 0;
    }
    void operator++() {
        if (this->month == February) {
            if (this->year % 4 == 0) {
                if (this->day <= 28) this->day++;
                else {
                    this->day = 1;
                    this->month = March;
                }
            }
            else {
                if (this->day <= 27) this->day++;
                else {
                    this->day = 1;
                    this->month = March;
                }
            }
        }
        else if (this->month == 0 || this->month == 2 || this->month == 4 || this->month == 6 || this->month == 7 || this->month == 9 || this->month == 11) {
            if (this->day <= 30) this->day++;
            else {
                this->day = 1;
                this->month = Month(int(month) + 1);
            }
        }
        else {
            if (this->day <= 29) this->day++;
            else {
                this->day = 1;
                this->month = Month(int(month) + 1);
            }
        }
    }
};



ostream& operator << (ostream& out, const Date &date) { 
    out << date.day << "." << date.month << "." << date.year << ";   " << date.weekDay << endl;
    return out;
}
istream& operator >> (istream& in, Date& date) {
    int day, year, week, month;
    in >> day >> month >> year >> week;
    date.day = day;
    date.month = Month(month);
    date.year = year;
    date.weekDay = Week(week);
    return in;
}


int main() {
    srand(time(NULL));






}
