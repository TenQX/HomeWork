#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#define random rand() % 9

using namespace std;

struct Student {
	string name;
	int age;
	float average;
	string id;
	Student() {}
	Student(string a, int b, float c, string d) : name(a), age(b), average(c), id(d) {};
};

void print(Student p) {
	cout << "name: " << p.name << endl << "age: " << p.age << endl << "average: " << p.average << endl << "id: " << p.id << endl;
}

void listAll(Student* sList, int size) {
	cout << "All students:" << endl;
	for (int b = 0; b < size; b++) {
		print(sList[b]);
		cout << endl;
	}
	cout << endl;
}

void bestStudent(Student* sList, int size) {
	Student maxAverage = sList[0];
	for (int b = 1; b < size; b++) {
		if (maxAverage.average < sList[b].average) maxAverage = sList[b];
	}
	cout << "the best student:" << endl;
	print(maxAverage);
}

int usingId(Student* sList, int size, string id) {
	for (int b = 0; b < size; b++) {
		if (sList[b].id == id) {
			return b;
		}
	}
}

void viewUsingId(Student* sList, int size, string id) {
	for (int b = 0; b < size; b++) {
		if (sList[b].id == id) {
			print(sList[b]);
		}
	}
	cout << endl;
}

void addNewStudent(Student*& arr, int& size, Student val) {
	Student* buf = new Student[size + 1];
	for (int i = 0; i < size; i++)
	{
		buf[i] = arr[i];
	}
	buf[size++] = val;
	delete[] arr;
	arr = buf;
}

void delUsingId(Student*& sList, int& size, string id) {
	int i;
	Student* buf = new Student[size - 1];
	for (int b = 0; b < size; b++) {
		if (sList[b].id == id) {
			i = b;
		}
	}
	for (int b = 0; b < i; b++) {
		buf[b] = sList[b];
	}
	for (int b = i; b < size - 1; b++) {
		buf[b] = sList[b + 1];
	}
	delete[] sList;
	sList = buf;
	size--;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int size = 3;
	Student* sList = new Student[size];
	sList[0] = { "Johny", 11, 4.2, "aaa" };
	sList[1] = { "Joline", 13, 4.8, "aab" };
	sList[2] = { "Josuke", 15, 3.56, "aac" };
	int num = 0;
	while (num == 0) {
		int act;
		cout << "Type 0 to exit\nType 1 to see the students list\nType 2 to find a student using ID\nType 3 to find the best student\nType 4 to add a new student\nType 5 to delete a student using ID\nType 6 to change student's information\nType 7 to clear the screen" << endl;
		cin >> act;
		cin.ignore();
		switch (act)
		{
		case 0:
			cout << "exit";
			Sleep(1000);
			system("cls");
			num++;
			break;
		case 1:
			listAll(sList, size);
			break;
		case 2:
		{
			string id;
			cout << "what is ID:" << endl;
			cin >> id;
			viewUsingId(sList, size, id);
			break;
		}
		case 3:
			bestStudent(sList, size);
			break;
		case 4:
		{
			string name, id;
			int age;
			float average;
			cout << "What is new student's name?" << endl;
			cin >> name;
			cout << "What is new student's age?" << endl;
			cin >> age;
			cout << "What is new student's average mark now?" << endl;
			cin >> average;
			cout << "What is new student's ID?" << endl;
			cin >> id;
			Student val = { name, age, average, id };
			addNewStudent(sList, size, val);
			cout << "student added" << endl;
			Sleep(1000);
			system("cls");
			break;
		}
		case 5:
		{
			string id;
			cout << "What is ID:" << endl;
			cin >> id;
			delUsingId(sList, size, id);
			cout << "deleted";
			Sleep(1000);
			system("cls");
			break;
		}
		case 6:
		{
			string id;
			cout << "Type the searching student's ID:" << endl;
			cin >> id;
			viewUsingId(sList, size, id);
			int ch;
			cout << "Type 0 to change the name\nType 1 to change the age\nType 2 to update the average mark" << endl;
			cin >> ch;
			cin.ignore();
			switch (ch)
			{
			case 0:
			{
				string name;
				cout << "What is new name:" << endl;
				cin >> name;
				sList[usingId(sList, size, id)].name = name;
				break;
			}
			case 1:
			{
				int age;
				cout << "What is new age:" << endl;
				cin >> age;
				sList[usingId(sList, size, id)].age = age;
				break;
			}
			case 2:
			{
				float average;
				cout << "What is new average mark:" << endl;
				cin >> average;
				sList[usingId(sList, size, id)].average = average;
				break;
			}
			}
			cout << "Updated";
			Sleep(1000);
			system("cls");
			break;
		}
		case 7:
			system("cls");
		}
	}


}