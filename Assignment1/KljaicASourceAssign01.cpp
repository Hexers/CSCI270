/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 1 - Program 1
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Thursday August 29, 2019

   FUNCTION:
    Enter in Program 5-12 on pages 262-263 in the ninth edition book.
    Modify the program to make it unique. In other words,
    be creative. For example: ask the user for different numbers,
    change the calculation, use a different loop, etc.

    Modify the comments as needed.

   PROJECT NAME: KljaicAProjectAssign01
   FILENAME: KljaicASourceAssign01.cpp


*********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int days;    // Number of days
   int hours;   // Number of hours
   double payRate; // Payrate
   double total = 0.0; // Accumulator, initilaized with 0

   // Get the number of days
   cout << "For how many days do you have sales amounts? ";
   cin >> days;

   // Prompts user to enter hours worked per week
   cout << "How many hours did you work? ";
   cin >> hours;

   // Prompts user to enter their pay-rate
   cout << "What is your pay-rate? ";
   cin >> payRate;

   // Get the sales for each day and accumulate a total.
   for (int count = 1; count <= days; count++)
   {
       double sales;
       cout << "Enter the sales for day " << count << ": ";
       cin >> sales;
       total += sales; // Accumulates the running total.
   }

   // Displays the total sales.
   cout << fixed << showpoint << setprecision(2);
   cout << "The total sales are $" << total << endl; // Total sales
   cout << "You worked " << hours << " hours in " << days << " days. "<< endl; // Tells the user how long they worked in how many days.
   cout << "You have earned $" << hours * payRate << " in " << days << " days while making $" << total << " in sales. " << endl; // Tells user how much they earned while making profits.

   system("PAUSE");
   return 0;

}
