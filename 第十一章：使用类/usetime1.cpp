#include <iostream>
#include "mytime1.h"

using namespace std;

int main(void)
{
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	Time Planning;

	cout << "coding time = ";
	coding.show();

	cout << "fixing time = ";
	fixing.show();

//	total = coding.Sum(fixing);
	total = coding + fixing;
	total.show();

	Planning = coding.operator+(fixing);
	Planning.show();

	return 0;
}