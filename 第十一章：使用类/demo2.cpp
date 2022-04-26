#include <iostream>

using namespace std;

class Num
{
	private:
		int n;
	public:
		Num();
		Num(int m);
		void operator=(int l);
};

Num::Num()
{
	n = 0;
	cout << "默认构造函数" << endl;//默认构造函数
}

Num::Num(int m)
{
	n = m;
	cout << "自定义构造函数" << endl;//自定义构造函数
}

void Num::operator=(int l)//=运算符重载
{
	n = l;
	cout << "=运算符重载" << endl;
}

int main(void)
{
	Num a;

	a = 10;  // a(10)

    Num b(20);

	return 0;
}