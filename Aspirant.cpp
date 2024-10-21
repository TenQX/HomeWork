#include "Aspirant.h"

Aspirant::Aspirant(string name, int age, int year, string courseWorkName) : Student(name, age) {
	this->year = year;
}
void Aspirant::setYear(int year) {
	this->year = year;
}
void Aspirant::setCourseWorkName(string courseWorkName) {
	this->courseWorkName = courseWorkName;
}
int Aspirant::getYear() {
	return this->year;
}
string Aspirant::getCourseWorkName() {
	return this->courseWorkName;
}

