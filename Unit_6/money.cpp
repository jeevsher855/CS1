#include <iostream>
#include <iomanip>
using namespace std;

// Jeevan Shergill

void normalizeMoney(float& dollars, int cents = 150);
// This function takes cents as an integer and converts it to dollars
// and cents. The default value for cents is 150 which is converted
// to 1.50 and stored in dollars

int main()
{
	int cents;
	float dollars;

	cout << setprecision(2) << fixed << showpoint;

	cout << "\n We will now add 95 cents to our dollar total\n";

	cents = 95;

	normalizeMoney(dollars, cents);

	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	cout << "\n We will now add 193 cents to our dollar total\n";

	cents = 193;
	normalizeMoney(dollars, cents);

	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	cout << "\n We will now add the default value to our dollar total\n";

	normalizeMoney(dollars);

	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	return 0;
}


void normalizeMoney(float& dollars, int cents)
{
	static float total;
	static float sum;


	dollars = float(cents) / 100;

	total = total + dollars;
	sum = sum + dollars;

	cout << "We have added another $" << dollars << "	to our total" << endl;
	cout << "Our total so far is	$" << sum << endl;

	cout << "The value of our local variable total is $" << total << endl;
}