#pragma once
/*
#ifndef 3333
#define 3333
#endif
*/
#include <iostream>
using namespace std;

class Memo
{
private:
	string date;
	string content;
public:
	Memo(string a, string b);
	void show();
	bool isSameDate(Memo s);
	string getDate();
	string getContent();
};

