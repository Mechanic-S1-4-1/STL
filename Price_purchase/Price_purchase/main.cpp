#include<iostream>

using namespace std;

void main() {
	
	setlocale(LC_ALL, "Russian");

	double note_price;
	double number_of_note;
	double pencil_price;
	double number_of_pencils;
	double purchase_cost;


	cout << "���������� ��������� �������. "<<endl;
	cout << "������� �������� ������: "<<endl;

	cout << "���� ������� (���.) -> ";
	cin >> note_price;
	cout << "���������� �������� -> ";
	cin >> number_of_note;

	cout << "���� ��������� (���.) -> ";
	cin >> pencil_price;
	cout << "���������� ���������� -> ";
	cin >> number_of_pencils;

	purchase_cost = (note_price * number_of_note) + (pencil_price * number_of_pencils);
	cout << "��������� �������: " << purchase_cost <<" ���." <<endl;
}

