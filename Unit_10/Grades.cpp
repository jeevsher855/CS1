#include <fstream>// FILL IN DIRECTIVE FOR FILES
#include <iostream>
#include <iomanip>
using namespace std;

// This program reads records from a file. The file contains the
// following: student�s name, two test grades and final exam grade.
// It then prints this information to the screen.

// Jeevan Shergill

const int NAMESIZE = 15;
const int MAXRECORDS = 50;

struct Grades	// declares a structure
{
	char name[NAMESIZE + 1];
	int test1;
	int test2;
	int final;
	char letter;
};

typedef Grades gradeType[MAXRECORDS];
// This makes gradeType a data type
// that holds MAXRECORDS
// Grades structures.

void readIt(ifstream&, gradeType, int&);
char int_to_char(int);
int main()
{
	ifstream indata;

	indata.open("graderoll.dat");

	int numRecord;	// number of records read in
	int grades;

	gradeType studentRecord;

	if (!indata)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;

		return 1;
	}


	readIt(indata, studentRecord, numRecord);

	// output the information
	for (int count = 0; count < numRecord; count++)
	{
		cout << studentRecord[count].name << setw(10)
			 << studentRecord[count].test1
			 << setw(10) << studentRecord[count].test2;
		cout << setw(10) << studentRecord[count].final;
		grades = (0.3 * (studentRecord[count].test1 + studentRecord[count].test2) / 2 + 0.4 * studentRecord[count].final) / 0.7;
		studentRecord[count].letter = int_to_char(grades);
		cout << setw(10) << studentRecord[count].letter << endl;
	}

	return 0;
}

//**************************************************************
//	readIt
//
//	task:	  This procedure reads records into an array of
//	          records from an input file and keeps track of the
//	          total number of records
//	data in:  data file containing information to be placed in
//	          the array
//	data out: an array of records and the number of records
//
//**************************************************************

void readIt(ifstream& inData, gradeType gradeRec, int& total)
{
	total = 0;

	inData.get(gradeRec[total].name, NAMESIZE);

	while (inData)
	{
		inData >> gradeRec[total].test1;

		inData >> gradeRec[total].test2;

		inData >> gradeRec[total].final;
		total++;

		// FILL IN THE CODE TO CONSUME THE END OF LINE
		inData.ignore(100, '\n');
		// FILL IN THE CODE TO READ name
		inData.get(gradeRec[total].name, NAMESIZE);
		// first parameter is where the data goes
		// second is amount of characters read

	}

}
char int_to_char(int average)
{
	if (average >= 90 && average <= 100)
		return 'A';
	else if (average >= 80 && average < 90)
		return 'B';
	else if (average >= 70 && average < 80)
		return 'C';
	else if (average >= 60 && average < 70)
		return 'D';
	else
		return 'F';
}