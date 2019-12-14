/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 5
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Thursday September 26, 2019

*********************************************************************/
// This program demonstrates the Course class.
#include "Course.h"

int main()
{
   // Create a Course object.
   Course myCourse(
                "OOP", // Course name
                "CSCI 270",
                "Kljaic",
                "Aleksandar",
                "302C",
                "815-847-0148",       // Instructor info
                "Starting Out with C++",
                "Gaddis",  // Textbook title and author
                "Addison-Wesley",
                "9th");                 // Textbook publisher


   // Display the course info.
   myCourse.print();
   return 0;
}
