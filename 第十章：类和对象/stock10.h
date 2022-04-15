#ifndef __STOCK00__H__
#define __STOCK00__H__
using namespace std;
#include <string>

class Stock
{
	private:
		string company;
		long shares;
		double share_val;
		double total_val;
		void set_tot() {total_val = shares * share_val;}
	public:
		Stock();//默认构造函数
		Stock(const string &co, long n, double pr);//自定义构造函数
		~Stock();
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;
};


#endif