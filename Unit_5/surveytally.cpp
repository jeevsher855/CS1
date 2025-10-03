// Purpose: Prompt for the next person until a sentinel value of -1 is entered to terminate the program
// Created by Jeevan Shergill on 10/2/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int bev, coffee, tea, coke, oj;

int main()
{

    while (bev != -1)
    {
        cout << "Please input the favorite beverage of person #1: ";
        cout << "Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
        cin >> bev;
        switch (bev)
        {
            case 1:
                ++coffee;
                break;
            case 2:
                ++tea;
                break;
            case 3:
                ++coke;
                break;
            case 4:
                ++oj;
                break;
            case -1:
                break;
            default:
                cout << "Please input a valid number" << endl;
                break;
        }
    }

    cout << "Beverage" << setw(25) << "Number of Votes" << endl;
    cout << "*********************************" << endl;
    cout << "Coffee" << setw(13) << coffee << endl;
    cout << "Tea" << setw(16) << tea << endl;
    cout << "Coke" << setw(15) << coke << endl;
    cout << "Orange Juice" << setw(7) << oj << endl;

}