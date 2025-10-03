//
// Created by Jeevan Shergill on 8/21/25.
//

#include <iostream>
using namespace std;

int main() {

    double kilometers, miles;

    // prompts user to entera number they want to convert
    cout << "Enter the amount of kilometers to convert to miles: " << endl;
    cin >> kilometers;

    // makes miles equal to kilometers times the conversion factor 0.621
    miles = kilometers * 0.621;

    // displays the answer
    cout << kilometers <<" kilometers is " <<  miles << " miles";

    return 0;
}