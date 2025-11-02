//
// Created by Jeevan Shergill
//

#include <iostream>
#include <iomanip>
using namespace std;

float dentist_bill(float, float);
float dentist_bill(float, float, float);

int main()
{
    int dent_plan;
    float serv_charge, test_charge, medicine_charge, total;

    cout << "Please input a one if you are a member of the dental plan" << endl;
    cout << "Input any other number if you are not" << endl;
    cin >> dent_plan;
    cout << fixed << setprecision(2) << showpoint;

    if (dent_plan == 1)
    {
        cout << "Please input the service charge" << endl;
        cin >> serv_charge;
        cout << "Please input the test charges" << endl;
        cin >> test_charge;
        total = dentist_bill(serv_charge, test_charge);
        cout << "The total bill is $" << total << endl;
    }
    else
    {
        cout << "Please input the service charge" << endl;
        cin >> serv_charge;
        cout << "Please input the test charges" << endl;
        cin >> test_charge;
        cout << "Please input the medicine charges" << endl;
        cin >> medicine_charge;
        total = dentist_bill(serv_charge, test_charge, medicine_charge);
        cout << "The total bill is $" << total << endl;
    }
}

float dentist_bill(float serv, float test)
{
    float total;
    total = serv + test;

    return total;
}

float dentist_bill(float serv, float test, float med)
{
    float total;
    total = serv + test + med;

    return total;
}