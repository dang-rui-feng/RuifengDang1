// ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"Calculator.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number1, number2;
	string string1, string2;
	string ysf1,ysf2;
	Calculator c;
	cout << "����������number1�������ysf1��number2" << endl;
	cin >> number1;
	cin >> ysf1;
	cin >> number2;
	c.count(number1, number2, ysf1);
	c.Equals(number1, number2);
	cout << "����������string1�������ysf2��string2" << endl;
	cin >> string1;
	cin >> ysf2;
	cin >> string2;
	c.count(string1, string2, ysf2);
    return 0;
}