/*********************************************************************
    PROGRAM:    Assignment 11 - In Class
    PROGRAMMER: Aleksandar Kljaic
    INSTRUCTOR: Donna Ogle
    DUE DATE:   Tuesday November 5, 2019

    Modify PR16-2.cpp, Rectangle-2.h, and Rectangle-2.cpp to create a
    catch for both width and length. See pages 997-998 for an example.
    You will have to create two exception classes and two catches.

    Then, add a variable color to the rectangle class of type integer.
    Modify the programs to include color. Make sure you add an exception
    class and a catch if color < 0.

    Name the program: LastnameFInClass11-5 where Lastname is your last
    name and F is the first initial of your first name. Ex: OgleD.
    Save in a file folder on your storage device.

    Add 3 comments at the top of the page with your name, the class,
    and the date. Put each comment on a separate line.

    Also, the variable and function names must be descriptive.
    Your output must also be descriptive.

    Test the program and make sure it runs. Show it to me before you leave.

*********************************************************************/


// This program demonstrates Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    int width;
    int length;
    int color;

    // Create a Rectangle object.
    Rectangle myRectangle;

    // Get the width and length and color
    cout << "Enter the rectangle's width: ";
    cin >> width;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    cout << "Enter the rectangle's color: ";
    cin >> color;

    // Store these values in the Rectangle object.
    try
    {
        myRectangle.setWidth(width);
        myRectangle.setLength(length);
        myRectangle.setColor(color);
        cout << "The area of the rectangle is "
             << myRectangle.getArea() << endl;
        cout << "The color of the rectangle is "
             << myRectangle.getColor() << endl;
    }
    catch (Rectangle::NegativeWidth)
    {
        cout << "Error: A negative value was entered.\n";
    }

    catch (Rectangle::NegativeLength)
    {
        cout << "Error: A negative value was entered.\n";
    }

    catch (Rectangle::NegativeColor)
    {
        cout << "Error: A negative value was entered.\n";
    }

    cout << "End of the program.\n";

    system("PAUSE");
    return 0;
}
