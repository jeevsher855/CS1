// This program demonstrates the use of characters and strings

// Jeevan Shergill

#include <iostream>
#include <string>
using namespace std;

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle";	// use double quotes for strings 
const char BESTRATING = 'A';				// use single quotes for characters

int main()
{
	char rating = 'B';			// 2nd highest product rating
	string favoriteSnack = "crackers";	// most preferred snack
	int numberOfPeople = 250;		// the number of people in the survey
	int topChoiceTotal = 148;		// the number of people who prefer the top choice


	cout << "The preferred soda is " << FAVORITESODA << endl; // Prints favorite soda
	cout << "The preferred snack is " << favoriteSnack << endl; // Prints favorite snack
	cout << "Out of " << numberOfPeople << " people "; // Prints total number of people who voted
	cout << topChoiceTotal << " chose these items!" << endl; // Prints number of people who voted for favorites
	cout << "Each of these products were given a rating of " << BESTRATING; // Prints best rating
	cout << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating // Prints rating of other products
		 << endl;

	return 0;
}