//
// Created by Jeevan Shergill
//


#include <iostream>

using namespace std;

const int TOTALYEARS = 100;



int main()
{
    int ageFrequency[TOTALYEARS];
    int currentAge = 0;
    for (int& pos : ageFrequency)
    {
        pos = 0;
    }

    while (currentAge != -99)
    {
        ageFrequency[currentAge - 1] += 1; // to cycle easier b/c agecounter = 0
        cout << "Please input an age from one to 100. input -99 to stop" << endl;
        cin >> currentAge;
    }

    for (int ageCounter = 0; ageCounter < TOTALYEARS; ageCounter++)
        if (ageFrequency[ageCounter] > 0)
            cout << "The number of people " << ageCounter + 1 << " years old is " << ageFrequency[ageCounter] << endl;

    return 0;
}