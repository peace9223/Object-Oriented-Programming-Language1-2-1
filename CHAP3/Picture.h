#pragma once
/*
ifndef
define
endif
*/
#include <string>
using namespace std;
class Picture
{
private:
	int width;
	int height;
	string place;
public:
	Picture();
	Picture(int a, int b, string str);
	int getWidth();
	int getHeight();
	string getPlace();
};