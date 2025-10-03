/*
Purpose of this program is to find amount of total sales
a business generates for a particular month.
Name: Jeevan Shergill
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double total_sales, state_tax, local_tax;

    cout << "Please input the total sales for the month" << endl;
    cin >> total_sales;
    cout << "Please input the state tax percentage in decimal form (.02 for 2%)" << endl;
    cin >> state_tax;
    cout << "Please input the local tax percentage in decimal form (.02 for 2%)" << endl;
    cin >> local_tax;

    state_tax = state_tax * total_sales;
    local_tax = local_tax * total_sales;

    cout << setprecision(2) << fixed;
    cout << "The total sales for the month is $" << total_sales << endl;
    cout << "The state tax for the month is $" << state_tax << endl;
    cout << "The local tax for the month is $" << local_tax << endl;

    return 0;
}