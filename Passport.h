#pragma once
#include <string>
#include <iostream>
using namespace std;

class Passport
{
protected:
	int id;
	string name;
	int age;
	string adress;
public:
	Passport(int id, string name, int age, string adress);
	~Passport();
	void setId(int id);
	int getId();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void getAdress(string adress);
	string setAdress();
	void print();
};

