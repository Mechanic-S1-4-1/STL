#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double number,grn,kop;

	cout << "Преобразование числа в денежный формат."<<endl;
	cout << "Введите дробное число -> "; 
	cin >> number;

	kop = modf(number,&grn)*100;

	cout<<number<<" грн. - это "<< grn << " грн. " << kop << " коп."<<endl;
}


