#include <iostream>

using namespace std;

//#define ARITHMETICAL_OPERATORS
//#define ASSIGMENT_OPERATOR // оператор присваивания
//#define INCREMENT_DECREMENT // (++/--)
//#define COMPAUND_ASIGMENTS // составные присваивания
//#define COMPARISON_OPERATORS // оператор спавнения

void main() {

	setlocale(0, "");

#if defined ARITHMETICAL_OPERATORS
	// Unary: +, -;
	//Binary: +, -, *, /, %

	int a = 17;
	//double a = 17;
	int b = 5;

	cout << "Остаток от деления: " << a % b << endl;
	cout << " Результат: " << a / b << endl;


#endif

#if defined ASSIGMENT_OPERATOR
	//int a = 2+3*4.5;
	//  переменная слева "а" присваивает значение выражение слева 
	// L-Value - переменная
	// r-value - выражение справа - может быть сложным арифметическим выражением

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

	a = a + b; // то же что и a+=b;


	cout << a << endl;
#endif

#if defined COMPARISON_OPERATORS

	// Условие (conditional) - это сравнения!
	
	cout << true == false << endl;  // если взять в скобки (true==false) все заработает
	cout << (true == false( << endl;
	cout << (!true == false) << endl;


#endif
}


