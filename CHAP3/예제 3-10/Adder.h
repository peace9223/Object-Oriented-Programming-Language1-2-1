#pragma once
/*
	옛날에는 
	#ifndef AAAAAA
	#define AAAAAA
	(문장 쓰고)
	#endif

	현재는 
	#pragma once

	헤더파일에서는 #include <iostream> 은 필요하면 쓰고 아니면 안쓴다
*/

class Adder
{
private:
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

