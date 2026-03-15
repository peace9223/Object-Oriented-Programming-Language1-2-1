#include <iostream>
#include <string>
#include "Coffee.h"
using namespace std;

Coffee::Coffee()
{
	Cof = 10;
	Sug = 0;
	Mil = 0;
	Wat = 0;
}

Coffee::Coffee(int a, int b, int c, int d)
{
	Cof = a;
	Sug = b;
	Mil = c;
	Wat = d;
}

void Coffee::show()
{
	string menu[4] = { "coffee","sugar","milk","water" };

	/*
	<방법1>
	cout << menu[0] << " ";
	for (int i = 0; i < Cof; i++)
		cout << "*";
	cout << endl;
	cout << menu[1] << " ";
	for (int i = 0; i < Sug; i++)
		cout << "*";
	cout << endl;
	cout << menu[2] << " ";
	for (int i = 0; i < Mil; i++)
		cout << "*";
	cout << endl;
	cout << menu[3] << " ";
	for (int i = 0; i < Wat; i++)
		cout << "*";
	cout << endl;
	*/
	// 방법 2
	int amount[4] = { Cof, Sug, Mil, Wat };
	for (int i = 0; i < 4; i++)
	{
		cout << menu[i] << " ";
		for (int j = 0; j < amount[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}
