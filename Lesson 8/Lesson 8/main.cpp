//#include <iostream>

//using namespace std;

//void main()
//{
	//setlocale(0, "");

	/*int size;
	cout << "Введите размер фигуры: ";
	cin >> size;
	cout << size << "\b";


	for (int line = 0;line < size;line++) {
		for (int colums = 0;colums < size;colums++) {
			if ((line/2 + colums/2) & 1)
				cout << "+ ";
			else
				cout << "  ";
		}
		cout << endl;
	}*/
//}
#include <iostream>

using namespace std;

int add(int a,int b) // вызов функции function call
{
	int c = a + b;
	return c;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	return a / b;
}

void main()
{
	setlocale(0, "");

	int a, b;
	cout << "Введите два числа";cin >> a >> b;
	int c = add(a, b);
	cout << "Результат сложения: " << c << endl;
	cout << "Результат вычитания: " << sub(a,b) << endl;
	cout << "Результат умножения: " << mul(a, b) << endl;
	cout << "Результат деления: " << division(a, b) << endl;
}
