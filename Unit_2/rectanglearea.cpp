// This program will calculate the area and perimeter of a rectangle
// Created by Jeevan Shergill on 8/28/25.
//


#include <iostream>
using namespace std;

const int length = 8;
const int width = 3;

int main()
{
    int area, perimeter; // defines both the area and the perimeter
    area = length * width; // formula for area of a rectangle
    perimeter = (2 * length) + (2 * width); // formula for perimeter of a rectangle

    cout << "The area of the rectangle is " << area << endl; // prints the area
    cout << "The perimeter of the area is " << perimeter; // prints the perimeter

    return 0;
}