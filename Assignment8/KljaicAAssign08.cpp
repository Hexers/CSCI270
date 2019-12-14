/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 08
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Tuesday October 29, 2019

    Add a new variable to the person class. It is of your choosing.
    Modify the getdata and display functions to input and display this new variable.

    Add a new class that is of type public person. This can be any one that you want.
    You already have student and employee. Add a third class. The variable type and names
    are of your own choosing. AT LEAST 3 VARIABLES (PRIVATE MEMBERS).

    Modify the main part of the program to get and display an instance of this class.

    Save in a file folder on your storage device.

    Add 3 comments at the top of the page with your name, the class, and the date.
    Put each comment on a separate line.

    In addition, I want at least 5 additional comments in the program.
    All comments must describe what the program is doing.

*********************************************************************/

// This program illustrates class hierarchy of a person => student, and person => employee

#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name;
    string gender;
    int age;
    string favClass;
public:
    void getdata()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Gender: ";
        cin >> gender;
        cout << "Favorite Class: ";
        cin >> favClass;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Favorite Class: " << favClass << endl;
    }
};

class student : public person
{
private:
    string institute;
    string level;
public:
    void getdata()
    {
        person::getdata();
        cout << "Name of University: ";
        cin >> institute;
        cout << "Level: ";
        cin >> level;
    }
    void display()
    {
        person::display();
        cout << "Name of University: " << institute << endl;
        cout << "Level: " << level << endl;
    }
};

class employee : public person
{
private:
    string company;
    float salary;
public:
    void getdata()
    {
        person::getdata();
        cout << "Name of Company: ";
        cin >> company;
        cout << "Salary: ";
        cin >> salary;
    }
    void display()
    {
        person::display();
        cout << "Name of Company: " << company << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class alumni : public person // New class Alumni
{
private:
    string major; // Requests major
    double gpa; // Requests gpa
    int gradYear; // Requests graduation year

public:
    void getdata()
    {
        person::getdata();
        // Requests major
        cout << "Major: ";
        cin >> major;
        // Requests GPA
        cout << "GPA: ";
        cin >> gpa;
        // Requests Graduation Year
        cout << "Graduation Year: ";
        cin >> gradYear;
        cout << endl;
    }
    void display()
    {
        person::display();
        cout << "Major: " << major << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Graduation Year: " << gradYear << endl;
    }
};

int main()
{
    student student;
    employee employee;
    alumni alumni;

    // Outputs for Student
    cout << "Student" << endl;
    cout << "Enter data" << endl;
    student.getdata();
    cout << endl << "Displaying data" << endl;
    student.display();

    // Outputs for Employee
    cout << endl << "Employee" << endl;
    cout << "Enter data" << endl;
    employee.getdata();
    cout << endl << "Displaying data" << endl;
    employee.display();

    // Outputs for Alumni
    cout << endl << "Alumni" << endl;
    cout << "Enter data" << endl;
    alumni.getdata();
    cout << endl << "Displaying data" << endl;
    alumni.display();

    system("pause");
    return 0;
}
