//
// Created by Jeevan Shergill on 11/4/25.
//


#include <iostream>
#include <string>
using namespace std;

int isConsonant(string);

int main()
{
    string word;

    cout << "Please enter a string containing 50 characters or less" << endl;
    cin >> word;

    cout << "The amount of consonants in the string " << word << " are " << isConsonant(word) << endl;

    return 0;
}

int isConsonant(string word)
{
    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
        if (!(word [i] == 'A' || word [i] == 'E' || word [i] == 'I' || word [i] == 'O' || word [i] == 'U'))
            count++;
    }
    return count;
}