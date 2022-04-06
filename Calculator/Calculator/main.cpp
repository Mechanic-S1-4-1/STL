#include <iostream>

using namespace std;

#define CALCULATOR
#define 


void main() {

	setlocale(0, "");

#if defined CALCULATOR

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


}