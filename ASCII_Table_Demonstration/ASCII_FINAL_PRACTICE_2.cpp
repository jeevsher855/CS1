//
// Created by theha on 12/15/2025.
//

#include <iostream>
#include <iomanip>

using namespace std;

struct ASCII
{
    char value;
    int number;
};

void calc(char, char, ASCII[], int&);
void print(ASCII[], int);

int main()
{
    ASCII array[100];
    int num_grades;
    calc('0','9', array, num_grades);
    calc('A','Z', array, num_grades);
    calc('a','z', array, num_grades);
    print(array, num_grades);

    return 0;
}

void calc(char start, char end, ASCII array[], int& num)
{
    for (static int i = 0; start <= end; start++)
    {
        array[i].value = start;
        array[i].number = int(start);
        i++;
        num = i;
    }
}
void print(ASCII array[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << array[i].value << setw(15) << array[i].number << endl;
    }
}