/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 5
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Thursday September 26, 2019

*********************************************************************/
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include <string>
using namespace std;

// Instructor class
class Instructor
{
private:
   string lastName;		// Last name
   string firstName;    // First name
   string officeNumber; // Office number
   string instructorPhone; // Phone Number
public:
   // The default constructor stores empty strings
   // in the string objects.
   Instructor()
      { set("", "", "", ""); }

   // Constructor
   Instructor(string lname, string fname, string office, string phone)
      { set(lname, fname, office, phone); }

   // set function
   void set(string lname, string fname, string office, string phone)
      { lastName = lname;
        firstName = fname;
        officeNumber = office;
        instructorPhone = phone; }

   // print function
   void print() const
      {  cout << "Last name: " << lastName << endl;
         cout << "First name: " << firstName << endl;
         cout << "Office number: " << officeNumber << endl;
         cout << "Phone Number: " << instructorPhone << endl;
      }
};
#endif
