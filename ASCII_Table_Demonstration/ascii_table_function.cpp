//
// Jeevan Shergill
//

#include <iostream>
#include <iomanip>
using namespace std;

void ascii_table(char A, char B);

int main ()
{
    cout << "Character" << setw(15) << "ASCII Value" << endl;
    cout << "------------------------" << endl;
    ascii_table('0','9');
    ascii_table('A','Z');
    ascii_table('a','z');

    return 0;
}

void ascii_table(char A, char B)
{
    for (char num = A; num <= B; ++num)
        cout << setw(4) << num << setw(15) << int(num) << endl;
}
