/*
 Purpose: To compute total price of shirts including discounts
 By: Jeevan Shergill
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
 int num_shirts, price = 12;
 float disc1 = 12 - (12*0.10),disc2 = 12 - (12*0.15),disc3 = 12 - (12*0.20),disc4 = 12 - (12*0.25);
 cout << "How many shirts would you like ?" << endl;
 cin >> num_shirts;
 cout << setprecision(2) << fixed << showpoint;
 if (num_shirts >= 0 && num_shirts <= 5)
  cout << "The cost per shirt is $12 and the total cost is $" << num_shirts * price << endl;
 else if (num_shirts > 5 && num_shirts <= 10)
  cout << "The cost per shirt is $" << disc1 << " and the total cost is $" << num_shirts * disc1 << endl;
 else if (num_shirts > 10 && num_shirts <= 20)
  cout << "The cost per shirt is $" << disc2 << " and the total cost is $" << num_shirts * disc2 << endl;
 else if (num_shirts > 20 && num_shirts <= 30)
  cout << "The cost per shirt is $" << disc3 << " and the total cost is $" << num_shirts * disc3 << endl;
 else if (num_shirts > 30)
  cout << "The cost per shirt is $" << disc4 << " and the total cost is $" << num_shirts * disc4 << endl;
 else
  cout << "Invalid Input: Please enter a nonnegative integer" << endl;
}
