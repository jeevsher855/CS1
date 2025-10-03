/*
Purpose of this program is to find the amount gained per chair and
the total amount gained
Name: Jeevan Shergill
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double american, modern, french, total_sales;

    cout << "Please input the number of American Colonial chairs sold: " << endl;
    cin >> american;
    cout << "Please input the number of Modern chairs sold: " << endl;
    cin >> modern;
    cout << "Please input the number of French Classical chairs sold: " << endl;
    cin >> french;

    american = american * 85.00;
    modern = modern * 57.50;
    french = french * 127.75;
    total_sales = american + modern + french;

    cout << setprecision(2) << fixed;
    cout << "The total sales of American Colonial chairs $" << american << endl;
    cout << "The total sales of Modern chairs $" << modern << endl;
    cout << "The total sales of French Classical chairs $" << french << endl;
    cout << "The total sales of all chairs $" << total_sales << endl;

    return 0;
}