#include <iostream>

using namespace std;

void main()
{
    setlocale(0, "");
   
    int a;
    int b = 0;
    int c;

    cout << "\t\t\t\tПалиндром.\n\n" << endl;

    cout << "Введите число: ";
    cin >> a;
    c = a;

    while (c > 0) {
        b = b * 10 + c % 10;
        c = c / 10;
    }
    if (a == b) {
        cout << "Палиндром!";
    }
    else {
        cout << "Не палиндром!";
    }
}