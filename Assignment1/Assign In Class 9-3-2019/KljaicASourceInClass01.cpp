/*********************************************************************
   PROGRAM:    CSCI 270 - KljaicAProjectInClass01
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Tuesday September 03, 2019

   FUNCTION:
    Enter in Program 5-12 on pages 262-263 in the ninth edition book.
    Modify the program to make it unique. In other words,
    be creative. For example: ask the user for different numbers,
    change the calculation, use a different loop, etc.

    Modify the comments as needed.

   PROJECT NAME: KljaicAProjectInClass01
   FILENAME: KljaicASourceInClass.cpp


*********************************************************************/
// This program demonstrates a simple class.
#include <iostream>
using namespace std;

// Box class declaration.
class Box
{
   private:
      double width;
      double length;
      double height;
      double volume;
   public:
      void setWidth(double);
      void setLength(double);
      void setHeight(double);
      double getWidth() const;
      double getLength() const;
      double getHeight() const;
      double getVolume() const;
      double getArea() const;
};

//**************************************************
// setWidth assigns a value to the width member.   *
//**************************************************

void Box::setWidth(double w)
{
   width = w;
}

//**************************************************
// setLength assigns a value to the length member. *
//**************************************************

void Box::setLength(double len)
{
   length = len;
}
//**************************************************
// setHeight assigns a value to the height member.   *
//**************************************************

void Box::setHeight(double h)
{
   height = h;
}

//**************************************************
// getWidth returns the value in the width member. *
//**************************************************

double Box::getWidth() const
{
   return width;
}

//****************************************************
// getLength returns the value in the length member. *
//****************************************************

double Box::getLength() const
{
   return length;
}
//****************************************************
// getHeight returns the value in the height member. *
//****************************************************

double Box::getHeight() const
{
   return height;
}
//****************************************************
// getVolume calculates the volume via height x width x length. *
//****************************************************

double Box::getVolume() const
{
   return height * width * length;
}
//*****************************************************
// getArea returns the product of width times length. *
//*****************************************************

double Box::getArea() const
{
   return (2 * (height * width)) + (2 * (height * length)) + (2 * (width * length));
}

//*****************************************************
// Function main                                      *
//*****************************************************

int main()
{
   Box box;     // Define an instance of the Box class
   double rectWidth;  // Local variable for width
   double rectLength; // Local variable for length
   double rectHeight; // local variable for height

   // Get the Box's width and length and height from the user.
   cout << "This program will calculate the area of a\n";
   cout << "Box. What is the width? ";
   cin >> rectWidth;
   cout << "What is the length? ";
   cin >> rectLength;
   cout << "What is the height? ";
   cin >> rectHeight;

   // Store the width and length and height of the Box
   // in the box object.
   box.setWidth(rectWidth);
   box.setLength(rectLength);
   box.setHeight(rectHeight);

   // Display the Box's data.
   cout << "Here is the Box's data:\n";
   cout << "Width: " << box.getWidth() << endl;
   cout << "Length: " << box.getLength() << endl;
   cout << "Height: " << box.getHeight() << endl;
   cout << "Surface Area: " << box.getArea() << endl;
   cout << "Volume: " << box.getVolume() << endl;

   system("Pause");
   return 0;
}
