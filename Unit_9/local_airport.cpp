//
// Created by Jeevan Shergill on 11/18/25.
//

#include <iostream>
#include <string>
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
    int overall_greatest_day = -1, greatest_index = 0;
    int overall_least_day = 100000000, least_index = 0; // physically impossible number for planes in one day

    string Months[SIZE] = {"January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "December"};


    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the total number of planes that landed in " << Months[i] << endl;
        cin >> months[i].landed;
        cout << "Enter the total number of planes that departed in " << Months[i] << endl;
        cin >> months[i].departed;
        cout << "Enter the greatest number of planes that landed in a single day for " << Months[i] << endl;
        cin >> months[i].greatest_landed_day;
        cout << "Enter the least number of planes that landed in a  single day for " << Months[i] << endl;
        cin >> months[i].least_landed_day;

        total_landed_year += months[i].landed;
        total_departed_year += months[i].departed;

        if (months[i].greatest_landed_day > overall_greatest_day)
        {
            overall_greatest_day = months[i].greatest_landed_day;
            greatest_index = i;
        }

        if (months[i].least_landed_day < overall_least_day)
        {
            overall_least_day = months[i].least_landed_day;
            least_index = i;
        }

    }

        avg_landed_month = total_landed_year / SIZE;
        avg_departed_month = total_departed_year / SIZE;



    cout << "Average Monthly Landing Planes: " << avg_landed_month << endl;
    cout << "Average Monthly Departing Planes: " << avg_departed_month << endl;
    cout << "Annual number of Landing & Departing Planes " << total_landed_year + total_departed_year << endl;
    cout << "The greatest amount of planes that landed on one day occurred in the month of " <<
        Months[greatest_index] << " being " << overall_greatest_day << endl;
    cout << "The least amount of planes that landed on one day occurred in the month of " <<
        Months[least_index] << " being " << overall_least_day << endl;

    return 0;
}