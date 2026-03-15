#pragma once
/*
#ifndef CCCC
#define CCCC

#endif
*/
#include <string>
using namespace std;

class Cafe
{
private: // 손님은 모르는 카페의 상황
	string customer_Menu; // 손님이 주문한 메뉴
	int customer_number; // 손님이 주문한 메뉴의 수
	int money; // 카페 사장 통장
	int Esp; // 에스프레소 가격 3000원
	int Ame; // 아메리카노 가격 3500원
	int Caf; // 카푸치노 가격 4000원
public: // 손님이 할 행동들
	Cafe(); // 카페 지점 차리기! 객체이름이 카페 이름
	void order_Menu();
};
