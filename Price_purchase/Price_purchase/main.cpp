#include<iostream>

using namespace std;

void main() {
	
	setlocale(LC_ALL, "Russian");

	double note_price;
	double number_of_note;
	double pencil_price;
	double number_of_pencils;
	double purchase_cost;


	cout << "Вычисление стоимости покупки. "<<endl;
	cout << "Введите исходные данные: "<<endl;

	cout << "Цена тетради (грн.) -> ";
	cin >> note_price;
	cout << "Количество тетрадей -> ";
	cin >> number_of_note;

	cout << "Цена карандаша (грн.) -> ";
	cin >> pencil_price;
	cout << "Количество карандашей -> ";
	cin >> number_of_pencils;

	purchase_cost = (note_price * number_of_note) + (pencil_price * number_of_pencils);
	cout << "Стоимость покупки: " << purchase_cost <<" грн." <<endl;
}

