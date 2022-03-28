#include <iostream>

int stonetolb(int sts);

int main(void)
{
	using namespace std;

	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;

	int pounds = stonetolb(stone);

	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;

	return 0;
}

//1 stone = 14lbs
int stonetolb(int sts)
{
//	int pounds = 14 * sts;

	return 14 * sts;//return pounds;
}
