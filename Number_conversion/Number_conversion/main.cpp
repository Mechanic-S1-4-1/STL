#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	double number,grn,kop;

	cout << "�������������� ����� � �������� ������."<<endl;
	cout << "������� ������� ����� -> "; 
	cin >> number;

	kop = modf(number,&grn)*100;

	cout<<number<<" ���. - ��� "<< grn << " ���. " << kop << " ���."<<endl;
}


