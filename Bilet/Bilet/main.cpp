#include <iostream>

using namespace std;

void main()
{
    setlocale(0, "");

    int a;
    int i;
    int number1 = 0;
    int number2 = 0;
    

    cout << "\t\t\t\tСчастливый билет!\n\n" << endl;
    cout << "Введите номер билета: ";
    cin >> a;

    for (i = 0; i < 3; i++)
    {
        number1 += a % 10; a /= 10;
    }
    for (i = 0; i < 3; i++)
    {
        number2 += a % 10; a /= 10;
    }
    if (number1 == number2) {
        cout << "Это счастливый билет!" << endl;
    }
    else
    {
        cout << "Не счастливый билет=(" << endl;
    }
}