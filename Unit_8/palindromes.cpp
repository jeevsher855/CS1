//
// Created by Jeevan Shergill
//

#include <iostream>
#include <string>


using namespace std;

const int SIZE = 50;

bool isPalindrome(string);

int main()
{
    string input;

    cout << "Please enter a string less than 50 characters" << endl;
    cin >> input;

    if (isPalindrome(input))
        cout << input << " is a palindrome" << endl;
    else
        cout << input << " is not a palindrome" << endl;

}

bool isPalindrome(string palindrome)
{
    int left = 0, right = palindrome.length() - 1;

    while (left < right)
    {
        if (palindrome[left] < palindrome[right])
            return false;
        left++;
        right--;
    }
    return true;
}
