/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 6
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Tuesday October 01, 2019

   PROJECT NAME: KljaicAProjectAssign06
   FILENAME: KljaicASourceAssign06.cpp

   Page 902 - #7 Month Class

   I was only able to get this working after looking at several examples
   online. I'm not sure if I was overthinking it or what went on. But
   it was rather difficult.

*********************************************************************/
#include <iostream>
#include "string.h"
using namespace std;

class myString {
private:
   void allocate(int);
   void copy(char *, char *);
   char *string;

public:
   myString();
   myString(char *);
   int getLength();
   int getLength(char *);
   void empty();
   bool isEmpty();
   void putString(char *);
   char *getString();
   char *fromLeft(int);
   char *fromRight(int);
   char *fromMid(int, int);
   ~myString();
};


void myString::allocate(int size)
{
    empty();
      string=new char[size];
      if(string == NULL) exit(0);
}

void myString::copy(char *str1, char *str2)
   { int length=getLength(str2);
    for(int i=0;i<=length;i++)
      str1[i]=str2[i]; }

   void myString::empty()
   {
    if(string != NULL)
      {
       delete []string;
       string = NULL;
      }
   }

   bool myString::isEmpty()
   {
    if(string != NULL)
       return false;

    return true;
   }

  int myString::getLength(char *str)
  {
   int i=0;

   while(str[i]!='\0')
     i++;

   return i;
  }

  int myString::getLength()
  {
   if(string != NULL)
     return getLength(string);

   return -1;
  }

  myString::myString(char *str)
  {
   string = NULL;
   int size=getLength(str)+1;

   allocate(size);

   copy(string,str);
  }

  myString::myString()
  {
   string = NULL;
  }

  void myString::putString(char *str)
  {
   int size=getLength(str)+1;

   allocate(size);

   copy(string,str);
  }

  char *myString::getString()
  {
   if(string != NULL)
     {
      return string;
     } else return NULL;
  }

  myString::~myString()
  {
   if(string != NULL)
     delete []string;
  }

  char *myString::fromLeft(int chr)
  {
   if(string != NULL)
     {
      char *temp;
      temp=new char[chr+1];
    int i;
      if(temp == NULL) exit(1);

      for( i = 0 ; i < chr ; i++ )
        temp[i]=string[i];
        temp[i]='\0';
      return temp;
     }
   else return NULL;
  }

  char *myString::fromRight(int chr)
  {
   if(string != NULL)
     {
      char *temp;
      temp=new char[chr+2];
      int a=0;

      if(temp==NULL) exit(1);

      int i = getLength() - 1;
      int j = (i-chr) + 1;

      for( j ; j <= i ; j++ )
        {
         temp[a]=string[j];
         a++;
        }
   temp[a]='\0';
   return temp;
     }
else return NULL;
  }

  char *myString::fromMid(int a,int b)
  {
   if(string!=NULL)
     {
      int size=b+1;
      char *temp;
      temp=new char[size];
      int i=a,j=0,k=(a+b);

      for(i;i<k;i++)
        {
         temp[j]=string[i];
         j++;
        }
   temp[j]='\0';
   return temp;
     }
else return NULL;
  }


class Month {

private:
    myString monthName;
    int monthNumber;

public:
    Month()
        { monthNumber = 1; monthName.putString("January"); }
    Month(char *s)
        {
            monthName.putString(s);
            if (strcmp(s,"January") == 0)  monthNumber = 1;
            if (strcmp(s,"February") == 0) monthNumber = 2;
            if (strcmp(s,"March") == 0) monthNumber = 3;
            if (strcmp(s,"April") == 0) monthNumber = 4;
            if (strcmp(s,"May") == 0) monthNumber = 5;
            if (strcmp(s,"June") == 0) monthNumber = 6;
            if (strcmp(s,"July") == 0) monthNumber = 7;
            if (strcmp(s,"August") == 0) monthNumber = 8;
            if (strcmp(s,"September") == 0) monthNumber = 9;
            if (strcmp(s,"October") == 0) monthNumber = 10;
            if (strcmp(s,"November") == 0) monthNumber = 11;
            if (strcmp(s,"December") == 0) monthNumber = 12;
        }
    Month(int n)        {
        monthNumber = n;
        if (monthNumber == 1) monthName.putString("January");
        if (monthNumber == 2) monthName.putString("February");
        if (monthNumber == 3) monthName.putString("March");
        if (monthNumber == 4) monthName.putString("April");
        if (monthNumber == 5) monthName.putString("May");
        if (monthNumber == 6) monthName.putString("June");
        if (monthNumber == 7) monthName.putString("July");
        if (monthNumber == 8) monthName.putString("August");
        if (monthNumber == 9) monthName.putString("September");
        if (monthNumber == 10) monthName.putString("October");
        if (monthNumber == 11) monthName.putString("November");
        if (monthNumber == 12) monthName.putString("December");
    }
    void SetMonthNumber(int n) { monthNumber=n;

        if (monthNumber == 1) monthName.putString("January");
        if (monthNumber == 2) monthName.putString("February");
        if (monthNumber == 3) monthName.putString("March");
        if (monthNumber == 4) monthName.putString("April");
        if (monthNumber == 5) monthName.putString("May");
        if (monthNumber == 6) monthName.putString("June");
        if (monthNumber == 7) monthName.putString("July");
        if (monthNumber == 8) monthName.putString("August");
        if (monthNumber == 9) monthName.putString("September");
        if (monthNumber == 10) monthName.putString("October");
        if (monthNumber == 11) monthName.putString("November");
        if (monthNumber == 12) monthName.putString("December");
    }
    void SetMonthName(char *s) { monthName.putString(s);

        if (strcmp(s, "January")==0) monthNumber=1;
        if (strcmp(s, "February")==0) monthNumber=2;
        if (strcmp(s, "March")==0) monthNumber=3;
        if (strcmp(s, "April")==0) monthNumber=4;
        if (strcmp(s, "May")==0) monthNumber=5;
        if (strcmp(s, "June")==0) monthNumber=6;
        if (strcmp(s, "July")==0) monthNumber=7;
        if (strcmp(s, "August")==0) monthNumber=8;
        if (strcmp(s, "September")==0) monthNumber=9;
        if (strcmp(s, "October")==0) monthNumber=10;
        if (strcmp(s, "November")==0) monthNumber=11;
        if (strcmp(s, "December")==0) monthNumber=12;
    }
    int GetMonthNumber() const
    {
        return monthNumber;
    }
    myString GetMonthName() const
    {
        return monthName;
    }
    Month & operator ++()
    {
        monthNumber++;
        SetMonthNumber(monthNumber);
        return *this;
    }
    Month  operator++(int)
    {
        Month Temp;
        Temp=*this;
        monthNumber++;
        SetMonthNumber(monthNumber);
        return Temp;
    }

    Month & operator --()
    {
        monthNumber--;
        SetMonthNumber(monthNumber);
        return *this;
    }
    Month operator--(int)
    {
        Month Temp;
        Temp=*this;
        monthNumber--;
        return Temp;
    }
    friend ostream & operator<<(ostream & O, Month a);
};

ostream & operator<<(ostream & O, Month a)
    {
        O << a.monthNumber << " " << a.monthName.getString();
            return O;
    }

istream &operator >> (istream &is, Month &a)	//cin operator overload
    {
        int num;
        char name[12];
        is >> num;
        is >> name;

        a.SetMonthNumber(num);
        a.SetMonthName(name);
        return is;
    }



int main()
{
    Month month;
    char monthName[12];
    int monthNum;

    cout << "Enter a month name  (ex: March): ";
    cin >> monthName;
    month.SetMonthName(monthName);
    cout << month << endl;
    cout << "Enter a month number (1-12): ";
    cin >>  monthNum;
    month.SetMonthNumber(monthNum);
    cout << month << endl;
    cout << " Enter a month number and name  (ex: 3 March  or  12 December): ";
    cin >> month;
    cout << month << endl;

    system("pause");
    return 0;
}
