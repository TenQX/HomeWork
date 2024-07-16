#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <string>
#define random(min, max) min + rand() % (max - min + 1)

using namespace std;

enum cage {
    EMPTY,
    FILLED,
    MISSED,
    DESTROYED
};

void field(string(&a2)[10][10], string(&b2)[10][10]) {
    cout << endl << endl << endl;
    for (int w = 0; w < 1; w++) {
        cout << "                             ";
        for (int b = 0; b < size(a2); b++) {
            cout << b << " ";
        }
        cout << "                            ";
        for (int b = 0; b < size(a2); b++) {
            cout << b << " ";
        }
        cout << endl;
        for (int b = 0; b < size(a2); b++) {
            cout << "                           ";
            cout << b;
            for (int c = 0; c < size(a2); c++) {
                cout << "|" << a2[b][c];
            }
            cout << "|";
            cout << "                          ";
            cout << b;
            for (int c = 0; c < size(b2); c++) {
                cout << "|" << b2[b][c];

            }
            cout << "|" << endl;
        }
    }
}


void help(short& l, short& s, string(&a2)[10][10], string(&b2)[10][10]) {
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
            l = 0;
            s = 0;
            cout << "\t\t\t\t\t\tincorrect coordinates";
            Sleep(2000);
            system("cls");
            field(a2, b2);
            help(l, s, a2, b2);
        }
        else if (s < 0 || l < 0) {
            tu = 1;
            l = 0;
            s = 0;
            cout << "\t\t\t\t\t\tincorrect coordinates";
            Sleep(2000);
            system("cls");
            field(a2, b2);
            help(l, s, a2, b2);
        }
        else if (a2[s][l] == "o" || a2[s+1][l] == "o" || a2[s-1][l] == "o" || a2[s][l-1] == "o" || a2[s][l+1] == "o" || a2[s-1][l-1] == "o" || a2[s-1][l+1] == "o" || a2[s+1][l-1] == "o" || a2[s+1][l+1] == "o") {
            tu = 1;
            l = 0;
            s = 0;
            cout << "\t\t\t\t\t\tincorrect coordinates";
            Sleep(2000);
            system("cls");
            field(a2, b2);
            help(l, s, a2, b2);
        }
    }
}

int game(cage a[10][10], cage b[10][10]) {
    char t;
    short l, s;
    string a2[10][10];
    string b2[10][10];

    for (char i = 0; i < size(a2); i++) {
        for (char j = 0; j < size(a2); j++) {
            a2[i][j] = "?";
            b2[i][j] = "?";
            a[i][j] = EMPTY;
            b[i][j] = EMPTY;
        }
    }

    field(a2, b2);
    help(l, s, a2, b2);
    a[s][l] = FILLED;
    a2[s][l] = "o";

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    a[s][l] = FILLED;
    a2[s][l] = "o";

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    a[s][l] = FILLED;
    a2[s][l] = "o";

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    a[s][l] = FILLED;
    a2[s][l] = "o";

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    cout << "Enter the direction:";
    cin >> t;
    switch (t) {
    case '^':
        if (s - 1 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s - 1][l] = FILLED;
            a2[s - 1][l] = "o";
        }
        break;
    case '>':
        if (int(l) - 224 + 1 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l + 1] = FILLED;
            a2[s][l + 1] = "o";
        }
        break;
    case '<':
        if (l - 1 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l - 1] = FILLED;
            a2[s][l - 1] = "o";
        }
        break;
    case '!':
        if (s + 1 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s + 1][l] = FILLED;
            a2[s + 1][l] = "o";
        }
    }

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    cout << "Enter the direction:";
    cin >> t;
    switch (t) {
    case '^':
        if (s - 1 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s - 1][l] = FILLED;
            a2[s - 1][l] = "o";
        }
        break;
    case '>':
        if (int(l) - 224 + 1 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l + 1] = FILLED;
            a2[s][l + 1] = "o";
        }
        break;
    case '<':
        if (l - 1 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l - 1] = FILLED;
            a2[s][l - 1] = "o";
        }
        break;
    case '!':
        if (s + 1 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s + 1][l] = FILLED;
            a2[s + 1][l] = "o";
        }
    }

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    cout << "Enter the direction:";
    cin >> t;
    switch (t) {
    case '^':
        if (s - 1 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s - 1][l] = FILLED;
            a2[s - 1][l] = "o";
        }
        break;
    case '>':
        if (int(l) - 224 + 1 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l + 1] = FILLED;
            a2[s][l + 1] = "o";
        }
        break;
    case '<':
        if (l - 1 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l - 1] = FILLED;
            a2[s][l - 1] = "o";
        }
        break;
    case '!':
        if (s + 1 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s + 1][l] = FILLED;
            a2[s + 1][l] = "o";
        }
    }

    system("cls");

    field(a2, b2);
    help(l, s, a2, b2);
    cout << "Enter the direction:"; cin >> t;

    switch (t) {
    case '^':
        if (s - 2 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s - 1][l] = FILLED;
            a2[s - 1][l] = "o";
            a[s - 2][l] = FILLED;
            a2[s - 2][l] = "o";
        }
        break;
    case '>':
        if (l + 2 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l + 1] = FILLED;
            a2[s][l + 1] = "o";
            a[s][l + 2] = FILLED;
            a2[s][l + 2] = "o";
        }
        break;
    case '<':
        if (l - 2 >= 0) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s][l-1] = FILLED;
            a2[s][l-1] = "o";
            a[s][l-2] = FILLED;
            a2[s][l - 2] = "o";
        }
        break;
    case '!':
        if (s + 2 <= 9) {
            a[s][l] = FILLED;
            a2[s][l] = "o";
            a[s + 1][l] = FILLED;
            a2[s + 1][l] = "o";
            a[s + 2][l] = FILLED;
            a2[s + 2][l] = "o";
        }

        field(a2, b2);
        help(l, s, a2, b2);
        cout << "Enter the direction:"; cin >> t;

        switch (t) {
        case '^':
            if (s - 2 >= 0) {
                a[s][l] = FILLED;
                a2[s][l] = "o";
                a[s - 1][l] = FILLED;
                a2[s - 1][l] = "o";
                a[s - 2][l] = FILLED;
                a2[s - 2][l] = "o";
            }
            break;
        case '>':
            if (l + 2 <= 9) {
                a[s][l] = FILLED;
                a2[s][l] = "o";
                a[s][l + 1] = FILLED;
                a2[s][l + 1] = "o";
                a[s][l + 2] = FILLED;
                a2[s][l + 2] = "o";
            }
            break;
        case '<':
            if (l - 2 >= 0) {
                a[s][l] = FILLED;
                a2[s][l] = "o";
                a[s][l - 1] = FILLED;
                a2[s][l - 1] = "o";
                a[s][l - 2] = FILLED;
                a2[s][l - 2] = "o";
            }
            break;
        case '!':
            if (s + 2 <= 9) {
                a[s][l] = FILLED;
                a2[s][l] = "o";
                a[s + 1][l] = FILLED;
                a2[s + 1][l] = "o";
                a[s + 2][l] = FILLED;
                a2[s + 2][l] = "o";
            }

    }
    system("cls");
    field(a2, b2);
    int botCol, botLine;
    botCol = rand() % 10;
    botLine = rand() % 10;
    b[botCol][botLine] = FILLED;
    Sleep(200);

    botCol = rand() % 10;
    botLine = rand() % 10;
    b[botCol][botLine] = FILLED;
    Sleep(200);
    
    botCol = rand() % 10;
    botLine = rand() % 10;
    b[botCol][botLine] = FILLED;
    Sleep(200);
    
    botCol = rand() % 10;
    botLine = rand() % 10;
    b[botCol][botLine] = FILLED;
    Sleep(200);
    
    int u = 0;
    l = 0;
    while (u != 1) {
        botCol = rand() % 10;
        botLine = rand() % 10;

        if (botCol - 1 <= 9 && botLine - 1 <= 9) {
            if (b[botCol][botLine] != FILLED && b[botCol - 1][botLine] != FILLED) {
                b[botCol][botLine] = FILLED;
                b[botCol - 1][botLine] = FILLED;
                u = 1;
            }
        }
    }
    Sleep(200);

    u = 0;
    l = 0;
    while (u != 1) {
        botCol = rand() % 10;
        botLine = rand() % 10;

        if (botCol - 1 <= 9 && botLine - 1 <= 9) {
            if (b[botCol][botLine] != FILLED && b[botCol - 1][botLine] != FILLED) {
                b[botCol][botLine] = FILLED;
                b[botCol - 1][botLine] = FILLED;
                u = 1;
            }
        }
    }
    Sleep(200);

    u = 0;
    l = 0;
    while (u != 1) {
        botCol = rand() % 10;
        botLine = rand() % 10;

        if (botCol - 1 <= 9 && botLine - 1 <= 9) {
            if (b[botCol][botLine] != FILLED && b[botCol - 1][botLine] != FILLED) {
                b[botCol][botLine] = FILLED;
                b[botCol - 1][botLine] = FILLED;
                u = 1;
            }
        }
    }
    Sleep(200);

    l = 0;
    while (l != 1) {
        botCol = rand() % 10;
        botLine = rand() % 10;

        if (botCol + 1 <= 9 && botCol + 2 <= 9) {
            if (b[botCol][botLine] != FILLED && b[botCol + 1][botLine] != FILLED) {
                if (b[botCol + 2][botLine] != FILLED)
                    b[botCol][botLine] = FILLED;
                b[botCol + 1][botLine] = FILLED;
                b[botCol][botLine] = FILLED;
                b[botCol + 2][botLine] = FILLED;
                l++;
            }
        }
    }
    Sleep(200);

    l = 0;
    while (l != 1) {
        botCol = rand() % 10;
        botLine = rand() % 10;

        if (botCol + 1 <= 9 && botCol + 2 <= 9) {
            if (b[botCol][botLine] != FILLED && b[botCol + 1][botLine] != FILLED) {
                if (b[botCol + 2][botLine] != FILLED)
                    b[botCol][botLine] = FILLED;
                b[botCol + 1][botLine] = FILLED;
                b[botCol][botLine] = FILLED;
                b[botCol + 2][botLine] = FILLED;
                l++;
            }
        }
    }


    short bot_hit = 0, person_hit = 0;
    system("cls");
    while (bot_hit < 16 && person_hit < 16) {
        field(a2, b2);
        cout << endl;
        cout << "Your turn, enter coordinates\nThe \"*\" sign means hit\nThe \"x\" sign means miss";
        cout << "Enter the column:"; cin >> l;
        cout << "Enter the line: "; cin >> s;
        if (b[s][l] == FILLED) {
            person_hit++;
            b[s][l] = DESTROYED;
            b2[s][l] = "*";
            cout << endl;
            cout << "You hitted!";
        }
        else {
            b2[s][l] = "x";
            b[s][l] = MISSED;
            cout << "You missed!";
        }
        system("cls");
        field(a2, b2);
        cout << endl;
        cout << "Enemy's turn";
        Sleep(300);
        l = 1;
        while (l != 0) {
            botCol = rand() % 10;
            botLine = rand() % 10;
            if (a[botCol][botLine] != MISSED && a[botCol][botLine] != DESTROYED) {
                if (a[botCol][botLine] == FILLED) {
                    bot_hit++;
                    a[botCol][botLine] = DESTROYED;
                    a2[botCol][botLine] = "*";
                    l = 0;
                }
                else {
                    a2[botCol][botLine] = "x";
                    a[botCol][botLine] = MISSED;
                    l = 0;
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
    setlocale(LC_ALL, "ru");
    cage a[10][10];
    cage b[10][10];
    game(a, b);
}