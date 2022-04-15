#include <iostream>
#include "stock20.h"
using namespace std;
int main(void)
{

	Stock stock1("Nanosmart", 12, 20.0);//初始化
	stock1.show();

	Stock stock2 = Stock("Boffo objects", 2, 2.0);//创建临时类的对象
	stock2.show();
	
	Stock top = stock1.topval(stock2);
	cout << "\nNow show the top val:\n";
	top.show();
	return 0;
}