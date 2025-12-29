#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main()

{
	cout << fixed << setprecision(2);
	cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit"
		<< "  |  "
		<< setw(15) << "Fahrenheit" << setw(15) << "Celsius" << endl;
	double cel = 40.0;
	double fah = 120.0;
	while (cel >= 31.0)
	{
		double fah_val = celsius_to_fah(cel);
		double cel_val = fahrenheit_to_cels(fah);
		cout << setw(10) << cel << setw(15) << fah_val
			<< "  |  "
			<< setw(15) << fah << setw(15) << cel_val << endl;
		cel -= 1.0;
		fah -= 10.0;
	}
	return 0;
}