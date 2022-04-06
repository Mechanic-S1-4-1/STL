#include<iostream>

void main() {

	setlocale(LC_ALL, "Russia");

	double custom_note;
	double custom_cover;
	int number_of_sets;
	double custom_product;

	std::cout << "Вычисление стоимости покупки. \n";
	std::cout << "Введите исходные данные: \n";
	std::cout << "Цена тетради (грн.) -> ";
	std::cin >> custom_note;
	std::cout << "Цена обложки (грн.) -> ";
	std::cin >> custom_cover;
	std::cout << "Количество комплектов (шт.) -> ";
	std::cin >> number_of_sets;
	custom_product= (custom_note + custom_cover) * number_of_sets;
	std::cout << "Стоимость покупки: " << custom_product<<" (грн.)\n";
}