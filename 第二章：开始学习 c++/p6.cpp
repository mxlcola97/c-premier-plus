#include <iostream>

double convert(double light);

using namespace std;

int main(void)
{
	double light_years, astro_years;

	cout << "Enter the number of light years:";
	cin >> light_years;

	astro_years = convert(light_years);

	cout << light_years << " light years = " << astro_years << " astronomical units." << endl;

	return 0;
}

double convert(double light)
{
	return 63240 * light;
}
