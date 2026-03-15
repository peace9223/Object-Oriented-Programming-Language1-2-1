#include <iostream>
#include "Storage.h"
using namespace std;

int main()
{
	Storage a;
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
	a.dump();
	cout << "평균 체온은 " << a.getAvg() << "입니다" << endl;
}