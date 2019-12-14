/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 2
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Tuesday September 10, 2019

   PROJECT NAME: KljaicAProjectAssign02
   FILENAME: KljaicASourceAssign02.cpp

   Page 808 - 9th Edition
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;
public:

    Employee(string employeeName, int employeeIdNumber, string employeeDept, string employeePos);
    Employee(string employeeName, int employeeIdNumber);
    Employee();

    string getName();
    int getIdNumber();
    string getDepartment();
    string getPosition();

    void setName(string);
    void setIdNumber(int);
    void setDepartment(string);
    void setPosition(string);
};

void Employee::setPosition(string employeePos)
{
    position = employeePos;
}

void Employee::setDepartment(string employeeDept)
{
    department = employeeDept;
}

void Employee::setIdNumber(int employeeIdNumber)
{
    idNumber = employeeIdNumber;
}

void Employee::setName(string employeeName)
{
    name = employeeName;
}


string Employee::getPosition()
{
    return position;
}

string Employee::getDepartment()
{
    return department;
}

int Employee::getIdNumber()
{
    return idNumber;
}

string Employee::getName()
{
    return name;
}

Employee::Employee()
{
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

Employee::Employee(string employeeName, int employeeIdNumber)
{
    name = employeeName;
    idNumber = employeeIdNumber;
    department = "";
    position = "";
}

Employee::Employee(string employeeName, int employeeIdNumber, string employeeDept, string employeePos)
{
    name = employeeName;
    idNumber = employeeIdNumber;
    department = employeeDept;
    position = employeePos;
}

int main()
{
    Employee susan("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee mark("Mark Jones", 39119);
    Employee e ("", 0 , "", "");

    cout << "\n\nName: " << susan.getName();
    cout << "\nID Number: " << susan.getIdNumber();
    cout << "\nDepartment: " << susan.getDepartment();
    cout << "\nPosition: " << susan.getPosition();
    cout << endl;

    cout << "\n\nName: " << mark.getName();
    cout << "\nID Number: " << mark.getIdNumber();
    cout << "\nDepartment: " << mark.getDepartment();
    cout << "\nPosition: " << mark.getPosition();
    cout << endl;

    cout << "\n\nName: " << e.getName();
    cout << "\nID Number: " << e.getIdNumber();
    cout << "\nDepartment: " << e.getDepartment();
    cout << "\nPosition: " << e.getPosition();
    cout << endl;


    system("Pause");
    return 0;
}
