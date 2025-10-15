#include <iostream>
#include <iomanip>
using namespace std;

// This program will demonstrate the scope rules.

// Jeevan Shergill

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;

	cout << " Main function outer block" << endl;
	cout << " radius, PI, and RATE are active here" << endl << endl;

	{
		float area;

		cout << "Main function first inner block" << endl;
		cout << "area, radius, PI, and RATE are active here" << endl << endl;

		findArea(radius, area);

		cout << "The radius = " << radius << endl;
		cout << "The area = " << area << endl << endl;
	}

	{
		float radius = 10;
		float circumference;

		cout << "Main function second inner block" << endl;
		cout << "radius, circumference, PI, and RATE are active here" << endl << endl;

		findCircumference(radius, circumference);

		cout << "The radius = " << radius << endl;
		cout << "The circumference = " << circumference << endl << endl;
	}

	cout << "Main function after all the calls" << endl;
	cout << "radius, PI, and RATE are active here" << endl << endl;

	return 0;
}


void findArea(float rad, float& answer)
{
	cout << "AREA FUNCTION" << endl << endl;
	cout << "rad, answer, and area are active here" << endl << endl;

	answer = PI * (rad * rad);
}


void findCircumference(float length, float& distance)
{
	cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
	cout << "length, distance, radius, and circumference are active here" << endl << endl;

	distance = 2 * PI * length;
}