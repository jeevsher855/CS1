//
// Jeevan Shergill
//

#include <iostream>
using namespace std;


void swap(int& number1, int& number2);


int main()
{
    int num1, num2;

    cout << "Enter the first number\nThen hit enter" << endl;
    cin >> num1;
    cout << "Enter the second number\nThen hit enter" << endl;
    cin >> num2;

    cout << "You input the numbers as " << num1 << " and " << num2 << endl;
    swap(num1, num2);

    cout << "After swapping, the first number has the value " << num1 << " which was the value of the second number" << endl;
    cout << "The second number has the value of " << num2 << " which was the value of the first number" << endl;

    return 0;
}

void swap(int& number1, int& number2)
{
    int temp;

    temp = number1;
    number1 = number2;
    number2 = temp;
}
