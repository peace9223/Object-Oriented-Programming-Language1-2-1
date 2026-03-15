#include <iostream>
#include "Oval.h"
using namespace std;

int main()
{
	Oval kitea, jane(10, 15);
	kitea.set(3, 4);
	kitea.show();
	cout << jane.getWidth() << "x" << jane.getHeight() << ", 면적 " << jane.area() << endl;
}