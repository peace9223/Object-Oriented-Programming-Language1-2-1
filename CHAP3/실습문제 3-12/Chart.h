#pragma once
#ifndef QQQQ
#define QQQQ
#include <iostream>
#include <string>
using namespace std;


class Chart
{
private:
	string color[3]; // 과잠 색깔 정리
	string title; // 차트 제목 저장
	int data[3]; // 색깔별 인원수 저장
	int sum; // 조사에 참여한 전체 인원수

public:
	Chart(string title); // 차트 제목
	int getNumberOfColors(); // 저장된 색깔배열의 요소 수 
	string getColor(int n); // 저장된 색깔 배열에서 n번째 인덱스의 색깔 호출
	~Chart();
	void draw(); // 각 과잠 색깔별로 비율 출력
	void add(int n, int c); //  n에는 색깔별 선호도 수의 배열의 인덱스, c는 그 선호도 수에 몇을 넣을껀지
};


#endif