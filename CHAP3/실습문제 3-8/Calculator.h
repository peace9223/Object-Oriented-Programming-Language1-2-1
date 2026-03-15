#pragma once
/*
#ifndef QQQQ
#define QQQQ

#enfif
*/
#include <string>
using namespace std;
class Calculator
{
private:
	int value; // 값 저장
	void Calc(string op, int number);
public:
	Calculator(); //생성자
	void loop(); // 사칙연산 루프
	int getValue() const; // 결과값 호출
};