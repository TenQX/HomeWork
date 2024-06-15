#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#define random rand() % 9

using namespace std;

int CURRENT_ID = 1;

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
	Prod() {}
	Prod(int id, string name, Category type, int price, int amount) : id(id), name(name), type(type), price(price), amount(amount) {}
};

struct Shop {
	Prod* arr = nullptr;
	int size = 0;
	Shop() {}
};

string categoryToString(Prod a) {
	if (a.type == Miscellaneous) return "Miscellaneous";
	else if (a.type == Bracelet) return "Bracelet";
	else if (a.type == Necklace) return "Necklace";
	else if (a.type == Ring) return "Ring";
	else if (a.type == Earrings) return "Earrings";
	else return "Chain";
}

Category stringToCategory(string a) {
	if (a == "Miscellaneous") return Miscellaneous;
	else if (a == "Bracelet") return Bracelet;
	else if (a == "Necklace") return Necklace;
	else if (a == "Ring") return Ring;
	else if (a == "Earrings") return Earrings;
	else return Chain;
}

void print(Prod p) {
	cout << "id: " << p.id << endl << "name: " << p.name << endl << "Catrgory: " << categoryToString(p) << endl << "price: " << p.price << endl << "amount now: " << p.amount << endl;
}

void addProduct(Shop& arr, Prod& p) {
	for (int b = 0; b < arr.size; b++) {
		if (arr.arr[b].name == p.name) cout << "This product already exist" << endl;
	}
	Prod* buf = new Prod[arr.size + 1];
	for (int b = 0; b < arr.size; b++) {
		buf[b] = arr.arr[b];
	}
	buf[arr.size] = p;
	arr.size += 1;
	delete[] arr.arr;
	arr.arr = buf;
}

void deleteProduct(Shop& arr, int ind) {
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
}

int knowIndex(Shop arr, string name) {
	for (int b = 0; b < arr.size; b++) {
		if (arr.arr[b].name == name) {
			return b;
		}
	}
	cout << "Product " << name << " not found" << endl;
}

void printShop(Shop a) {
	for (int b = 0; b < a.size; b++) {
		print(a.arr[b]);
	}
}

void showAllInCategory(Shop arr, Category cat) {
	int a = 0;
	for (int b = 0; b < arr.size; b++) {
		if (arr.arr[b].type == cat) print(arr.arr[b]);
		a++;
	}
	if (a == 0) cout << "Category is empty" << endl;
}

void showAmountByName(Shop& arr, string name) {
	cout << "There are " << arr.arr[knowIndex(arr, name)].amount << name << endl;
}

void exitFn(Shop arr, string path) {
	ofstream fout(path);
	if (!fout.is_open()) {
		cout << "The was an error while loading save file" << endl;
	}
	else {
		for (int b = 0; b < arr.size; b++) {
			fout << b + 1 << ": " << arr.arr[b].id << ":" << arr.arr[b].name << ":" << categoryToString(arr.arr[b]) << ":" << arr.arr[b].price << ":" << arr.arr[b].amount << ":" << endl;
		}
	}
	fout.close();
}

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

void readFile(Shop& arr, string path) {
	arr.size = getFileSize(path);
	arr.arr = new Prod[arr.size];
	if (arr.size > 0) {
		ifstream in(path);
		if (in.is_open()) {
			int index = 0;
			int b = 0;
			string buf;
			int id;
			string name;
			Category cat;
			int price;
			int amount;
			while (!in.eof()) {
				buf = "";
				if (b == 0) {
					getline(in, buf, ':');
					b++;
				}
				else if (b == 1) {
					getline(in, buf, ':');
					id = stoi(buf);
					b++;
				}
				else if (b == 2) {
					getline(in, buf, ':');
					name = buf;
					b++;
				}
				else if (b == 3) {
					getline(in, buf, ':');
					cat = stringToCategory(buf);
					b++;
				}
				else if (b == 4) {
					getline(in, buf, ':');
					price = stoi(buf);
					b++;
				}
				else if (b == 5) {
					getline(in, buf, ':');
					amount = stoi(buf);
					b++;
				}
				else {
					getline(in, buf, ':');
					b = 1;
					Prod u = { id, name, cat, price, amount };
					addProduct(arr, u);
				}
			}
			CURRENT_ID += id;
		}
	}
}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string path = "Shop.txt";
	int act;
	int num = 0;
	Shop shop;

	readFile(shop, path);

	if(getFileSize(path) > 0) deleteProduct(shop, 0);

	while (num == 0) {
		cout << "Menu:\nPrint 0 to exit\nPrint 1 to view the shop information\nPrint 2 to add a product\nPrint 3 to delete a product\nPrint 4 to view the product amount\nPrint 5 to view the catalog of some category products\nPrint 6 to edit product's information" << endl;
		cin >> act;
		cin.ignore();
		switch (act) {
		case 0:
			cout << "Saving, do not turn of your computer" << endl;
			exitFn(shop, path);
			Sleep(3000);
			system("cls");
			num++;
			break;
		case 1:
		{
			system("cls");
			cout << "the whole shop:" << endl;
			printShop(shop);
			string buf;
			cout << "Press enter to go back to menu" << endl;
			getline(cin, buf);
			cin.ignore();
			system("cls");
			break;
		}
		case 2:
		{
			system("cls");
			Prod newOne;
			string name;
			string cat;
			int price;
			int amount;
			cout << "Add information about the new product" << endl;
			cout << "What is product's name: ";
			getline(cin, name);
			cout << "What is product's category: ";
			getline(cin, cat);
			cout << "What is product's price: ";
			cin >> price;
			cout << "What is product's amount: ";
			cin >> amount;
			newOne = { CURRENT_ID++, name, stringToCategory(cat), price, amount };
			addProduct(shop, newOne);
			cout << "Product added" << endl;
			string buf;
			cout << "Press enter to go back to menu" << endl;
			getline(cin, buf);
			cin.ignore();
			system("cls");
			break;
		}
		case 3:
		{
			string name;
			cout << "To delete a product pring it's name: ";
			getline(cin, name);
			deleteProduct(shop, knowIndex(shop, name));
			cout << "Product deleted" << endl;
			string buf;
			cout << "Press enter to go back to menu" << endl;
			getline(cin, buf);
			cin.ignore();
			system("cls");
			break;
		}
		case 4:
		{
			string name;
			cout << "to know the product's amount print it's name: ";
			getline(cin, name);
			showAmountByName(shop, name);
			string buf;
			cout << "Press enter to go back to menu" << endl;
			getline(cin, buf);
			cin.ignore();
			system("cls");
			break;
		}
		case 5:
		{
			string cat;
			cout << "Print which of this categories are you interested in?\nBracelet\nNecklace\nRing\nEarring\nChain\nMiscellaneous" << endl;
			cin >> cat;
			cin.ignore();
			showAllInCategory(shop, stringToCategory(cat));
			string buf;
			cout << "Press enter to go back to menu" << endl;
			getline(cin, buf);
			cin.ignore();
			system("cls");
			break;
		}
		case 6:
		{
			string name;
			cout << "Print name of editing product: ";
			getline(cin, name);
			int i = knowIndex(shop, name);
			int ch;
			cout << "Print 0 to cancel the editing\nPring 1 to edit the price\nPrint 2 to edit the amount" << endl;
			cin >> ch;
			cin.ignore();
			switch (ch) {
			case 0:
				break;
			case 1:
			{
				int price;
				cout << "Pring the new price: ";
				cin >> price;
				shop.arr[i].price = price;
				cout << "Price updated";
				break;
			}
			case 2:
			{
				int amount;
				cout << "Pring the new amount: ";
				cin >> amount;
				shop.arr[i].amount = amount;
				cout << "Amount updated";
				break;
			}
			}
			string buf;
			cout << "Press enter to go back to menu" << endl;
			getline(cin, buf);
			cin.ignore();
			system("cls");
			break;
		}
		}
	}
}