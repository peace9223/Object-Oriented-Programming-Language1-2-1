#pragma once
/*
#ifndef EEE
#define EEE

#endif
*/

class Pipe
{
private:
	int data[10];
	int index;
public:
	Pipe();// data 와 index 둘다 0으로 초기화
	void show(); 
	int arrive(int n); // 맨뒤에 하나 추가 꽉차있으면 shift발동 후 삽입
	int shift(); // 맨앞 제거 후 한칸씩 당기기 마지막 인덱스에 0 삽입

};