/*
 Purpose: To calculate the average water bill for four quarters
 By: Jeevan Shergill
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float q1, q2, q3, q4, average_Bill;
    cout << "Please input your water bill for quarter 1: " << endl;
    cin >> q1;

    cout << "Please input your water bill for quarter 2: " << endl;
    cin >> q2;

    cout << "Please input your water bill for quarter 3: " << endl;
    cin >> q3;

    cout << "Please input your water bill for quarter 4: " << setprecision(2) << fixed << showpoint << endl;
    cin >> q4;

    average_Bill = (q1 + q2 + q3 + q4) / 4;

    if (average_Bill > 75)
        cout << "Your average monthly bill is $" << average_Bill << ". You are using excessive amounts of water." << endl;
    else if (average_Bill >= 25 && average_Bill <= 75)
        cout << "Your average monthly bill is $" << average_Bill << ". You are using a typical amount of water." << endl;
    else
        cout << "Your average monthly bill is $" << average_Bill << ". You aren't using that much water, great job!" << endl;

    return 0;
}