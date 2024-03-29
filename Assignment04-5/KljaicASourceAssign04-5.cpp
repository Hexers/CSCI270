/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 4
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Thursday September 19, 2019

   PROJECT NAME: KljaicAProjectAssign04-5
   FILENAME: KljaicASourceAssign04-5.cpp



*********************************************************************/
// This program demonstrates a static class member variable.
#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;

int main()
{
   int count;                       // Loop counter
   const int NUM_DIVISIONS = 4;     // Number of divisions
   Budget divisions[NUM_DIVISIONS]; // Array of Budget objects

   // Get the budget requests for each division.
   for (count = 0; count < NUM_DIVISIONS; count++)
   {
      double budgetAmount;
      cout << "Enter the budget request for division ";
      cout << (count + 1) << ": ";
      cin >> budgetAmount;
      divisions[count].addBudget(budgetAmount);
   }

   // Display the budget requests and the corporate budget.
   cout << fixed << showpoint << setprecision(2);
   cout << "\nHere are the division budget requests:\n";
   for (count = 0; count < NUM_DIVISIONS; count++)
   {
      cout << "\tDivision " << (count + 1) << "\t$ ";
      cout << divisions[count].getDivisionBudget() << endl;
   }
   cout << "\tTotal Budget Requests:\t$ ";
   cout << divisions[0].getCorpBudget() << endl;

   // Calculates number of total divisions
   cout << "Total Number of Divisons: ";
   cout << divisions[0].getNumDivisons() << endl;

   system("Pause");
   return 0;
}
