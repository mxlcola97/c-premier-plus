#include <iostream>

using namespace std;

void oil(int x);//声明 

int main(void)
{
	int texas = 31;//自动变量 
	int year  = 2011;

	cout << "In main(), texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;//地址 
	cout << "In main(), year = " << year << ", ";
	cout << "&year = " << &year << endl;
 
	oil(texas);

	cout << "In main(), texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;
	cout << "In main(), year = " << year << ", ";
	cout << "&year = " << &year << endl;	

	return 0;
}

void oil(int x)
{
	int texas = 5;

	cout << "In oil(), texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;
	cout << "In oil(), x = " << x << ", ";
	cout << "&x = " << &x << endl;

	{//函数里面定义代码块 变量重名 就近优先原则 
		int texas = 113;
		cout << "In block, texas = " << texas << ", ";
		cout << "&texas = " << &texas << endl;
		cout << "In block, x = " << x << ", ";
		cout << "&x = " << &x << endl;
	}

	cout << "Post-block, texas = " << texas << ", ";//代码块结束之后texas 
	cout << "&texas = " << &texas << endl;
}
