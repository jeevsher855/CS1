// This program reads in from the keyboard a record of financial information
// consisting of a person�s name, income, rent, food costs, utilities and
// miscellaneous expenses. It then determines the net money
// (income minus all expenses)and places that information in a record
// which is then written to an output file.

// Jeevan Shergill

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;

struct	budget	// declare a structure to hold name and financial information
{
	char name[NAMESIZE + 1];
	float income;		// person's monthly income 
	float rent;			// person's monthly rent
	float food;			// person's monthly food bill 
	float utilities;	// person's monthly utility bill 
	float miscell;		// person's other bills
	float net;			// person's net money after bills are paid
};

void getText(budget&, char&);



int main()
{
	fstream indata;
	ofstream outdata;	// output file of
						// student.
	char userinput = 'Y';

	indata.open("income.dat", ios::out | ios::binary | ios::app);	// open file as binary

	outdata.open("student.out");	// output file that we
									// will write student
									// information to. 

	outdata << left << fixed << setprecision(2);	// left indicates left
													// justified for fields
	budget person;	// defines person to be a record
	outdata << setw(20) << "Name" << setw(10) << "Income" << setw(10) << "Rent"
		    << setw(10) << "Food" << setw(15) << "Utilities" << setw(15)
		    << "Miscellaneous" << setw(10) << "Net Money" << endl << endl;





	while (userinput == 'Y' || userinput == 'y')
	{

		getText(person, userinput);
		cin.ignore(2, '\n');
		person.net = person.income - (person.rent + person.food + person.utilities + person.miscell);


		indata.write(reinterpret_cast<char*>(&person), sizeof(person));

		indata.close();

		indata.open("income.dat", ios::in | ios::binary | ios::app);

		indata.read(reinterpret_cast<char*>(&person), sizeof(person));

		outdata << setw(20) << person.name
		<< setw(10) << person.income
		<< setw(15) << person.rent
		<< setw(10) << person.food
		<< setw(15) << person.utilities
		<< setw(10) << person.miscell
		<< setw(15) << person.net << endl;


	}

	indata.close();
	outdata.close();

	return 0;
}
void getText(budget& person, char& userinput)
{
	cout << "Enter the following information" << endl;
	cout << "Person's name: ";
	cin.getline(person.name, NAMESIZE);
	cout << "Income: ";
	cin >> person.income;
	cout << "Rent: ";
	cin >> person.rent;
	cout << "Food: ";
	cin >> person.food;
	cout << "Utilities: ";
	cin >> person.utilities;
	cout << "Miscellaneous: ";
	cin >> person.miscell;

	cout << "Would you like to continue?: " ;
	cin >> userinput;

}
