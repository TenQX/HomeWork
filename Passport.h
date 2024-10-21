#pragma once
#include <string>
#include <iostream>
#include <time.h>
using namespace std;

class Passport
{
private:
	int id;
protected:
	string name;
	int age;
	string adress;
	struct tm* date;
public:
	Passport(int id, string name, int age, string adress, int day, int mon, int year);
	~Passport();
	void setId(int id);
	int getId();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void getAdress(string adress);
	string setAdress();
	void setDate(int day, int mon, int year);
	tm* getDate();
	void print();
	
};

