#pragma once
#include <string>
#include <iostream>

#include "Student.h"

class Aspirant : public Student {
protected:
	int year;
	string courseWorkName;
public:
	Aspirant(string name, int age, int year, string courseWorkName);
	void setCourseWorkName(string courseWorkName);
	void setYear(int year);
	int getYear();
	string getCourseWorkName();
};

