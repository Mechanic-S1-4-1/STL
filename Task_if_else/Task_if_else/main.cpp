#include<iostream>

using namespace std;

#define TASK_TEMPERATURE_OF_AIR
#define TASK_NUMBER

void main() {

	setlocale(0, ""); // ������� setlocale(LC_ALL, "Russian") �� ��������������� ������� ���� � �������

#if defined TASK_TEMPERATURE_OF_AIR

	int temp;

	cout << "������� ����������� �������: ";
	cin >> temp;

	if (temp > 0) {
		cout << "�� ����� �����!";
	}
	else {
		cout << "�� ����� �������!";
	}

#endif		

#if defined TASK_NUMBER

	int number;

	cout << "������� �����: ";
	cin >> number;

	if (0 < number && number < 10) {  // � ������ ���� �������� 0 � 10 � ��������, �� ������� ("�������� ���������")
									  // ����� �������� if (0 <= number && number <= 10) .... 
		cout << "�� ������!";
	}
	else {
		cout << "�� �����������!";
	}

#endif

}