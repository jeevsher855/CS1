//
// Created by Jeevan Shergill
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

struct records
{
    float radius;
    float circumference;
    float area;
};

int main()
{
    records record[20];
    fstream file;
    ofstream outfile;
    char user;
    int i = 0;
    int count = 0;

    do
    {
        cout << "Enter the following information" << endl;
        cout << "Radius of circle: ";
        cin >> record[i].radius;
        cout << "Enter a Y if you would like to input more data " << endl;
        cin >> user;
        record[i].circumference = 2 * record[i].radius * M_PI;
        record[i].area = pow(record[i].radius, 2) * M_PI;

        i++;
        count = i;
    }
    while (toupper(user) == 'Y');

    file.open("radii_data.dat", ios::out | ios::binary);
    file.write(reinterpret_cast<char*>(&record), sizeof(records));
    file.close();
    file.open("radii_data.dat", ios::in | ios::binary);
    file.read(reinterpret_cast<char*>(&record), sizeof(records));
    file.close();

    outfile.open("radii_data_output.txt");

    cout << "That's all the information" << endl;
    outfile << showpoint << setprecision(2) << fixed;
    outfile << "Radius" << setw(10) << "Area" << setw(16) << "Circumference" << endl;
    for (i = 0; i < count; i++)
    {
        outfile << record[i].radius << setw(13) << record[i].area << setw(10)
        << record[i].circumference << endl;
    }

    return 0;
}