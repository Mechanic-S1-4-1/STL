#include <iostream>

using namespace std;

#define CALCULATOR
#define 


void main() {

	setlocale(0, "");

#if defined CALCULATOR

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


}