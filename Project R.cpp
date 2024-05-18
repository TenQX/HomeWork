// Project R.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define q rand() % 9
#define p 1 + rand() % 8

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	int maxLen;
	cin >> maxLen;
	string path = "File.txt";
	string pathCopy = "File(copy).txt";
	ofstream fout;
	fout.open(pathCopy, ofstream::app);
	if (!fout.is_open()) {
		cout << "Не удалось открыть или создать файл" << pathCopy;
	}
	else {
		ifstream fin;
		fin.open(path);
		if (!fin.is_open()) {
			cout << "Не удалось открыть файл" << path;
		}
		else {
			string str;
			while (!fin.eof()) {
				str = "";
				getline(fin, str);
				if (str.length() <= maxLen) {
					fout << str << endl;
				}
			}
		}
	}
}