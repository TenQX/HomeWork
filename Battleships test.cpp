﻿#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <conio.h>
#define random(min, max) min + rand() % (max - min + 1)

using namespace std;

void field(string(&a2)[10][10], string(&b2)[10][10]) {
    cout << endl << endl << endl;
    for (int w = 0; w < 1; w++) {
        cout << "                             ";
        for (int b = 224; b < size(a2) + 224; b++) {
            if (b == 233) b++;
            cout << char(b) << " ";
        }
        cout << "                   ";
        for (int b = 224; b < size(a2) + 224; b++) {
            if (b == 233) b++;
            cout << char(b) << " ";
        }
        cout << endl;
        for (int b = 0; b < size(a2); b++) {
            cout << "                           ";
            cout << b;
            for (int c = 0; c < size(a2); c++) {
                cout << "|" << a2[b][c];
            }
            cout << "|" << "                 ";
            cout << b;
            for (int c = 0; c < size(b2); c++) {
                cout << "|" << b2[b][c];

            }
            cout << "|" << endl;
        }
    }
}


void help(char& l, short& s, string(&a2)[10][10], string(&b2)[10][10]) {
    cout << endl;
    cout << "Select the location of your ships" << endl << "The ships are displayed in ascending order, starting with a single-deck and ending with a three-deck" << endl;
    cout << "Enter the coordinates and put the signs" << endl;
    cout << "The \"^\" sign for the ship to stand with its nose up\n";
    cout << "The \"<\" sign for the ship to stand with its nose to the right\n";
    cout << "The \">\" sign so that the ship is facing left\n";
    cout << "The \"!\" sign for the ship to be nose down\n";
    cout << "enter a column: "; 
    cin >> l;
    cout << "enter a line: "; 
    cin >> s;
    int tu = 10;
    while (tu != 0) {
        tu = 0;
        if (s > 9 || l > 9) {
            tu = 1;
            cout << "\t\t\t\t\t\tНеверные координаты";
            Sleep(2000);
            system("cls");
            field(a2, b2);
            help(l, s, a2, b2);
        }
        else if (s < 0 || l < 0) {
            tu = 1;
            cout << "\t\t\t\t\t\tНеверные координаты";
            Sleep(2000);
            system("cls");
            field(a2, b2);
            help(l, s, a2, b2);
        }

    }
}

int game(string a[10][10], string b[10][10]) {
    char t, l;
    short s;
    string a2[10][10];
    string b2[10][10];

    for (char i = 0; i < size(a2); i++) {
        for (char j = 0; j < size(a2); j++) {
            a2[i][j] = "?";
            b2[i][j] = "?";
            a[i][j] = "0";
            b[i][j] = "0";
        }

    }

    field(a2, b2);
    help(l, s, a2, b2);
    a[s][int(l) - 224] = "1";
    a2[s][int(l) - 224] = '^';

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    cout << "Enter the direction:"; 
    cin >> t;
    switch (t) {
    case '^':
        if (s - 1 >= 0) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s - 1][int(l) - 224] = "1";
            a2[s - 1][int(l) - 224] = "^";
        }
        break;
    case '>':
        if (int(l) - 224 + 1 <= 9) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s][int(l) - 224 + 1] = "1";
            a2[s][int(l) - 224 + 1] = ">";
        }
        break;
    case '<':
        if (int(l) - 224 - 1 >= 0) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s][int(l) - 224 - 1] = "1";
            a2[s][int(l) - 224 - 1] = "<";
        }
        break;
    case '!':
        if (s + 1 <= 9) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s + 1][int(l) - 224] = "1";
            a2[s + 1][int(l) - 224] = "o";
        }
    }

    system("cls");
    field(a2, b2);
    help(l, s, a2, b2);
    cout << "Enter the direction:"; cin >> t;

    switch (t) {
    case '^':
        if (s - 2 >= 0) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s - 1][int(l) - 224] = "1";
            a2[s - 1][int(l) - 224] = "O";
            a[s - 2][int(l) - 224] = "1";
            a2[s - 2][int(l) - 224] = "^";
        }
        break;
    case '>':
        if (int(l) - 224 + 2 <= 9) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s][int(l) - 224 + 1] = "1";
            a2[s][int(l) - 224 + 1] = "O";
            a[s][int(l) - 224 + 2] = "1";
            a2[s][int(l) - 224 + 2] = ">";
        }
        break;
    case '<':
        if (int(l) - 224 - 2 >= 0) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s][int(l) - 224 - 1] = "1";
            a2[s][int(l) - 224 - 1] = "O";
            a[s][int(l) - 224 - 2] = "1";
            a2[s][int(l) - 224 - 2] = "<";
        }
        break;
    case '!':
        if (s + 2 <= 9) {
            a[s][int(l) - 224] = "1";
            a2[s][int(l) - 224] = "O";
            a[s + 1][int(l) - 224] = "1";
            a2[s + 1][int(l) - 224] = "O";
            a[s + 2][int(l) - 224] = "1";
            a2[s + 2][int(l) - 224] = "o";
        }

    }
    system("cls");
    field(a2, b2);
    int botCol, botLine;
    botCol = rand() % 10;
    botLine = rand() % 10;
    b[botCol][botLine] = "1";
    Sleep(200);
    int u = 0;
    l = 'а';
    while (u != 1) {
        botCol = rand() % 10;
        botLine = rand() % 10;

        if (botCol - 1 <= 9 && botLine - 1 <= 9) {
            if (b[botCol][botLine] != "1" && b[botCol - 1][botLine] != "1") {
                b[botCol][botLine] = "1";
                b[botCol - 1][botLine] = "1";
                u = 1;

            }
        }
    }
    Sleep(200);
    l = 'а';
    while (int(l) - 224 != 1) {
        botCol = rand() % 10;
        botLine = rand() % 10;

        if (botCol + 1 <= 9 && botCol + 2 <= 9) {
            if (b[botCol][botLine] != "1" && b[botCol + 1][botLine] != "1") {
                if (b[botCol + 2][botLine] != "1")
                    b[botCol][botLine] = "1";
                b[botCol + 1][botLine] = "1";
                b[botCol][botLine] = "1";
                b[botCol + 2][botLine] = "1";
                l++;

            }
        }
    }
    short bot_hit = 0, person_hit = 0;
    system("cls");
    while (bot_hit < 6 && person_hit < 6) {
        field(a2, b2);
        cout << endl;
        cout << "Your turn, enter coordinates\n";
        cout << "Enter the column:"; cin >> l;
        cout << "Enter the line: "; cin >> s;
        if (b[s][int(l) - 224] == "1") {
            person_hit++;
            b2[s][int(l) - 224] = "*";
            cout << endl;
            cout << "You hitted!";
        }
        else {
            b2[s][int(l) - 224] = "x";
            cout << "You missed!";
        }
        system("cls");
        field(a2, b2);
        cout << endl;
        cout << "Enemy's turn";
        Sleep(300);
        l = 'б';
        while (int(l) - 224 != 0) {
            botCol = rand() % 10;
            botLine = rand() % 10;
            if (a2[botCol][botLine] != "x" && a2[botCol][botLine] != "*") {
                if (a[botCol][botLine] == "1") {
                    bot_hit++;
                    a2[botCol][botLine] = "*";
                    l = 'а';
                }
                else {
                    a2[botCol][botLine] = "x";
                    l = 'а';
                }
            }
        }
        system("cls");
    }
    if (bot_hit > person_hit) {
        cout << "\t\t\t\t\t\tGame lost!";
    }
    else {
        cout << "\t\t\t\t\t\tVictory!";
    }
    return 0;
}
int main() {
    srand(time(NULL));
    string a[10][10];
    string b[10][10];
    game(a, b);
}