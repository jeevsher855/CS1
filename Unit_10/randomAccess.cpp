#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

// Jeevan Shergill

int main()
{
	fstream inFile("proverb.txt", ios::in);
	long offset;
	char ch;
	char more;


	inFile.seekg(0, ios::end);

	do
	{


		cout << "The read position is currently at byte " << inFile.tellg() << endl;

		cout << "Enter an offset from the current read position: ";
		cin >> offset;

		inFile.seekg(offset, ios::cur);


		inFile.get(ch);
		cout << "The character read is " << ch << endl;
		cout << "If you would like to input another offset enter a Y"
			 << endl;
		cin >> more;


		inFile.clear();

	} while (toupper(more) == 'Y');

	inFile.close();

	return 0;
}