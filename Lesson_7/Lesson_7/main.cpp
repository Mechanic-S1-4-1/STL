#include <iostream>

using namespace std;

//#define POWER
//#define ASCII_TABLE
//#define PYTHAGORAS_TABLE
//#define  SQUARE_1
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB
//#define SQUARE_2

void main() {

	setlocale(0, "");

#ifdef POWER
	double a;
	int n;
	double N=1;

	cout << "Введите основание степени: ";
	cin >> a;
	cout << "Введите показатель степени: ";
	cin >> n;

	if (n < 0) // условие для отрицательного показателя степени
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0;i < n;i++)
	{
		N *= a;
	}
	cout << a << "^" << n << " = " << N << endl;
#endif

#ifdef ASCII_TABLE
	cout << "\t\t\tASCII-Таблица\n\n";
	setlocale(0, "C");
	for (int i = 0;i < 256;i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(0, "");
	cout << "\n\n\t\t\tТаблица выведена\n" << endl;
#endif

#ifdef PYTHAGORAS_TABLE
	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			if (i * j < 100)std::cout << " ";
			if (i * j < 10) std::cout << " ";
			std::cout<<(i * j) << "\t";
		}
		std::cout << endl;
	}
#endif

#ifdef SQUARE_1

	int n;
	cout << "Введите размер фигуры: ";
	cin >> n;
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_1
	int n;
	cout << "Введите размер фигуры: ";
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <= i;j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_2
	int n;
	cout << "Введите размер фигуры: ";
	cin >> n;

	for (int i = 0;i <n;i++)
	{
		for (int j = i;j <n;j++) {
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_3
	int n;
	cout << "Введите размер фигуры: ";
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < i; j++) cout <<"  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif

#ifdef TRIANGLE_4
	int n;
	cout << "Введите размер фигуры: ";
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = i; j < n-1; j++) cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif

#ifdef ROMB
	int n;
	cout << "Введите размер фигуры: ";
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		cout << " ";
		cout << "/";
		for (int j = 0;j < i;j++)
		cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <= i;j++)
		cout << " ";
		cout << "\\";
		for (int j = i;j < n-1;j++)
		cout << "  ";
		cout << "/";
		cout<< endl;
	}
#endif

#ifdef SQUARE_2
	int n;
	cout << "Введите размер фигуры: ";
	cin >> n;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if ((i + j) % 2 == 0)
			{
				cout << "+ ";
			}
			else {
				cout << "- ";
			}
		}
		cout << endl;
	}
#endif
}