#include <iostream>
#include <string>
#include "Calculator.h"
using namespace std;

Calculator::Calculator()
{
	value = 0;
}

void Calculator::loop()
{
	/*string op; // 연산자 받기
	int number; // 연산할 숫자 받기]
	
	while (true)
	{
		cout << "연산 입력>>";
		cin >> op >> number;
			
		if (op == "+")
			value += number;
		else if (op == "-")
			value -= number;
		else if (op == "*")
			value *= number;
		else if (op == "/")
			value /= number;
		else if (op == "그만")
			break;
	}
	*/

	string op;
	int number;
	while (true)
	{
		cout << "연산 입력>>";
		cin >> op;
		if (op == "그만")
			break;
		else
		{
			cin >> number;
			Calc(op, number);
		}
			
	}
	


}

void Calculator::Calc(string op, int number)
{
	if (op == "+")
		value += number;
	else if (op == "-")
		value -= number;
	else if (op == "*")
		value *= number;
	else if (op == "/")
		value /= number;
}

int Calculator::getValue() const
{
	return value;
}