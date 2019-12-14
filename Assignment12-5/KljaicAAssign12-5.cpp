/*********************************************************************
    PROGRAM:    Assignment 12-5
    PROGRAMMER: Aleksandar Kljaic
    INSTRUCTOR: Donna Ogle
    DUE DATE:   Thursday November 14, 2019

    Create overloaded function templates to sum either  2, 3, 4, or 5 values

    Name the new program: LastnameFAssign12-5.cpp where Lastname is your last
    name and F is the first initial of your first name. Ex: OgleD. Save in a file folder on your storage device.

    Start with  Pr16-10.

    Add 3 comments at the top of the page with your name, the class, and the date. Put each comment on a separate line.

    Please do your own work and create your own variable names.

    Test the program and make sure it runs.

    Show the program to me.

*********************************************************************/
// This program demonstrates an overloaded function template.
#include <iostream>
using namespace std;

template <class T>
T sum(T val1, T val2)
{
    return val1 + val2;
}

template <class T>
T sum(T val1, T val2, T val3)
{
    return val1 + val2 + val3;
}

template <class T>
T sum(T val1, T val2, T val3, T val4)
{
    return val1 + val2 + val3 + val4;
}

template <class T>
T sum(T val1, T val2, T val3, T val4, T val5)
{
    return val1 + val2 + val3 + val4 + val5;
}

int main()
{
    double num1, num2, num3, num4, num5;

    // Get two values and display their sum.
    cout << "Enter two values: ";
    cin >> num1 >> num2;
    cout << "Their sum is " << sum(num1, num2) << endl;

    // Get three values and display their sum.
    cout << "Enter three values: ";
    cin >> num1 >> num2 >> num3;
    cout << "Their sum is " << sum(num1, num2, num3) << endl;

    // Get four values and display their sum.
    cout << "Enter four values: ";
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "Their sum is " << sum(num1, num2, num3, num4) << endl;

    // Get five values and display their sum.
    cout << "Enter five values: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << "Their sum is " << sum(num1, num2, num3, num4, num5) << endl;

    system("PAUSE");
    return 0;
}
