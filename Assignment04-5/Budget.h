/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 4
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Thursday September 19, 2019

   PROJECT NAME: KljaicAProjectAssign04-5
   FILENAME: KljaicASourceAssign04-5.cpp



*********************************************************************/
#ifndef BUDGET_H
#define BUDGET_H

// Budget class declaration
class Budget
{
private:
   static double corpBudget;  // Static member
   static int numDivisions; // Static member (2)
   double divisionBudget;     // Instance member

public:
   Budget()
      { divisionBudget = 0; }

   void addBudget(double b)
      { divisionBudget += b;
        corpBudget += b;
        numDivisions++; // Increments numbDivisions by (1)
      }

   double getDivisionBudget() const
      { return divisionBudget; }

   double getCorpBudget() const
      { return corpBudget; }

   int getNumDivisons() const // Calls getNumDivisions and returns numDivisons
      {
       return numDivisions;
      }
};

// Definition of static member variable corpBudget
double Budget::corpBudget = 0;
int Budget::numDivisions = 0; // sets numDivisons to 0

#endif
