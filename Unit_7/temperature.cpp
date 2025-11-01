//
// Created by Jeevan Shergill
//

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 50;
typedef float temps[SIZE];

float average_num(temps, int);
float highest(temps, int);
float lowest(temps, int);
int main()
{

    int num_temps;
    temps temp;
    int length = 0;


    cout << "Please input the number of temperatures to be read" << endl;
    cin >> num_temps;

    cout << showpoint << fixed << setprecision(2);

    for (int num = 1; num <= num_temps; num++)
    {
        cout << "Input temperature " << num << endl;
        cin >> temp[num - 1];
        length = length + num - 1;
    }
    cout << "The average temperature is " << average_num(temp, num_temps) << endl;
    cout << "The highest temperature is " << highest(temp, num_temps) << endl;
    cout << "The lowest temperature is " << lowest(temp, num_temps) << endl;
}

float average_num(temps arr, int length)
{
    float total = 0, average;
    for (int i = 0; i <= (length - 1); i++)
    {
        total = total + arr[i];
    }
    average = total / length;
    return average;
}
float highest(temps arr, int length)
{
    float highest = arr[0];

    for (int i = 1; i <= (length - 1); i++)
    {
        if (arr[i] > highest)
            highest = arr[i];
    }

    return highest;
}

float lowest(temps arr, int length)
{
    float lowest = arr[0];

    for (int i = 1; i <= (length - 1); i++)
    {
        if (arr[i] < lowest)
            lowest = arr[i];
    }

    return lowest;
}