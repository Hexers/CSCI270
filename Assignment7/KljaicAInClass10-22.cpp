/*********************************************************************
   PROGRAM:    CSCI 270 - KljaicAInClass10-22
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Wedneday October 23, 2019

*********************************************************************/
// C++ program to demonstrate implementation
// of Inheritance

#include <iostream>
using namespace std;

//Base class
class Insect
{
public:
    int legs;
};

// Sub class inheriting from Base Class(Insect)
class Bee : public Insect
{
public:
    int stinger_size; // int for stinger size
};

// Sub class inheriting from Base Class(Parent)
class Ant : public Insect
{
public:
    string type; // string for type of ant
};

//main function
int main()
{

    Bee obj1;
    Ant obj2;

    // Variables defined
    obj1.stinger_size = 2;
    obj1.legs = 6;
    obj2.type = "carpenter";

    // Outputs
    cout << "The Bee has a stinger size of " << obj1.stinger_size << endl;
    cout << "The Bee has " << obj1.legs << " legs." << endl;

    cout << "The Ant is a type " << obj2.type << endl;
    cout << "The Ant has " << obj1.legs << " legs." << endl;

    system("pause");
    return 0;
}
