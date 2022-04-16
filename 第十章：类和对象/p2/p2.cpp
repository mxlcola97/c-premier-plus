#include "p2.h"

Person::Person(const string &ln, const char *fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	if(lname == "" && fname[0] == '\0')
		cout << "No name: " << endl;
	else
		cout << "Person name: " << fname << " "<< lname << endl;
}

void Person::FormalShow() const
{
	if(lname == "" && fname[0] == '\0' )
		cout << "No name: " << endl;
	else
		cout << "Person name: " << lname << ", " << fname << endl;
}
