#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// Jeevan Shergill

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
	float length;
	float width;
};
struct results
{
	float area;
	float perimeter;
};

struct rectangle
{
	results results;
	dimensions sizes;
};

float area(float, float);
float perimeter(float, float);

int main()
{

	rectangle box;

	cout << "Enter the length of a rectangle: ";
	cin >> box.sizes.length;

	cout << "Enter the width of a rectangle: ";
	cin >> box.sizes.width;


	cout << endl << endl;

	cout << fixed << showpoint << setprecision(2);

	cout << "The area of the rectangle is " << area(box.sizes.length, box.sizes.width) << endl;

	cout << "The perimeter of the rectangle is " << perimeter(box.sizes.length, box.sizes.width) << endl;

	return 0;


}
float area(float length, float width)
{
	float area;
	area = length * width;
	return area;
}
float perimeter(float length, float width)
{
	float perimeter;
	perimeter = 2 * length + 2 * width;
	return perimeter;
}