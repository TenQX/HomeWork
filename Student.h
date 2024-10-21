#pragma once
#include <string>
#include <iostream>

#define random(min, max) min + rand() % (max - min + 1)

using namespace std;


class Student {
protected:
    string name;
    int age;
public:
    Student();
    Student(string name, int age);
    ~Student();
    void setName(string name);
    void setAge(int age);
    int getAge();
    string getName();
};



