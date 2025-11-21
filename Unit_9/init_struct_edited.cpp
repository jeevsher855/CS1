// Jeevan Shergill

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int SIZE = 6;

struct Circles
{
	float x_center;
	float y_center;
	float distance;
};

float calculate_dist(Circles);

int main()
{
	int min_dist;
	Circles citizens[6] =
	{
		{0.9,0.2,},
		{1,1,},
		{2,2,},
		{3,3,},
		{4,4,},
		{5,5,},
	};


	cout << fixed << showpoint << setprecision(2);

	for (int i = 1; i < SIZE; i++)
	{
		float variable = calculate_dist(citizens[0]);
		if (calculate_dist(citizens[i]) < variable)
		{
			min_dist = i;
		}

	}
	cout << "The circle with an x center of " << citizens[min_dist].x_center << " and a y center of " << citizens[min_dist].y_center;
	cout << " is the closest to the origin (0,0) with a distance of " << calculate_dist(citizens[min_dist]) << endl;
	return 0;
}

float calculate_dist(Circles temp)
{
	temp.distance = sqrt(pow(temp.x_center, 2) + pow(temp.y_center, 2));
	return temp.distance;
}
