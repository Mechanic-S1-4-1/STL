#include <iostream>

using namespace std;

//#define ARITHMETICAL_OPERATORS
//#define ASSIGMENT_OPERATOR // �������� ������������
//#define INCREMENT_DECREMENT // (++/--)
//#define COMPAUND_ASIGMENTS // ��������� ������������
//#define COMPARISON_OPERATORS // �������� ���������

void main() {

	setlocale(0, "");

#if defined ARITHMETICAL_OPERATORS
	// Unary: +, -;
	//Binary: +, -, *, /, %

	int a = 17;
	//double a = 17;
	int b = 5;

	cout << "������� �� �������: " << a % b << endl;
	cout << " ���������: " << a / b << endl;


#endif

#if defined ASSIGMENT_OPERATOR
	//int a = 2+3*4.5;
	//  ���������� ����� "�" ����������� �������� ��������� ����� 
	// L-Value - ����������
	// r-value - ��������� ������ - ����� ���� ������� �������������� ����������

	int a, b, c;

	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

#endif
#if defined INCREMENT_DECREMENT
	int i = 0;
	++i; //prefix
	i++; //postfix (suffix)
	--i; //prefix
	i--; //postfix (suffix)

	int j = i++;
	cout << i << endl;
	cout << j << endl;
#endif

#if defined COMPAUND_ASIGMENTS

	int a = 2;
	int b = 3;

	a = a + b; // �� �� ��� � a+=b;


	cout << a << endl;
#endif

#if defined COMPARISON_OPERATORS

	// ������� (conditional) - ��� ���������!
	
	cout << true == false << endl;  // ���� ����� � ������ (true==false) ��� ����������
	cout << (true == false( << endl;
	cout << (!true == false) << endl;


#endif
}


