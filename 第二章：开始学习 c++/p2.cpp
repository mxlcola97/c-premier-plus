#include <iostream>

int main(void)
{
	using namespace std;

	double distance;

	cout << "Enter the distance (in long):";
	cin >> distance;

	cout << "The distance " << distance << " long" << " equals " << 220 * distance << " yard." << endl;

	return 0;
}
