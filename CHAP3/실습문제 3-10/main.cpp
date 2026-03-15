#include <iostream>
#include "Pipe.h"
using namespace std;

int main()
{
	Pipe pipe;
	for (int i = 0; i < 6; i++) pipe.arrive(i);
	pipe.show();
	for(int i = 6; i < 12; i++) pipe.arrive(i);
	pipe.show(); // 10
	int front = pipe.shift(); // 9
	cout << "shift()로 제거된 맨 앞 데이터 : " << front << endl;
	pipe.show();
	//3 4 5 6 7 8 9 10 11 0 index = 10 // 9
	front = pipe.arrive(50);
	cout << "arrive(50)로 제거된 맨 앞 데이터 : " << front << endl;
	pipe.show();
}
// index가 10이 되면 더 이상 줄어들지 않는다!