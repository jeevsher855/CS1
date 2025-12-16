//
// Created by theha on 12/15/2025.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct ASCII
{
    char value;
    int number;
};

void calc(char, char, fstream&);
void print();

int main()
{
    fstream file ("sigma.dat", ios::out | ios::binary);

    calc('0', '9', file);
    calc('A', 'Z', file);
    calc('a', 'z', file);


    print();

    return 0;

}

void calc(char start, char end, fstream& file)
{
    ASCII temp_in;
    file.close();
    file.open("sigma.dat", ios::out | ios::binary | ios::app);
    for (;start <= end; start++)
    {
        temp_in.value = start;
        temp_in.number = int(start);
        file.write(reinterpret_cast<char*>(&temp_in), sizeof(temp_in));
    }
    file.close();
}

void print()
{
    ASCII temp_out;
    ifstream infile ("sigma.dat", ios::binary);
    while (infile.read(reinterpret_cast<char*>(&temp_out), sizeof(temp_out)))
    {
        cout << temp_out.value << setw(15) << temp_out.number << endl;
    }

    infile.close();
}