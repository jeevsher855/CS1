/* Write a program that prompts the user for the number of tellers at Nation’s Bank in Hyatesville that worked
 * each of the last three years. For each worker the program should ask for the number of days out sick for each
 * of the last three years. The output should provide the number of tellers and the total number of days missed
 * by all the tellers over the last three years.
 * Jeevan Shergill
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int tellers, days, total = 0;

    cout << "How many tellers worked at Nation's Bank during each of the last three years ?" << std::endl;
    cin >> tellers;

    for (int num = 1; num <= tellers; num++)
    {

        for (int years = 1; years <= 3; years++)
        {
            cout << "How many days was teller " << num << " out sick during year "<< years << "?" << endl;
            cin >> days;
            total = total + days;
        }
    }
    cout << "The " << tellers << " tellers were out sick for a total of " << total << " days during the last three years"
    << endl;
}