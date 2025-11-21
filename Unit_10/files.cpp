// This program uses hours, pay rate, state tax and fed tax to determine gross
// and net pay.

// Jeevan Shergill

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream payfile;
	ofstream payfile_out;

	float gross;
	float net;
	float hours;
	float payRate;
	float stateTax;
	float fedTax;

	cout << fixed << setprecision(2) << showpoint;

	payfile.open("payroll.dat", ios::in);
	payfile_out.open("pay.out.dat", ios::out);

	if (!payfile)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1;
	}

	payfile_out <<  "Payrate	Hours	Gross Pay	Net Pay"
	     << endl << endl;

		payfile >> payRate >> hours >> stateTax >> fedTax;

	while (payfile)
	{

		gross = payRate * hours;

		net = gross - (gross * stateTax) - (gross * fedTax);

		payfile_out << payRate << setw(15) << hours << setw(12) << gross
			 << setw(12) << net << endl;

		payfile >> payRate >> hours >> stateTax >> fedTax;
	}

	payfile.close();

	return 0;
}