/*********************************************************************
   PROGRAM:    CSCI 270 - KljaicAInClass10-29
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Tuesday October 29, 2019

*********************************************************************/
/*

Modify PR13-3.py to create two additional instances of the class Rectangle.

One will be dining for dining room and the other will be living for living room.
You will input the dimensions of the rooms and add to the total area calculation.

*/
// This program creates five instances of the Rectangle class.
#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle
{
   private:
      double width;
      double length;
   public:
      void setWidth(double);
      void setLength(double);
      double getWidth() const;
      double getLength() const;
      double getArea() const;
};

//**************************************************
// setWidth assigns a value to the width member.   *
//**************************************************

void Rectangle::setWidth(double w)
{
   width = w;
}

//**************************************************
// setLength assigns a value to the length member. *
//**************************************************

void Rectangle::setLength(double len)
{
   length = len;
}

//**************************************************
// getWidth returns the value in the width member. *
//**************************************************

double Rectangle::getWidth() const
{
   return width;
}

//****************************************************
// getLength returns the value in the length member. *
//****************************************************

double Rectangle::getLength() const
{
   return length;
}

//*****************************************************
// getArea returns the product of width times length. *
//*****************************************************

double Rectangle::getArea() const
{
   return width * length;
}

//*****************************************************
// Function main                                      *
//*****************************************************

int main()
{
   double number;					// To hold a number
   double totalArea;				// The total area
   Rectangle *kitchen = nullptr;	// To point to kitchen dimensions
   Rectangle *bedroom = nullptr;	// To point to bedroom dimensions
   Rectangle *den = nullptr;		// To point to den dimensions
   Rectangle *dining = nullptr;		// To point to dining dimensions
   Rectangle *living = nullptr;		// To point to living dimensions

   // Dynamically allocate the objects.
   kitchen = new Rectangle;
   bedroom = new Rectangle;
   den = new Rectangle;
   dining = new Rectangle;
   living = new Rectangle;

   // Get the kitchen dimensions.
   cout << "What is the kitchen's length? ";
   cin >> number;							// Get the length
   kitchen->setLength(number);				// Store in kitchen object
   cout << "What is the kitchen's width? ";
   cin >> number;							// Get the width
   kitchen->setWidth(number);				// Store in kitchen object

   // Get the bedroom dimensions.
   cout << "What is the bedroom's length? ";
   cin >> number;							// Get the length
   bedroom->setLength(number);				// Store in bedroom object
   cout << "What is the bedroom's width? ";
   cin >> number;							// Get the width
   bedroom->setWidth(number);				// Store in bedroom object

   // Get the den dimensions.
   cout << "What is the den's length? ";
   cin >> number;							// Get the length
   den->setLength(number);					// Store in den object
   cout << "What is the den's width? ";
   cin >> number;							// Get the width
   den->setWidth(number);					// Store in den object

   // Get the dining room dimensions.
   cout << "What is the dining rooms length? ";
   cin >> number;							// Get the length
   dining->setLength(number);				// Store in dining object
   cout << "What is the dining rooms width? ";
   cin >> number;							// Get the width
   dining->setWidth(number);				// Store in dining object

   // Get the living room dimensions.
   cout << "What is the living rooms length? ";
   cin >> number;							// Get the length
   living->setLength(number);				// Store in living object
   cout << "What is the living rooms width? ";
   cin >> number;							// Get the width
   living->setWidth(number);				// Store in living object

   // Calculate the total area of the five rooms.
   totalArea = kitchen->getArea() + bedroom->getArea()
             + den->getArea() + dining->getArea() + living->getArea();

   // Display the total area of the five rooms.
   cout << "The total area of the five rooms is "
        << totalArea << endl;

   // Delete the objects from memory.
   delete kitchen;
   delete bedroom;
   delete den;
   delete dining;
   delete living;
   kitchen = nullptr;   // Make kitchen a null pointer.
   bedroom = nullptr;   // Make bedroom a null pointer.
   den = nullptr;       // Make den a null pointer.
   dining = nullptr;    // Make dining room a null pointer.
   living = nullptr;    // Make living room a null pointer.

   system("Pause");
   return 0;

}
