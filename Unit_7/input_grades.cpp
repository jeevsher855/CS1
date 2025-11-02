//
// Created by Jeevan Shergill.
//

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 50;

int countGrades(char grade[], int SIZE, char letter);

int main()
{
    char grade[SIZE];
    int num_grades;

    cout << "Please input the number of grades to be read in. (1-50)" << endl;
    cin >> num_grades;

    for (int i = 1; i <= num_grades; i++)
    {
        cout << "Input a grade" << endl;
        cin >> grade[i - 1];
    }

    cout << "Number of A = " << countGrades(grade, num_grades, 'A') << endl;
    cout << "Number of B = " << countGrades(grade, num_grades, 'B') << endl;
    cout << "Number of C = " << countGrades(grade, num_grades, 'C') << endl;
    cout << "Number of D = " << countGrades(grade, num_grades, 'D') << endl;
    cout << "Number of F = " << countGrades(grade, num_grades, 'F') << endl;

    return 0;
}

int countGrades(char grade[], const int SIZE, char letter)
{
    int count = 0;

    for (int i = 0; i <= SIZE; i++)
    {
        if (grade[i] == letter)
        {
            count++;
        }
    }
    return count;
}