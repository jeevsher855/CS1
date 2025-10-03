// Jeevan Shergill

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	do
		{
		cout << "Please enter a letter (type x to quit)" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	}
	while (letter != 'x');

	return 0;
}