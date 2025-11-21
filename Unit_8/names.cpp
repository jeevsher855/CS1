//
// Created by Jeevan Shergill on 11/4/25.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{

    char name1[25], name2[25];
    int order;

    cout << "Please input the first name" << endl;
    cin.getline(name1, 25);
    cout << "Please input the second name" << endl;
    cin.getline(name2, 25);

    order = strcmp(name1, name2);
    cout << "The names are as follows:" << endl;
    if (order < 0)
        cout << name1 << endl << name2 << endl;
    else if (order > 0)
        cout << name2 << endl << name1 << endl;
    else
    {
        cout << name1 << endl << name2 << endl;
        cout << "The names are the same" << endl;
    }

    return 0;


}