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
    cout << "Please input I if you are in-state or O if you are out-of-state: " << endl;
    cin >> residential_status;
    cout << "Please input Y if you require room and board and N if you do not: " << endl;
    cin >> room_status;

    if (residential_status == "I" && room_status == "Y")
        cout << "Your total bill for this semester is $" << 3000 + 2500 << endl;
    else if (residential_status == "I" && room_status == "N")
        cout << "Your total bill for this semester is $" << 3000 << endl;
    else if (residential_status == "O" && room_status == "Y")
        cout << "Your total bill for this semester is $" << 4500 + 3500 << endl;
    else if (residential_status == "O" && room_status == "N")
        cout << "Your total bill for this semester is $" << 4500 << endl;
    else
        cout << "Please input the designated letters as stated above." << endl;
}