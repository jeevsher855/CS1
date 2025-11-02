//
// Created by Jeevan Shergill
//

#include <iomanip>
#include <iostream>
using namespace std;

const int SIZE = 500;


void ASCII_Table(char, char, char ASCII[], int Values[], int&);

int main()
{
    char ASCII[SIZE];
    int Values[SIZE];
    int num_grades = 0;

    cout << "Character" << setw(15) << "ASCII Value" << endl;
    cout << "------------------------" << endl;

    ASCII_Table('0','9', ASCII, Values, num_grades);
    ASCII_Table('A','Z', ASCII, Values, num_grades);
    ASCII_Table('a','z', ASCII, Values, num_grades);

    for (int i = 0; i < num_grades; i++)
        cout << setw(4) << ASCII[i] << setw(15) << Values[i] << endl;

    return 0;
}

void ASCII_Table(char A, char B,  char ASCII[], int Values[], int& num_grades)
{
    for (static int i = 0; A <= B; A++)
    {
        ASCII[i] = A;
        Values[i] = int(A);
        i++;
        num_grades = i;
    }
}