#include <iostream>

using namespace std;

void main()
{
    setlocale(0, "");

    int a;
    int i;
    int number1 = 0;
    int number2 = 0;
    

    cout << "\t\t\t\t���������� �����!\n\n" << endl;
    cout << "������� ����� ������: ";
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
        cout << "��� ���������� �����!" << endl;
    }
    else
    {
        cout << "�� ���������� �����=(" << endl;
    }
}