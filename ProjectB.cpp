#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#define random rand() % 9

using namespace std;

enum Category {
	Miscellaneous,
	Bracelet,
	Necklace,
	Ring,
	Earrings,
	Chain
};

struct Prod {
	int id;
	string name;
	Category type;
	int price;
	int amount;
	Prod () {}
	Prod(int id, string name, Category type, int price, int amount) : id(id), name(name), type(type), price(price), amount(amount) {};
};

struct Shop {
	Prod* arr = nullptr;
	int size = 0;
};

string categoryToString(Prod a) {
	if (a.type == Miscellaneous) return "Miscellaneous";
	else if (a.type == Bracelet) return "Bracelet";
	else if (a.type == Necklace) return "Necklace";
	else if (a.type == Ring) return "Ring";
	else if (a.type == Earrings) return "Earrings";
	else return "Chain";
}

void print(Prod p) {
	cout << "id: " << p.id << endl << "name: " << p.name << endl << "Catrgory: " << categoryToString(p) << endl << "price: " << p.price << "amount now: " << p.amount << endl;
}

void addProduct(Shop arr, Prod& p) {
	Prod* buf = new Prod[arr.size + 1];
	for (int b = 0; b < arr.size; b++) {
		buf[b] = arr.arr[b];
	}
	buf[arr.size++] = p;
	delete[] arr.arr;
	arr.arr = buf;
}

void deleteProduct(Shop arr, int ind) {
	Prod* buf = new Prod[arr.size - 1];
	for (int b = 0; b < ind; b++) {
		buf[b] = arr.arr[b];
	}
	for (int b = ind + 1; b < arr.size; b++) {
		buf[b - 1] = arr.arr[b];
	}
	arr.size--;
	delete[] arr.arr;
	arr.arr = buf;
	cout << "Product deleted" << endl;
}

int knowIndex(Shop arr, string name) {
	for (int b = 0; b < arr.size; b++) {
		if (arr.arr[b].name == name) {
			return b;
		}
	}
	cout << "Product not found" << endl;
}

void printShop(Shop a) {
	for (int b = 0; b < a.size; b++) {
		print(a.arr[b]);
	}
}



void showAmountByName(Shop& arr, string name) {
	cout << arr.arr[knowIndex(arr, name)].amount;
}





int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
}