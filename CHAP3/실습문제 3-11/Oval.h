#pragma once
#ifndef EEEEE
#define EEEEE

class Oval
{
private:
	int width;
	int height;
public:
	Oval(); // 생성자
	Oval(int w, int h); // 너비 높이를 인자로 받음
	~Oval();
	int getWidth(); // 너비 반환
	int getHeight(); // 높이 반환
	void set(int w, int h); // 너비와 높이를 받은 인자로 변경
	void show(); // 너비와 높이를 화면에 출력
	double area(); // 타원의 넓이 계산 후 출력
};
#endif

