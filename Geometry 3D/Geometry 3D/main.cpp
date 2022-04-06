#include <iostream>

using namespace std;

//#define ONE 
//#define TWO
#define THREE

void main()
{
	setlocale(0, "");

#ifdef ONE
	int a; //основание степени
	int n; // показатель степени
	int N = 1; // степень

	cout << "¬ведите показатель степени";
	cin >> n;
	cout << "¬ведите показатель степени";
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
	cout << "ASCII - таблица: \n";
	setlocale(0, "");
	for (int i = 0;i < 256;i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "";
	}
	cout << endl;
	setlocale(0, "");
	cout << "“аблица выведена" << endl;
#endif

	for (int i = 0;i < n;i++) {
		for (int j = i;j < n-1;j++) 
			cout << "* ";
		for (int j = 0;j < n;j++)
			cout << endl;
		}

}