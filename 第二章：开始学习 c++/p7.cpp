#include <iostream>

using namespace std;

void display_time(int h, int m);

int main(void)
{
	int hours, minutes;

	cout << "Enter the number of hour:";
	cin >> hours;

	cout << "Enter the nunber of minutes:";
	cin >> minutes;

	display_time(hours, minutes);

	return 0;
}

void display_time(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl; 
}
