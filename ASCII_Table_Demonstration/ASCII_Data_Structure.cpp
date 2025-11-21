//
// Created by Jeevan Shergill
//

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 500;

struct ASCII
{
    char ASCII_table;
    int values;
};

void ASCII_TABLE(char, char, ASCII*, int&);
void print_ASCII(int, ASCII*);

int main()
{
    ASCII table[SIZE];
    int num_grades = 0;



    ASCII_TABLE('0', '9', table, num_grades);
    ASCII_TABLE('A', 'Z', table, num_grades);
    ASCII_TABLE('a', 'z', table, num_grades);

    print_ASCII(num_grades, table);

    return 0;

}
void ASCII_TABLE(char A, char B, ASCII* num, int& num_grades)
{
    for (static int i = 0; A <= B; A++)
    {
        num[i].ASCII_table = A;
        num[i].values = int(A);
        i++;
        num_grades = i;
    }
}
void print_ASCII(int num_grades, ASCII* table)
{
    cout << "Character" << setw(15) << "ASCII Value" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < num_grades; i++)
        cout << setw(4) << table[i].ASCII_table << setw(15) << table[i].values << endl;
};