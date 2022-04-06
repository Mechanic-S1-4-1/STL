#include<iostream>

using namespace std;

#define TASK_TEMPERATURE_OF_AIR
#define TASK_NUMBER

void main() {

	setlocale(0, ""); // функция setlocale(LC_ALL, "Russian") не преобразовывает русский язык в консоль

#if defined TASK_TEMPERATURE_OF_AIR

	int temp;

	cout << "Введите температуру воздуха: ";
	cin >> temp;

	if (temp > 0) {
		cout << "На улице тепло!";
	}
	else {
		cout << "На улице холодно!";
	}

#endif		

#if defined TASK_NUMBER

	int number;

	cout << "Введите число: ";
	cin >> number;

	if (0 < number && number < 10) {  // в случае если включить 0 и 10 в диапазон, то условие ("условное выражение")
									  // будет следущим if (0 <= number && number <= 10) .... 
		cout << "Вы попали!";
	}
	else {
		cout << "Вы промахулись!";
	}

#endif

}