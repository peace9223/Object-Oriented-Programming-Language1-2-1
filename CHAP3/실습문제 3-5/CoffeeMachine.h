#pragma once
/*
#ifndef CCC
#define CCC
#endif
*/

class CoffeeMachine
{
private:
	int Cof; // 커피
	int Wat; // 물
	int Sug; // 설탕
public:
	CoffeeMachine(int a, int b, int c); // 생성자
	void drinkEspresso(); // 에스프레소 한잔 추출
	void show(); // 현재 커피 머신 상태
	void drinkSugarCoffee(); // 설탕커피 한잔 추출
	void drinkAmericano();
	void fill(); // 커피 머신 재고 충전
};
