#include <iostream>

using namespace std;

//#define ONE 
//#define TWO
#define THREE

void main()
{
	setlocale(0, "");

#ifdef ONE
	int a; //��������� �������
	int n; // ���������� �������
	int N = 1; // �������

	cout << "������� ���������� �������";
	cin >> n;
	cout << "������� ���������� �������";
	cin >>a;

	if (n < 0)
	{
		//
	}
	for (int i = 0;i < n;i++)
	{
		N *= a;
	}

#endif

#ifdef TWO
	cout << "ASCII - �������: \n";
	setlocale(0, "");
	for (int i = 0;i < 256;i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "";
	}
	cout << endl;
	setlocale(0, "");
	cout << "������� ��������" << endl;
#endif

	for (int i = 0;i < n;i++) {
		for (int j = i;j < n-1;j++) 
			cout << "* ";
		for (int j = 0;j < n;j++)
			cout << endl;
		}

}