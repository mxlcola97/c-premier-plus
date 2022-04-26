#include <iostream>
#include "mytime4.h"

using namespace std;

int main(void)
{
	Time coding(4, 35);
	Time fixing(2, 47);
	Time total;
	Time Planning;
	Time diff;
	Time adjusted;

	cout << "coding time = ";
//	coding.Show();
	cout << coding;

	cout << "fixing time = ";
//	fixing.Show();
	cout << fixing;

	total = coding + fixing;
//	total.Show();
	cout << total;

	diff = coding - fixing;
//	diff.Show();
	cout << diff;
	adjusted = coding * 1.5;
//	adjusted.Show();
	cout << adjusted;

	adjusted = 1.5 * coding;
//	adjusted.Show();
	cout << adjusted;

	cout << "************************" << endl;
	cout << coding << fixing;

	return 0;
}