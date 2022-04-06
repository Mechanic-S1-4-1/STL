#include <iostream>

using namespace std;

#define TASK_1
#define TASK_2

void main() {

	setlocale(LC_ALL, "Russia");

#if defined TASK_1
	cout << "\t\t\tТемпература на улице.\n\n";

	int  temp;

	cout << "Введите температуру на улице: ";
	cin >> temp;

	if (temp > 0) {
		cout << "На улице тепло!" << endl;
	}
	else {
		cout << "На улице холодно!" << endl;
	}

#endif

#if defined TASK_2

	int number;

	cout << "Введите число: ";
	cin >> number;

	if (0 < number < 10) {
		cout << "Вы попали!";
	}
	else {
		cout << "Вы промахнулись!";
	}

#endif

}