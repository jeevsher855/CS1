//
// Created by Jeevan Shergill on 11/4/25.
//

#include <iostream>
using namespace std;

const int SIZE = 10;

int main()
{
    char last[SIZE];

    cout << "Please enter your last name (no more than 9 characters)" << endl;
    cin.getline(last, SIZE);

    cout << last << endl;

    return 0;
}