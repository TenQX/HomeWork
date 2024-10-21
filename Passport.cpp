#include "Passport.h"

Passport::Passport(int id, string name, int age, string adress, int day, int mon, int year) {
	this->id = id;
	this->name = name;
	this->age = age;
	this->adress = adress;
	this->date->tm_year = year;
	this->date->tm_mon = mon;
	this->date->tm_mday = day;
}
Passport::~Passport()
{
	cout << "Человека больше нет";
}
void Passport::setId(int id)
{
	this->id = id;
}
int Passport::getId()
{
	return this->id;
}
void Passport::setName(string name)
{
	this->name = name;
}
string Passport::getName()
{
	return this->name;
}
void Passport::setAge(int age)
{
	this->age = age;
}
int Passport::getAge()
{
	return this->age;
}
void Passport::getAdress(string adress)
{
	this->adress = adress;
}
string Passport::setAdress()
{
	return this->adress;
}
void Passport::setDate(int day, int mon, int year) {
	this->date->tm_mday;
	this->date->tm_mon;
	this->date->tm_year;
}
tm* getDate() {
	return this->date;
}
void Passport::print()
{
	cout << this->name << endl << this->age << " years old\n" << this->adress << endl << "Выдан: " << date->tm_mday << "." << date->tm_mon << "." << date->tm_year << endl << id << endl;
}

