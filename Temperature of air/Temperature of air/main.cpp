#include <iostream>

using namespace std;

#define TASK_1
#define TASK_2

void main() {

	setlocale(LC_ALL, "Russia");

#if defined TASK_1
	cout << "\t\t\t����������� �� �����.\n\n";

	int  temp;

	cout << "������� ����������� �� �����: ";
	cin >> temp;

	if (temp > 0) {
		cout << "�� ����� �����!" << endl;
	}
	else {
		cout << "�� ����� �������!" << endl;
	}

#endif

#if defined TASK_2

	int number;

	cout << "������� �����: ";
	cin >> number;

	if (0 < number < 10) {
		cout << "�� ������!";
	}
	else {
		cout << "�� ������������!";
	}

#endif

}