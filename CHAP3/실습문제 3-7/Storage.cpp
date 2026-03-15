#include <iostream>
#include "Storage.h"
using namespace std;

Storage::Storage()
{
	next = 0;
}

void Storage::put(double a)
{
	if (next > sizeof(data) / sizeof(data[0]) - 1)
	{
		cout << "더 이상 체온을 저장할 수 없습니다!" << endl;
		return;
	}
	else
	{
		data[next] = a;
		next++;
	}
}

void Storage::dump()
{
	if (next == 0)
	{
		cout << "저장된 값이 없습니다" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < next; i++)
		{
			cout << data[i] << " ";
		}
	}
	cout << endl;
}

double Storage::getAvg() const
{
	double AVG=0;
	for (int i = 0; i < next; i++)
	{
		AVG += data[i];
	}
	AVG /= (next);
	return AVG;
}



