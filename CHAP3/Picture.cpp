#include <iostream>
using namespace std;

#include "Picture.h"

Picture::Picture()
{
	width = 5;
	height = 7;
	place = "장소 모름";
}

Picture::Picture(int a, int b, string str)
{
	width = a;
	height = b;
	place = str;
}

int Picture::getWidth()
{
	return width;
}

int Picture::getHeight()
{
	return height;
}

string Picture::getPlace()
{
	return place;
}