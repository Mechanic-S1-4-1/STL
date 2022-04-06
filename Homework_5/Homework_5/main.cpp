#include <iostream>

using namespace std;

#define CALCULATOR
#define PALINDROM
#define BILET


void main() {

	setlocale(0, "");

#if defined CALCULATOR

	cout << "\t\t\t\tКалькулятор.\n\n";
	int a, b, selection;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;

	cout << "\n\n" << "Выберете математическую операцию: " << endl << "1. Сложение;" << endl << "2. Вычитание;" <<
		endl << "3. Умножение;" << endl << "4. Деление." << endl;

	cout << "\n\n" << "Математическая операция: ";
	cin >> selection;

	switch (selection) {
	case 1:
	{
		cout << a << "+" << b << endl;
		cout << a << "+" << b << "=" << a + b << endl;
		break;

	case 2:

		cout << a << "-" << b << endl;
		cout << a << "-" << b << "=" << a - b << endl;
		break;

	case 3:

		cout << a << "*" << b << endl;
		cout << a << "*" << b << "=" << a * b << endl;
		break;

	case 4:

		cout << a << "/" << b << endl;
		cout << a << "/" << b << "=" << (double)a / b << endl;
		break;

	}
	}
#endif

#if defined PALINDROM
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
#endif

#if defined BILET
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
#endif
}