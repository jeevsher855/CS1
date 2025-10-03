/*Write a program that asks the user to input the number of seconds that the watermelon falls and the
 *height h of the bridge above the water. The program should then calculate the distance fallen for each
 *second from t = 0 until the value of t input by the user. If the total distance fallen is greater than
 *the height of the bridge, then the program should tell the user that the distance fallen is not valid.
 Jeevan Shergill
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    double height, dist_fall, g;
    int time, num = 0;

    cout << "Please input the time of fall in seconds" << endl;
    cin >> time;
    cout << "Please input the height of the bridge in meters" << endl;
    cin >> height;
    cout << "Time Falling (seconds)" << setw(25) << "Distance Fallen (meters)" << endl;
    cout << "***********************************************" << endl;
    while (num >= 0 && num <= time)
    {
        dist_fall = 0.5 * 9.8 * (num * num);
        cout << setprecision(1) << fixed << showpoint;
        cout << num << setw(25) << dist_fall << endl;
        num++;
        if (dist_fall > height)
        {
            cout << "Warning-Bad Data: The distance fallen exceeds the height of the bridge" << endl;
            return 0;
        }

    }
    return 0;
}
