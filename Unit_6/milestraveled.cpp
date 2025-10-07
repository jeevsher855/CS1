//
// Jeevan Shergill
//

#include <iostream>
#include <iomanip>
using namespace std;

void milesph(float miles, int hours, float& milesPerHour);

int main()
{
    int hours;
    float miles, mph;
    cout << "Please input the miles traveled" << endl;
    cin >> miles;
    cout << "Please input the hours traveled" << endl;
    cin >> hours;
    cout << fixed << setprecision(2) << showpoint;

    milesph(miles, hours, mph);
    cout << "Your speed is " << mph << " miles per hour" << endl;

    return 0;
}

void milesph(float miles, int hours, float& milesPerHour)
{
    milesPerHour = miles / hours;
}