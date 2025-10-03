// This program finds the average time spent programming by a student
// each day over a three day period.

// Jeevan Shergill

#include <iostream>
using namespace std;

int main()
{
	int numStudents, numDays;
	float numHoursP, numHoursB, total, totalB, totalP, average, averageP, averageB;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming and doing biology over a long weekend\n\n";
	cout << "How many students are there ?" << endl;
	cin >> numStudents;
	cout << "Enter the number of days in the long weekend" << endl;
	cin >> numDays;
	for (student = 1; student <= numStudents; student++)
	{
		total = 0;
		totalP = 0;
		totalB = 0;

		for (day = 1; day <= numDays; day++)
		{
			cout << "Please enter the number of hours of programming worked by student "
				 << student << " on day " << day << "." << endl;
			cin >> numHoursP;
			cout << "Please enter the number of hours of biology worked by student "
				 << student << " on day " << day << "." << endl;
			cin >> numHoursB;

			totalB += numHoursB;
			totalP += numHoursP;
			total = total + numHoursP + numHoursB;
		}

		average = total / numDays;
		averageB = totalB / numDays;
		averageP = totalP / numDays;
		cout << endl;
		cout << "The average number of hours per day spent by " << "student " << student <<
				" is " << average << " hours with " << averageP << " hours on programming and " << averageB
				<< " hours on biology" << endl;
		if (numHoursP > numHoursB)
			cout << "They spent more time on average programming then doing biology "
				<< endl << endl;
		else if (numHoursP < numHoursB)
			cout << "They spent more time on average doing biology then programming "
				<< endl << endl;
		else
			cout << "They spent the same amount of time on average doing biology and programming "
				<< endl << endl;

	}

	return 0;
}