#include <iostream>
#include "stonewt.h"

using namespace std;

int main(void)
{
	Stonewt incognito = 275;//Stonewt incognito(275); Stonewt incognito = Stonewt(275);
	Stonewt wolfe(285.7); //Stonewt(double );
	Stonewt taft(21, 8);

	incognito.show_stn();
	wolfe.show_stn();
	taft.show_lbs();

	cout << "-------------------------" << endl;
	incognito = 276.8;
	taft = 325;
	incognito.show_stn();
	taft.show_lbs();

	return 0;
}
