
#pragma once
#include <string>
using namespace std;
/*
#ifndef Acount
#define Acount
#endif
*/

class Account
{
private:
	string name;
	int money;
public:
	Account(string s);
	void deposit(int a); // 저금
	string getOwner(); // 은행 계좌 소유주 이름
	int inqury(); // 현재 잔액 출력
	int withdraw(int a); // 출금
};
