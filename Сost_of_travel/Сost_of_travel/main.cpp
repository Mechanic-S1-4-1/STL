#include<iostream>

void main() {

	setlocale(0, "");

	double distance_to_cottage;
	double fuel_consumption; 
	double custom_of_fuel; 
	double cost_of_travel; 


	std::cout << "Вычисление стоимости поездки на дачу и обратно.\n";

	std::cout << "Расстояние до дачи (км.) ->";
	std::cin >> distance_to_cottage;
	std::cout << "Расход бензина (литров на 100 км. пробега) ->";
	std::cin >> fuel_consumption;
	std::cout << "Цена литра бензина (грн.) ->";
	std::cin >> custom_of_fuel;
	cost_of_travel = (distance_to_cottage * fuel_consumption) / 100 * custom_of_fuel*2;
	std::cout << "Поездка на дачу туда и обратно обойдется в " << cost_of_travel << " грн.\n";
}

