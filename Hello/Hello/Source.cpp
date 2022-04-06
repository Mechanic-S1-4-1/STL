#include <iostream>

using namespace std;

//#define A // Решение факториала с помощью рекурсии
#define B

#ifdef A
int fact(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;

	return N * fact(N - 1);
}
#endif B

void main()
{
	setlocale(0, "rus");
	
#ifdef A
	int a;
	cout << "Введите число факториала: ";
	cin >> a;
	cout <<"Факториал равен: "<< fact(a) <<endl;
#endif A

#ifdef B
	int y = 02, x = 03, z = 01, k;
	k = x | y & z; // Операция 1
	cout << k << " ";
	k = x | y & ~z; // Операция 2
	cout << k << " ";
	k = x ^ y & ~z; // Операция 3
	cout << k << " ";
	k = x & y && z; // Операция 4
	cout << k << " ";
	x = 1;
	y = -1;
	k = !x | x; // Операции 5
	cout << k << " ";
	k = -x | x; // Операции 6
	cout << k << " ";
	k = x ^ x; // Операции 7
	cout << k << " ";
	x <<= 3; // Операции 8
	cout << x << " ";
	y <<= 3; // Операции 9
	cout << y << " ";
	y >>= 3; // Операции 10
	cout << y << " ";
#endif
}