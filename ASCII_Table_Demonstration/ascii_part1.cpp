// Program made by Jeevan Shergill

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char MAX = '0', MAX2 = 'A';

    cout << "Character" << setw(15) << "ASCII Value" << endl;
    cout << "------------------------" << endl;
    while (MAX <= '9')
    {
        cout << setw(4) << MAX << setw(15) << int(MAX) << endl;
        MAX++;
    }

    do
    {
        cout << setw(4) << MAX2 << setw(15) << int(MAX2) << endl;
        MAX2++;
    }
    while (MAX2 <= 'D');


    for (int num = 'E'; num <= 'H'; ++num)
        cout << setw(4) << char(num) << setw(15) << num << endl;

}