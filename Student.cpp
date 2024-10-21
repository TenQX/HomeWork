#include "Student.h"


Student::Student() {}
Student::Student(string name, int age) {
    this->name = name;
    this->age = age;
}
Student::~Student() {
    cout << "Студент исключён" << endl;
}
void Student::setName(string name) {
    this->name = name;
}
void Student::setAge(int age) {
    this->age = age;
}