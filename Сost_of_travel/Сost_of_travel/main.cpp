#include<iostream>

void main() {

	setlocale(0, "");

	double distance_to_cottage;
	double fuel_consumption; 
	double custom_of_fuel; 
	double cost_of_travel; 


	std::cout << "���������� ��������� ������� �� ���� � �������.\n";

	std::cout << "���������� �� ���� (��.) ->";
	std::cin >> distance_to_cottage;
	std::cout << "������ ������� (������ �� 100 ��. �������) ->";
	std::cin >> fuel_consumption;
	std::cout << "���� ����� ������� (���.) ->";
	std::cin >> custom_of_fuel;
	cost_of_travel = (distance_to_cottage * fuel_consumption) / 100 * custom_of_fuel*2;
	std::cout << "������� �� ���� ���� � ������� ��������� � " << cost_of_travel << " ���.\n";
}

