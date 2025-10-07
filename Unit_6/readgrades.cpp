//
// Jeevan Shergill
//

#include <iostream>
using namespace std;


void averageGrade(float grades, int numGrades, char& letterGrade);

int main()
{
    int numberGrades;
    float scores, totalScores = 0;
    char letterGrade;

    cout << "Enter the number of grades" << endl;
    cin >> numberGrades;
    for (int num = 1; num <= numberGrades; num++)
    {
        cout << "Enter a numeric grade between 0-100" << endl;
        cin >> scores;
        totalScores += scores;
    }
    averageGrade(totalScores, numberGrades, letterGrade);
    cout << "The grade is " << letterGrade << endl;

    return 0;
}

void averageGrade(float grades, int numGrades, char& letterGrade)
{
    float average;

    average = grades / numGrades;

    if (average >= 90 && average <= 100)
        letterGrade = 'A';
    else if (average >= 80 && average < 90)
        letterGrade = 'B';
    else if (average >= 70 && average < 80)
        letterGrade = 'C';
    else if (average >= 60 && average < 70)
        letterGrade = 'D';
    else
        letterGrade = 'F';
}