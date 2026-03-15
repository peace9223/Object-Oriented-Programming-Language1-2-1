#pragma once
/*
#ifndef !!!!
#define !!!!

#endif
*/

class Storage
{
private:
	double data[10];
	int next;
public:
	Storage();
	void put(double a);// 체온 저장
	void dump(); // 저장된 모든 체온 출력
	double getAvg() const; // 모든 체온의 평균 출력
};
