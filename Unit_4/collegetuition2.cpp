/*
Purpose: To compute price of college tuition at University of Guiness
By: Jeevan Shergill
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string residential_status, room_status;
    int total;
    cout << "Please input I if you are in-state or O if you are out-of-state: " << endl;
    cin >> residential_status;
    cout << "Please input Y if you require room and board and N if you do not: " << endl;
    cin >> room_status;

    if (residential_status == "I" && room_status == "Y")
        total = 3000 + 2500;
    else if (residential_status == "I" && room_status == "N")
        total = 3000;
    else if (residential_status == "O" && room_status == "Y")
        total = 4500 + 3500;
    else if (residential_status == "O" && room_status == "N")
        total = 4500;
    else
    {
        cout << "Please input the designated letters as stated above." << endl;
        exit(0);
    }

    cout << "Your total bill for this semester is $" << total << endl;
}