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


// Specification file for the Rectangle class
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;     // The rectangle's width
    double length;    // The rectangle's length
    int color;        // The rectangle's color
public:
    // Exception class
    class NegativeSize
    {
    };            // Empty class declaration

    // Exception class for a negative width
    class NegativeWidth
    {

    };            // Empty class declaration

    // Exception class for a negative length
    class NegativeLength
    {

    };            // Empty class declaration

    // Exception class for a negative color
    class NegativeColor
    {

    };            // Empty class declaration

    // Default constructor
    Rectangle()
    {
        width = 0.0; length = 0.0;
    }

    // Mutator functions, defined in Rectangle.cpp
    void setWidth(double);
    void setLength(double);
    void setColor(int);

    // Accessor functions
    double getWidth() const
    {
        return width;
    }

    double getLength() const
    {
        return length;
    }

    double getArea() const
    {
        return width * length;
    }

    int getColor() const
    {
        return color;
    }
};
#endif
