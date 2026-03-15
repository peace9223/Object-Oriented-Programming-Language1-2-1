#include <iostream>
#include "CoffeeMachine.h"
using namespace std;

CoffeeMachine::CoffeeMachine(int a, int b, int c)
{
	Cof = a;
	Wat = b;
	Sug = c;
}

void CoffeeMachine::drinkEspresso()
{
	Cof -= 1;
	Wat -= 1;
}

void CoffeeMachine::show()
{
	cout << "[머신 상태] 커피:" << Cof << "\t 물:" << Wat << "\t 설탕:" << Sug << endl;
}

void CoffeeMachine::drinkSugarCoffee()
{
	Cof -= 1;
	Wat -= 2;
	Sug -= 1;
}

void CoffeeMachine::drinkAmericano()
{
	Cof -= 1;
	Wat -= 2;
}

void CoffeeMachine::fill()
{
	Cof = 10;
	Wat = 10;
	Sug = 10;
}