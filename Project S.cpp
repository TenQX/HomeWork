#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#define random(max, min) min + rand() % (1 + max - min)

using namespace std;

int getFileSize(string path) {
	ifstream in(path);
	int count = 0;
	if (in.is_open()) {
		string str;
		while (getline(in, str)) {
			count++;
		}
	}
	in.close();
	return count;
}

void readFile(string*& arr, int& size, string path) {
	size = getFileSize(path);
	arr = new string[size];
	if (size > 0) {
		ifstream in(path);
		if (in.is_open()) {
			int index = 0;
			int b = 0;
			string str;
			while (getline(in, str, '.')) {
				if (b % 2 == 1) {
					arr[index++] = str;
				}
				b++;
			}
		}
	}
}

void showTasks(string* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". " << arr[i] << endl;
	}
}

void addTask(string*& arr, int& size, string str) {
	string* buf = new string[size + 1];
	for (int i = 0; i < size; i++)
	{
		buf[i] = arr[i];
	}
	buf[size++] = str;
	delete[] arr;
	arr = buf;
}

void exitFn(string* arr, int size, string path) {
	ofstream fout(path);
	if (!fout.is_open()) {
		cout << "Ошибка открытия файла";
	}
	else {
		for (int b = 0; b < size; b++) {
			fout << b + 1 << ". " << arr[b] << "." << endl;
		}
	}
	fout.close();
	cout << "exit" << endl;
}

void deleteTask(string*& arr, int& size, int ind) {
	string* buf = new string[size - 1];
	for (int b = 0; b < ind - 1; b++) {
		buf[b] = arr[b];
	}
	for (int b = ind - 1; b < size - 1; b++) {
		buf[b] = arr[b + 1];
	}
	delete[] arr;
	size--;
	arr = buf;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int size = 0;
	int act;
	int a = 0;
	string path = "List.txt";
	string* arr;

	readFile(arr, size, path);

	while (a == 0) {
		cout << "Type 0 to leave\nType 1 to add a task\nType 2 to delete a task\nType 3 to clear the list\nType 4 to see the list\n";
		cin >> act;
		cin.ignore();
		switch (act)
		{
		case 1:
		{
			string str;
			cout << "Type the new task: ";
			getline(cin, str);
			addTask(arr, size, str);
			cout << "Done";
			Sleep(1000);
			system("cls");
			break;
		}
		case 0:
			exitFn(arr, size, path);
			a++;
			system("cls");
			break;
		case 4:
			showTasks(arr, size);
			break;
		case 2:
			int i;
			cout << "Which task would you delete?" << endl;
			cin >> i;
			deleteTask(arr, size, i);
			cout << "Done" << endl;
			Sleep(1000);
			system("cls");
			break;
		case 3:
			delete[] arr;
			size = 0;
			arr = new string[size];
			cout << "Done";
			Sleep(1000);
			system("cls");
			break;
		default:
			break;
		}
	}
}