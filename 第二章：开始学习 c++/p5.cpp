#include <iostream>

double convert(double c);

using namespace std;

int main(void)
{
	double c_degree, f_degree;

	cout << "Please enter a Celsius value:";
	cin >> c_degree;

	f_degree = convert(c_degree);

	cout << c_degree << " degrees Celsius is " << f_degree << " degrees Fahrenheit" << endl; 

	return 0;
}

double convert(double c)
{
	return 1.8 * c + 32.0;
}
