
#include "stdafx.h"
#include "Calculator.h"
Calculator::Calculator()
{
	
}
void Calculator::count(int number1, int number2, string ysf)
{
	int a;
	double cf =( number1 / number2);
	if (ysf == "+")
		cout << "number1 + number2=" << number1 + number2 << endl;
	else if (ysf == "-")
		cout << "number1 - number2=" << number1 - number2 << endl;
	else if (ysf == "*")
		cout << "number1 * number2=" << number1*number2 << endl;
	else
		cout << "number1/number2=" << cf<< endl;
}
void Calculator::count(string a, string b, string c)
{
	if (c == "+")
		cout << a << "+" << b << "=" <<( a+b )<< endl;
	else {
		if (c == "-")
			cout << a << "-" << b << "="  << endl;
	}

}
void Calculator::Equals(int a, int b)
{
	if (a == b)
		cout << "number1和number2相等" << endl;
	else
		cout << "number1不等于number2" << endl;
}
Calculator::~Calculator()
{
}