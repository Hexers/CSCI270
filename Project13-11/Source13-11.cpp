// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo
{
public:
   Demo();     // Constructor
   Demo(int);   // Constructor (New Addition) That takes an int
   ~Demo();    // Destructor
};

Demo::Demo()
{
   cout << "Welcome to the constructor!\n";
}

Demo::Demo(int num)
{
   cout << "Welcome to the second constructor!\n";
   cout << "Your number is: " << num << endl;
}

Demo::~Demo()
{
   cout << "The destructor is now running.\n";
}

//*********************************************
// Function main.                             *
//*********************************************

int main()
{
   Demo demoObject;  // Define a demo object;
   Demo demoObj(56);

   cout << "This program demonstrates an object\n";
   cout << "with a constructor and destructor.\n";

   system("Pause");
   return 0;
}
