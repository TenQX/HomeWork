#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

class human {
private:
	char* name;
	char* surname;
	int age;
public:
	human();
	human (int age, char* name, char* surname) {
		this->age = age;
		this->name = name;
		this->surname = surname;
	}
	human (human& other) {
		this->age = other.age;
		this->name = other.name;
		this->surname = other.surname;
	}
	void printHuman() {
		cout << this->age << " " << this->name << " " << this->surname << endl;
	}
};
class flat {
private:
	int size = 0;
	human* humen;
public:
	flat() {
		humen = new human[size];
	}
	flat(flat &other) {
		this->size = other.size;
		for (int b = 0; b < this->size; b++) {
			this->humen[b] = other.humen[b];
		}
	}
	~flat() {
		delete[] humen;
	}
	void addHuman(human elem) {
		human* buf = new human[size + 1];
		for (int b = 0; b < size; b++) {
			buf[b] = this->humen[b];
		}
		buf[size] = elem;
		delete[] this->humen;
		this->humen = buf;
		this->size++;
	}
	void printFlat() {
		for (int b = 0; b < this->size; b++) {
			humen[b].printHuman();
		}
		cout << endl;
	}
};
class house {
private:
	int size = 0;
	flat* flats;
public:
	house() {
		flats = new flat[size];
	}
	house(house& other) {
		this->size = other.size;
		for (int b = 0; b < this->size; b++) {
			this->flats[b] = other.flats[b];
		}
	}
	~house() {
		delete[] flats;
	}
	void addFlat (flat elem) {
		flat* buf = new flat[size + 1];
		for (int b = 0; b < size; b++) {
			buf[b] = this->flats[b];
		}
		buf[size] = elem;
		delete[] this->flats;
		this->flats = buf;
		this->size++;
	}
	void printHouse() {
		for (int b = 0; b < this->size; b++) {
			flats[b].printFlat();
		}
		cout << endl;
	}
};



int main()
{

}

