#include <fstream>
#include <iostream>
using namespace std;

// Jeevan Shergill

const int MAXNAME = 20;

int main()
{
	ifstream inData;
	inData.open("grades.txt");

	char name[MAXNAME + 1];	// holds student name
	float average;			// holds student average

	inData.get(name, MAXNAME + 1);

	while (inData)
	{
		inData >> average;
		cout << name << "has a(n) " << average << " average ";
		cout << name << average << endl;
		inData.ignore(2, '\n');

		inData.get(name, MAXNAME + 1);

	}

	return 0;
}