#include <iostream>

using namespace std;

//#define A // ������� ���������� � ������� ��������
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
	cout << "������� ����� ����������: ";
	cin >> a;
	cout <<"��������� �����: "<< fact(a) <<endl;
#endif A

#ifdef B
	int y = 02, x = 03, z = 01, k;
	k = x | y & z; // �������� 1
	cout << k << " ";
	k = x | y & ~z; // �������� 2
	cout << k << " ";
	k = x ^ y & ~z; // �������� 3
	cout << k << " ";
	k = x & y && z; // �������� 4
	cout << k << " ";
	x = 1;
	y = -1;
	k = !x | x; // �������� 5
	cout << k << " ";
	k = -x | x; // �������� 6
	cout << k << " ";
	k = x ^ x; // �������� 7
	cout << k << " ";
	x <<= 3; // �������� 8
	cout << x << " ";
	y <<= 3; // �������� 9
	cout << y << " ";
	y >>= 3; // �������� 10
	cout << y << " ";
#endif
}