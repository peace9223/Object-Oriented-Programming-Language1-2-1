#include "Oval.h"
#include <iostream>
using namespace std;

Oval::Oval()
{
	width = 1; // 기본 생성자
	height = 1;
}

Oval::Oval(int w, int h)
{
	width = w;
	height = h;
}

Oval::~Oval()
{
	cout << "Oval 소멸: " << width << "X" << height << endl;
}

int Oval::getWidth()
{
	return width;
}

int Oval::getHeight()
{
	return height;
}

void Oval::set(int w, int h)
{
	width = w;
	height = h;
}

void Oval::show()
{
	cout << "Oval: width=" << getWidth() << ", height=" << getHeight() << endl;
}
double Oval::area()
{
	return (width / 2.0) * (height / 2.0) * 3.14;
}
