//
// Created by Jeevan Shergill on 11/18/25.
//

#include <iostream>

using namespace std;

const int SIZE = 12;

struct airport
{
    int landed;
    int departed;
    int greatest_landed_day;
    int least_landed_day;
};

int main()
{
    airport months[SIZE];
    int total_landed_year = 0;
    int total_departed_year = 0;
    int avg_landed_month = 0;
    int avg_departed_month = 0;


    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the total number of planes that landed in month" << i + 1 << endl;
        cin >> months[i].landed;
        cout << "Enter the total number of planes that departed in month" << i + 1 << endl;
        cin >> months[i].departed;
        cout << "Enter the greatest number of planes that landed in a single day for month " << i + 1 << endl;
        cin >> months[i].greatest_landed_day;
        cout << "Enter the least number of planes that landed ina  single day for month " << i + 1 << endl;
        cin >> months[i].least_landed_day;

        total_landed_year += months[i].landed;
        total_departed_year += months[i].departed;

    }

    avg_landed_month = total_landed_year / SIZE;
    avg_departed_month = total_departed_year / SIZE;

    // need to do greatest and least number of planes that landed on any one day (and which month it occurred in)
    return 0;
}