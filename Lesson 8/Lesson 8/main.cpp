//#include <iostream>

//using namespace std;

//void main()
//{
	//setlocale(0, "");

	/*int size;
	cout << "������� ������ ������: ";
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

int add(int a,int b) // ����� ������� function call
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
	cout << "������� ��� �����";cin >> a >> b;
	int c = add(a, b);
	cout << "��������� ��������: " << c << endl;
	cout << "��������� ���������: " << sub(a,b) << endl;
	cout << "��������� ���������: " << mul(a, b) << endl;
	cout << "��������� �������: " << division(a, b) << endl;
}
