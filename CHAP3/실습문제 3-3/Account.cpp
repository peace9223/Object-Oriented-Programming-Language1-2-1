#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

Account::Account(string s)
{
	name = s;
	money = 0;
}

void Account::deposit(int a)
{
	money += a;
}

string Account::getOwner()
{
	return name;
}

int Account::inqury()
{
	return money;
}

int Account::withdraw(int a)
{
	if (money < a)
	{
		cout << "잔액이 부족합니다 " <<a<<"원만 출금합니다!" <<endl;
		money = 0;
		return a;
	}
	else
	{
		money -= a;
		return a;
	}
}