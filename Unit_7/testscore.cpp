// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Jeevan Shergill

#include <iostream>
#include <fstream>
using namespace std;

typedef int GradeType[100];		// declares a new data type:
								// an integer array of 100 elements

float findAverage(const GradeType, int);	// finds average of all grades 
int  findHighest(const GradeType, int);		// finds highest of all grades 
int  findLowest(const GradeType, int);		// finds lowest of all grades

int main()
{
	GradeType grades;	// the array holding the grades. 
	int numberOfGrades;	// the number of grades read.
	int pos;			// index to the array.
	float avgOfGrades;	// contains the average of the grades. 
	int highestGrade;	// contains the highest grade.
	int lowestGrade;	// contains the lowest grade.


	// Read in the values into the array
	pos = 0;
	cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;


	ifstream dataIn;
	ofstream dataOut;

	dataIn.open("gradfile.txt");

	dataIn >> grades[pos];

	int grade;



	while (pos < 100 && dataIn >> grade)
	{
		pos++;
		grades[pos] = grade;

	}



	numberOfGrades = pos + 1;

	avgOfGrades = findAverage(grades, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;

	highestGrade = findHighest(grades, numberOfGrades);
	cout << endl << "The highest grade is " << highestGrade << endl;

	lowestGrade = findLowest(grades, numberOfGrades);
	cout << endl << "The lowest grade is " << lowestGrade << endl;

	return 0;
}


float findAverage(const GradeType	array, int size)
{
	float sum = 0;			// holds the sum of all the numbers

	for (int pos = 0; pos < size; pos++)
		sum = sum + array[pos];

	return (sum / size);	// returns the average
}


int	findHighest(const GradeType array, int size)
{
	// Fill in the code for this function

	int high = array[0];
	for (int pos = 1; pos < size; pos++)
	{
		if (array[pos] > high)
		{
			high = array[pos];
		}
	}
	return high;

}

int	findLowest(const GradeType array, int size)
{

	int low = array[0];
	for (int pos = 1; pos < size; pos++)
	{
		if (array[pos] < low)
			low = array[pos];
	}

	return low;
}