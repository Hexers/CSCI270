/*********************************************************************
    PROGRAM:    CSCI 270 - Assignment 12
    PROGRAMMER: Aleksandar Kljaic
    INSTRUCTOR: Donna Ogle
    DUE DATE:   Thursday November 7, 2019

    Do Programming Challenge #3 - Minimum/Maximum Templates on p. 1026 in
    the book. Name the new program: LastnameFAssign12.cpp where Lastname
    is your last name and F is the first initial of your first name.
    Ex: OgleD. Save in a file folder on your storage device.

    Start with  Pr16-9. Use multiple data types.

    Add 3 comments at the top of the page with your name, the class, and
    the date. Put each comment on a separate line.

    In addition, I want at least 5 additional comments in the program.
    All comments must describe what the program is doing. Also, the variable
    and function names must be descriptive. Your output must also be descriptive.

    Please do your own work and create your own variable names.

    Test the program and make sure it runs.

    Show the program to me.

*********************************************************************/
#include <iostream>
using namespace std;

template <class T>
inline const T& Maximum(const T &var1, const T &var2)
{
    sizeof(var1) > sizeof(var2);
    {
        return var2;
    }
}
template <class T>
inline const T& Minimum(const T &var1, const T &var2)
{
    sizeof(var1) < sizeof(var2);
    {
        return var1;
    }
}

int main()
{
    cout << "Maximum Outputs:" << endl;
    cout << " Maximum (14, 46) is: " << Maximum(14,46) << endl;
    cout << " Maximum (-22, -3) is: " << Maximum(-22,-3) << endl;
    cout << " Maximum (13.28, 17.88) is: " << Maximum(13.28,17.88) << endl;
    cout << " Maximum (11.2, 15.99) is: " << Maximum(11.2,15.99) << endl;
    cout << " Maximum (hotdog, Hotdog) is: " << Maximum("hotdog","Hotdog") << endl;
    cout << " Maximum (hamburger, Hamburger) is: " << Maximum("hamburger","Hamburger") << endl;

    cout << endl << "Minimum Outputs: " << endl;
    cout << " Minimum (14, 46) is: " << Minimum(14,46) << endl;
    cout << " Minimum (-22, -3) is: " << Minimum(-22,-3) << endl;
    cout << " Minimum (13.28, 17.88) is: " << Minimum(13.28,17.88) << endl;
    cout << " Minimum (11.2, 15.99) is: " << Minimum(11.2,15.99) << endl;
    cout << " Minimum (hotdog, Hotdog) is: " << Minimum("hotdog","Hotdog") << endl;
    cout << " Minimum (hamburger, Hamburger) is: " << Minimum("hamburger","Hamburger") << endl;

    system("PAUSE");
    return 0;
}
