// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Jeevan Shergill

#include <iostream>
#include <string>
using namespace std;

void writeProverb(string number);

int main()
{
	string wordCode;


	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;

	cout << "Please input the word you would like to have finish the proverb" << endl;
	cin >> wordCode;
	cout << endl;

	writeProverb(wordCode);

	return 0;
}

void writeProverb(string number)
{
	cout << "Now is the time for all good men to come to the aid of their " << number << endl;
}