//
// Created by Jeevan Shergill
//

#include <iostream>
#include <iomanip>
#include <fstream>

const int EMPLOYEES = 4;

using namespace std;

struct employee
{
    char name[16];
    int SSN;
    int DID;
    int years_employed;
    int salary;
};

int main()
{
    employee employees[EMPLOYEES];
    ifstream infile;
    fstream file;
    ofstream outfile;
    int i = 0;
    int total_years = 0;
    int total_salary = 0;


    infile.open("employee.in");
    if (!infile)
    {
        cout << "Error opening file. \n";
        cout << "It may not exist where indicated" << endl;
        return 1;
    }


    while (infile)
    {
        infile.get(employees[i].name, 16);
        infile >> employees[i].SSN >> employees[i].DID >> employees[i].years_employed >> employees[i].salary;
        i++;
        infile.ignore(1000,'\n');

    }
    infile.close();
    file.open("employee.dat", ios::out | ios::binary);
    file.write(reinterpret_cast<char*>(&employees), sizeof(employees));
    file.close();
    file.open("employee.dat", ios::in | ios::binary);
    file.read(reinterpret_cast<char*>(&employees), sizeof(employees));
    file.close();

    outfile.open("employee.out");

    outfile << "Name" << setw(23) << "Social Security" << setw(17) << "Department ID" << setw(22)
    << "Years Employed" << setw(10) << "Salary" << endl;
    outfile << showpoint << setprecision(2) << fixed;
    for (int i = 0; i < EMPLOYEES; i++)
    {
        outfile << employees[i].name << employees[i].SSN << setw(15)
        << employees[i].DID << setw(20) << employees[i].years_employed << setw(19) << float(employees[i].salary) << endl;
        total_years += employees[i].years_employed;
        total_salary += employees[i].salary;
    }
    outfile << "The average number of years employed is " << total_years / EMPLOYEES << endl;
    outfile << "The average salary is $" << total_salary / float(EMPLOYEES) << endl;
    outfile.close();
    return 0;

}