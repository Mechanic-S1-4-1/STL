#include <iostream>

using namespace std;

#define CALCULATOR
#define PALINDROM
#define BILET


void main() {

	setlocale(0, "");

#if defined CALCULATOR

	cout << "\t\t\t\t�����������.\n\n";
	int a, b, selection;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;

	cout << "\n\n" << "�������� �������������� ��������: " << endl << "1. ��������;" << endl << "2. ���������;" <<
		endl << "3. ���������;" << endl << "4. �������." << endl;

	cout << "\n\n" << "�������������� ��������: ";
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

	cout << "\t\t\t\t���������.\n\n" << endl;

	cout << "������� �����: ";
	cin >> a;
	c = a;

	while (c > 0) {
		b = b * 10 + c % 10;
		c = c / 10;
	}
	if (a == b) {
		cout << "���������!";
	}
	else {
		cout << "�� ���������!";
	}
#endif

#if defined BILET
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
#endif
}