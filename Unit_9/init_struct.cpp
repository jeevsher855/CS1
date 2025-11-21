#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// This program demonstrates partially initialized structure variables

// Jeevan Shergill

struct taxPayer
{
	string name;
	long socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main()
{

	taxPayer citizen1 = {"Tim McGuiness", 255871234, .35};
	taxPayer citizen2 = {"John Kane", 278990582, .29};

	cout << fixed << showpoint << setprecision(2);


	cout << "Please input the yearly income for " << citizen1.name << ": ";
	cin >> citizen1.income;

	citizen1.taxes = citizen1.taxRate * citizen1.income;

	cout << "Name: " << citizen1.name << endl;

	cout << "Social Security Number: " << citizen1.socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

	// calculate taxes due for citizen2


	cout << "Please input the yearly income for " << citizen2.name << ": ";
	cin >> citizen2.income;

	citizen2.taxes = citizen2.taxRate * citizen2.income;

	cout << "Name: " << citizen2.name << endl;

	cout << "Social Security Number: " << citizen2.socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;

	return 0;
}