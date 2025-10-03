/*
Purpose of this program is to find the average of three grades and print it
Name: Jeevan Shergill
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double grade1, grade2, grade3, average;

    cout << "Please input the first grade " << endl;
    cin >> grade1;
    cout << "Please input the second grade " << endl;
    cin >> grade2;
    cout << "Please input the third grade " << endl;
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3;
    cout << setprecision(2) << fixed;
    cout << "The average of the three grades is " << average;

    return 0;
}

