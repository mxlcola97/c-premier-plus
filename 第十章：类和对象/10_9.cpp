#include <iostream>
#include "stock20.h"
using namespace std;
const int STKS = 4;

int main(void)
{
	Stock stocks[STKS] = {//对象数组进行初始化并比较找到topval对象
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Mono", 130, 3.25),
		Stock("Fleep", 60, 6.5)
	};
	cout << "Stock holding:\n";
	int st;
	for(st = 0; st < STKS; st++)//显示每只股票信息
		stocks[st].show();

	const Stock *top = &stocks[0];
	for(st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);//这里是top 指针，所以用的->

	cout << "\nMost valuable holding:\n";
	top->show();

	return 0;
}