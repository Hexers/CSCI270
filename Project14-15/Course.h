/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 5
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Thursday September 26, 2019

*********************************************************************/
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include "Instructor.h"
#include "TextBook.h"
using namespace std;

class Course
{
private:
   string courseName;		// Course name
   Instructor instructor;   // Instructor
   TextBook textbook;       // Textbook
   string courseNumber;     // Course Number

public:
   // Constructor
   Course(string course, string courseNum, string instrLastName,
          string instrFirstName, string instrOffice,
          string instructorPhone,
          string textTitle, string author,
          string publisher, string edition)
      { // Assign the course name.
        courseName = course;
        courseNumber = courseNum;

        // Assign the instructor.
        instructor.set(instrLastName, instrFirstName, instrOffice, instructorPhone);

        // Assign the textbook.
        textbook.set(textTitle, author, publisher, edition); }



   // print function
   void print() const
   {  cout << "Course name: " << courseName << endl;
      cout << "Course Number: " << courseNumber << endl << endl;

      cout << "Instructor Information:\n";
      instructor.print();

      cout << "\nTextbook Information:\n";
      textbook.print();
      cout << endl; }
};
#endif
