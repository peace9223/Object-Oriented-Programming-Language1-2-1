#include <iostream>
#include "Cube.h";
using namespace std;

Cube::Cube(int a, int b, int c)
{
	width = a;
	height = b;
	length = c;
}

int Cube::getVolume()
{
	return width * height * length;
}

void Cube::increase(int a, int b, int c)
{
	width += a;
	height += b;
	length += c;
}

bool Cube::isZero()
{
	if (getVolume() == 0)
		return true;
	else
		return false;
}