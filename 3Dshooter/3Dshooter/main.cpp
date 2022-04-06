#include <iostream>
#include <conio.h>

#define UP 119
#define DOWN 115
#define LEFT 97
#define RIGHT 100
#define SPACE 32
#define ENTER 13

using namespace std;

int main()
{
    setlocale(0, "");

    cout << "\t\t\t3DShooter\n\n";
    char c = _getch();
        

    switch (c)
    {
    case UP:
        cout << endl << "Вверх" << endl;
        break;
    case DOWN:
        cout << endl << "Вниз" << endl;
        break;
    case LEFT:
        cout << endl << "Влево" << endl;
        break;
    case RIGHT:
        cout << endl << "Вправо" << endl;
        break;
    case SPACE:
        cout << endl << "Прыжок" << endl;
        break;
    case ENTER:
        cout << endl << "Выстрел" << endl;
        break;
    default:
        cout << endl << "Error!" << endl;
    }
}