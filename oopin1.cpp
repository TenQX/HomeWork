#include <string>
#include <vector>
#include <windows.h>
#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return GCD(a % b, b);
    return GCD(a, b % a);
}

int GCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

class Rational {
public:
    Rational(int numerator, int denominator) : numerator{numerator}, denominator{denominator}
        {
            cout << "constructor" << endl;
        }

    void print() {
        cout << numerator << "/" << denominator;
    }

    Rational operator*(const Rational& other) {
        Rational result{ *this };
        result.numerator *= other.numerator;
        result.denominator *= other.denominator;
        return result;
    }

    Rational operator+(const Rational& other) {
        Rational result{ *this };
        result.numerator = numerator * (GCM(denominator, other.denominator) / denominator) + other.numerator * (GCM(denominator, other.denominator) / other.denominator);
        result.denominator = GCM(denominator, other.denominator);
        return result;
    }

    Rational operator-(const Rational& other) {
        Rational result{ *this };
        result.numerator = numerator * (GCM(denominator, other.denominator) / denominator) - other.numerator * (GCM(denominator, other.denominator) / other.denominator);
        result.denominator = GCM(denominator, other.denominator);
        return result;
    }

    Rational operator/(const Rational& other) {
        Rational result{ *this };
        result.numerator *= other.denominator;
        result.denominator *= other.numerator;
        return result;
    }



private:
    int numerator{};
    int denominator{};
};

istream Rational() {
    in >> 
}

int main()
{
    
}