//
// Created by Jeevan Shergill on 10/14/25.
//

#include <iostream>

using namespace std;


float km_to_mi(float);
float mi_to_km(float);

int main ()
{
    int userInput;
    float km, mi;
    do
    {
        cout << "Please input" << endl;
        cout << "1 Convert miles to kilometers" << endl;
        cout << "2 Convert kilometers to miles" << endl;
        cout << "3 Quit" << endl;
        cin >> userInput;

        if (userInput == 1)
        {
            cout << "Please input the miles to be converted" << endl;
            cin >> mi;
            cout << mi << " miles = " << mi_to_km(mi) << " kilometers " << endl;
        }
        else if (userInput == 2)
        {
            cout << "Please input the kilometers to be converted" << endl;
            cin >> km;
            cout << km << " kilometers = " << km_to_mi(km) << " miles" << endl;
        }
        else
            break;
    }

    while (userInput != 3);
    return 0;
}

float km_to_mi(float km)
{
    float mi;

    mi = km * 0.621;
    return mi;
}

float mi_to_km(float mi)
{
    float km;

    km = mi / 0.621;
    return km;
}