//
// Created by Jeevan Shergill
//
#include <iostream>
#include <iomanip>
using namespace std;

int baseball_wins();
int baseball_loses();
void percent_wins(int, int);

int main()
{
    percent_wins(baseball_loses(), baseball_wins());

    return 0;
}

int baseball_wins()
{
    int wins;

    cout << "Please enter the number of wins" << endl;
    cin >> wins;
    return wins;
}

int baseball_loses()
{
    int losses;

    cout << "Please enter the number of losses" << endl;
    cin >> losses;
    return losses;
}

void percent_wins(int loses, int wins)
{
    float percent;

    percent = (float(wins) / (wins + loses)) * 100;
    cout << "The percentage of wins is " << setprecision(2) << fixed << percent << "%" << endl;
}