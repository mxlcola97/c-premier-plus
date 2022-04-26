#ifndef __MYTIME4_H__
#define __MYTIME4_H__

#include <iostream>

using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time();
		Time(int h, int m = 0);
		void AddMin(int m);
		void AddHr(int h);
		void Reset(int h = 0, int m = 0);
		Time operator+(const Time &t) const;
		Time operator-(const Time &t) const;
		Time operator*(double mult) const;
		friend Time operator*(double mult, const Time &t);//友元函数 
		friend ostream &operator<<(ostream &os,const Time &t);
		//void Show() const;
};

//Time operator*(double m, const Time &t);

#endif