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

// Implementation file for the Rectangle class.
#include "Rectangle.h"

//***********************************************************
// setWidth sets the value of the member variable width.    *
//***********************************************************

void Rectangle::setWidth(double w)
{
   if (w >= 0)
      width = w;
   else
      throw NegativeWidth();
}

//***********************************************************
// setLength sets the value of the member variable length.  *
//***********************************************************

void Rectangle::setLength(double len)
{
   if (len >= 0)
      length = len;
   else
      throw NegativeLength();
}

//***********************************************************
// setColor sets the value of the member variable color     *
//***********************************************************

void Rectangle::setColor(int col)
{
    if (col > 0)
        color = col;
    else
        throw NegativeColor();
}
