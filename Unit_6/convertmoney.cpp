#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Jeevan Shergill

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;

	convertMulti(dollars, euros, pesos);
	cout << "$" << dollars << " is converted to " << euros << " euros and " << pesos << " pesos" << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

	convertMulti(dollars, euros, pesos, yen);
	cout << "$" << dollars << " is converted to " << euros << " euros, " <<
		pesos << " pesos, and " << yen << " yen" << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" << endl;
	cin >> dollars;


	convertToYen(dollars);
	cout << "$" << dollars << " is converted to " << yen << " yen" << endl;


	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;

	convertToEuros(dollars);
	cout << "$" << dollars << " is converted to " << euros << " euros" << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;

	convertToPesos(dollars);
	cout << "$" << dollars << " is converted to " << pesos << " pesos" << endl;


	return 0;
}


void convertMulti(float dollars, float& euros, float& pesos)
{
	cout << "The function convertMulti with dollars, euros and pesos "
		 << endl << " was called with " << dollars << " dollars" << endl << endl;

	euros = dollars * 1.06;
	pesos = dollars * 9.73;
}



void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	cout << "The function convertMulti with dollars, euros, pesos and yen"
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
	euros = dollars * 1.06;
	pesos = dollars * 9.73;
	yen = dollars * 124.35;
}


float convertToYen(float dollars)
{
	cout << "The function convertToYen was called with " << dollars << " dollars"
		 << endl << endl;

	dollars = dollars * 124.35;

	return dollars;
}



float convertToEuros(float dollars)
{
	cout << "The function convertToEuros was called with " << dollars
		 << " dollars" << endl << endl;

	dollars = dollars * 1.06;

	return dollars;
}



float convertToPesos(float dollars)
{
	cout << "The function convertToPesos was called with " << dollars
		 << " dollars" << endl;

	dollars = dollars * 9.73;

	return dollars;
}