#include<iostream>

void main() {

	setlocale(LC_ALL, "Russia");

	double custom_note;
	double custom_cover;
	int number_of_sets;
	double custom_product;

	std::cout << "���������� ��������� �������. \n";
	std::cout << "������� �������� ������: \n";
	std::cout << "���� ������� (���.) -> ";
	std::cin >> custom_note;
	std::cout << "���� ������� (���.) -> ";
	std::cin >> custom_cover;
	std::cout << "���������� ���������� (��.) -> ";
	std::cin >> number_of_sets;
	custom_product= (custom_note + custom_cover) * number_of_sets;
	std::cout << "��������� �������: " << custom_product<<" (���.)\n";
}