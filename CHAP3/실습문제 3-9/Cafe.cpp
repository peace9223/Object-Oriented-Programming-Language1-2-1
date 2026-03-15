#include <iostream>
#include "Cafe.h"

Cafe::Cafe()
{
	cout << "카페 1호점 개설" << endl;
	cout << "현재 수익은 0원 입니다!" << endl;
	Esp = 3000;
	Ame = 3500;
	Caf = 4000;
	money = 0;
}

void Cafe::order_Menu()
{
	cout << "에스프레소 3000원, 아메리카노 3500원 카푸치노 4000원 입니다" << endl;
	while (true)
	{
		cout << "주문(메뉴이름을 적고 spacebar를 누른다음 개수를 적어주세요)>>";
		cin >> customer_Menu >> customer_number;
		if (customer_Menu == "에스프레소")
		{
			cout << Esp * customer_number << "원 입니다 맛있게 드세요!" << endl;
			money += Esp * customer_number;
			if (money >= 30000)
			{
				cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다~" << endl;
				return;
			}
		}
		else if (customer_Menu == "아메리카노")
		{
			cout << Ame * customer_number << "원 입니다 맛있게 드세요!" << endl;
			money += Ame * customer_number;
			if (money >= 30000)
			{
				cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다~" << endl;
				return;
			}
		}
		else if (customer_Menu == "카푸치노")
		{
			cout << Caf * customer_number << "원 입니다 맛있게 드세요!" << endl;
			money += Caf * customer_number;
			if (money >= 30000)
			{
				cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다~" << endl;
				return;
			}
		}
	}
	
		
}