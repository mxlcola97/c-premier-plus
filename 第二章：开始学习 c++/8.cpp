#include <iostream>

void simon(int n);

//using namespace std;

int main(void)
{
//	using namespace std;

	simon(3);

	std::cout << "Pick an integer: ";
	int count;
	std::cin >> count;
	simon(count);
	std::cout << "Done!" << std::endl;

	return 0;
}

void simon(int n)
{
//	using namespace std;

	std::cout << "Simon says touch your toes " << n << " times." << std::endl;
}
