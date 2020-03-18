#pragma once
#include<string>
#include<iostream>
using namespace std;
class Calculator
{
public:
	int number1, number2;
	string ysf;
	Calculator();
	void count(int a,int b,string c);
	void count(string a, string b, string c);
	void Equals(int a,int b);
	~Calculator();
};
