#ifndef __P2_H__
#define __P2_H__

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
	private:
		static const int LIMIT = 25;
		string lname;
		char fname[LIMIT];
	public:
		Person(){lname = ""; fname[0] = '\0';}
		Person(const string &ln, const char *fn = "Heyyou");
		void Show() const;
		void FormalShow() const;
};


#endif
