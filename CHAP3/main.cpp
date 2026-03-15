#include <iostream>
#include "Coffee.h"
using namespace std;

int main()
{
	Coffee espresso; // 커피 10 설탕 0 우유 0 물 0
	Coffee americano(5, 0, 0, 10);
	Coffee cappoucchino(5, 1, 5, 2);
	Coffee mySweet(3,7,5,5);

	espresso.show();
	cout << endl;
	mySweet.show();
}