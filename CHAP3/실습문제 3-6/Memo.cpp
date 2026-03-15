#include <iostream>
#include "Memo.h"
using namespace std;

Memo::Memo(string a, string b)
{
	date = a;
	content = b;
}

void Memo::show()
{
	cout << date << ", " << content << endl;
}

bool Memo::isSameDate(Memo s)
{
	return date == s.getDate();
}

string Memo::getDate()
{
	return date;
}

string Memo::getContent()
{
	return content;
}