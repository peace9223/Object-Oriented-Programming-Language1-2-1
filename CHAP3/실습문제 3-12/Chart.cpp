#include "Chart.h"
#include <iostream>
#include <string>
using namespace std;

Chart::Chart(string title)
{
	this->title = title;
	color[0] = "빨강", color[1] = "노랑", color[2] = "파랑";
	sum = 0;
}

int Chart::getNumberOfColors()
{
	return sizeof(color) / sizeof(color[0]);
}

string Chart::getColor(int n)
{
	return color[n];
}

void Chart::add(int n, int c)
{
	data[n] = c;
	sum += c;
}

void Chart::draw()
{
	//data를 백분율로 만들기
	
	cout << title << "******************" << endl;
	for (int i = 0; i < sizeof(color) / sizeof(color[0]); i++)
	{
		cout << color[i] << ": " << (double)data[i]/sum*100 << "%" << endl;
	}
	cout << "**********************************" << endl;
}

Chart::~Chart()
{
	cout << "차트 데이터는 저장되지 않고 사라집니다" << endl;
}