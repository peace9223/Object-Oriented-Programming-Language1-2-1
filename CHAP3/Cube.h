#pragma once
/*
#ifndef Cube
#define Cube
#endif
*/

class Cube
{
private:
	int width; // 가로
	int height; // 세로
	int length; // 높이
public:
	Cube(int a, int b, int c);
	int getVolume(); //  부피 반환
	void increase(int a, int b, int c); // 부피 증가
	bool isZero(); // 부피가 0인지 아닌지
};


