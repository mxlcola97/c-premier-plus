#include <iostream>
#include "stock20.h"
using namespace std;
int main(void)
{

	Stock stock1("Nanosmart", 12, 20.0);//初始化
	stock1.show();

	Stock stock2 = Stock("Boffo objects", 2, 2.0);//创建临时类的对象
	stock2.show();

	cout << "Assigning stock1 to stock2: \n";//类之间的拷贝
	stock2 = stock1;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();

	cout << "Using a constructor to reset an object:\n";//使用构造函数赋值
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	cout << "Done\n";

	const Stock land = Stock("Klu proper", 3, 3.0);//常量不能修改
	land.show();

	return 0;
}