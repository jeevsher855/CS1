//
// Created by 12/5/2025.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NAME_SIZE = 15;
const int ADDRESS_SIZE = 30;
const int CITY_SIZE = 20;
const int STATE_SIZE = 5;


struct records
{
    char first_name[NAME_SIZE];
    char last_name[NAME_SIZE];
    char address[ADDRESS_SIZE + 2]; // for spaces
    char city[CITY_SIZE + 1];
    char state[STATE_SIZE];
    long zip;
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
        cout << "Person's First Name: ";
        cin >> record[i].first_name;
        cout << "Person's Last Name: ";
        cin >> record[i].last_name;
        cout << "Street: ";
        cin.ignore(2, '\n');
        cin.getline(record[i].address, ADDRESS_SIZE + 2);
        cout << "City: ";
        cin.getline(record[i].city, ADDRESS_SIZE + 1);
        cout << "State: ";
        cin >> record[i].state;
        cout << "Zip: ";
        cin >> record[i].zip;
        cout << "Enter a Y if you would like to input more data " << endl;
        cin >> user;
        i++;
        count = i;
    }
    while (toupper(user) == 'Y');


    file.open("record.dat", ios::out | ios::binary);
    file.write(reinterpret_cast<char*>(&record), sizeof(records));
    file.close();
    file.open("record.dat", ios::in | ios::binary);
    file.read(reinterpret_cast<char*>(&record), sizeof(records));
    file.close();

    outfile.open("bartholomew.txt");

    cout << "That's all the information" << endl;
    outfile << "First Name" << setw(10) << "Last Name" << setw(16) << "Street" << setw(22)
    << "City" << setw(10) << "State" << setw(10) << "Zip code" << endl;
    for (i = 0; i < count; i++)
    {
        outfile << record[i].first_name << setw(13) << record[i].last_name << setw(23)
        << record[i].address << setw(17) << record[i].city << setw(7) << record[i].state << setw(10) << record[i].zip << endl;
    }

    return 0;
}