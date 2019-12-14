/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 5
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Thursday September 26, 2019

*********************************************************************/
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include <iostream>
#include <string>
using namespace std;

// TextBook class
class TextBook
{
private:
   string title;     // Book title
   string author;    // Author name
   string publisher; // Publisher name
   string edition;   // Textbook Edition
public:
   // The default constructor stores empty strings
   // in the string objects.
   TextBook()
      { set("", "", "", ""); }

   // Constructor
   TextBook(string textTitle, string auth, string pub, string ed)
      { set(textTitle, auth, pub, edition); }

   // set function
   void set(string textTitle, string auth, string pub, string ed)
      { title = textTitle;
        author = auth;
        publisher = pub;
        edition = ed;}

   // print function
   void print() const
      {  cout << "Title: " << title << endl;
         cout << "Author: " << author << endl;
         cout << "Publisher: " << publisher << endl;
         cout << "Edition: " << edition << endl;
      }
};
#endif
