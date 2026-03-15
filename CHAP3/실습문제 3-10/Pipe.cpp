#include <iostream>
#include "Pipe.h"
using namespace std;

Pipe::Pipe()
{
	for (int i = 0; i < 10; i++)
		data[i] = 0;
	index = 0;
}

void Pipe::show()
{
	cout << "파이프 내부 [ ";
	for (int i = 0; i < 10; i++)
		cout << data[i] << " ";
	cout << "]" << endl;
}

int Pipe::shift()
{
	int temp = data[0];
	for (int i = 0; i < 9; i++)
	{
		data[i] = data[i + 1];
	}
	data[9] = 0;
	return temp;
}

int Pipe::arrive(int n)
{
	if (index == 10)
	{
		int temp = shift(); 
		data[9] = n; // index = 9
		return temp;
	}
	else
	{ // 1 2 3 4 5 6 7 8 9 10 // 10_
		data[index++] = n;
		return -1;
	}
}