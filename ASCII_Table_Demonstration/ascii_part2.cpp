// Program made by Jeevan Shergill

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "Character" << setw(15) << "ASCII Value" << endl;
    cout << "------------------------" << endl;
    for (int num = '0'; num <= '9'; ++num)
        cout << setw(4) << char(num) << setw(15) << num << endl;
    for (int num = 'A'; num <= 'D' && num >= 'A'; ++num)
        cout << setw(4) << char(num) << setw(15) << num << endl;
    for (int num = 'E'; num <= 'H' && num >= 'E'; ++num)
        cout << setw(4) << char(num) << setw(15) << num << endl;
}