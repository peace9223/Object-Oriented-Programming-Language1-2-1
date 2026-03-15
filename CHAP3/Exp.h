#pragma once
/*
ifndef
define

endif
*/

class Exp
{
private:
	int base;
	int exp;
public:
	Exp();
	Exp(int a);
	Exp(int a, int b);

	int getValue(); // 제곱의 결과값
	int getBase(); // int base
	int getExp(); // int exp;
	bool equal(Exp b);
};
