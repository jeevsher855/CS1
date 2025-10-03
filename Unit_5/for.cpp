// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Jeevan Shergill

#include <iostream>
using namespace std;

int main()
{
	int value, value2;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive numbers

	cout << "Please enter the first positive integer" << endl;
	cin >> value;
	cout << "Please enter the second positive integer" << endl;
	cin >> value2;

	if (value > 0)
	{
		for (number = value; number <= value2; number++)
		{
			total = total + number;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / (value2 - value + 1);	// note the use of the typecast
													// operator here 
		cout << "The mean average between the first integer " << value << " and the second integer "
		<< value2 << " is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}