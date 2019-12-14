/*********************************************************************
    PROGRAM:    Assignment 14
    PROGRAMMER: Aleksandar Kljaic
    INSTRUCTOR: Donna Ogle
    DUE DATE:   Tuesday December 3, 2019

    Modify Pr17-11.cpp. Do Programming Challenge #2 - Course
    Information on p. 1119 in the book.

    Create 3 separate map containers and load the data as shown
    in the assignment. Display each element of the maps.

    Ask the user for a course number. If it is found, display the
    room number, instructor, and meeting time. If not found, display
    an error message. Hint: see p. 1059 in the book.

    Ask the user for another course number. Delete the room number,
    instructor, and meeting time from their respective maps.
    Hint: see p. 1059 in the book.

    Add the following values to the maps (Hint: see p. 1058 in the book):

    Course Number: CSCI270

    Room Number: 104

    Instructor: Ogle

    Meeting Time: 2:00 p.m.

    Display each element of the maps again.

    Name the new program: LastnameFAssign14.cpp where Lastname is your last
    name and F is the first initial of your first name. Ex: OgleD. Save in a
    file folder on your storage device.

    Add 3 comments at the top of the page with your name, the class, and the
    date. Put each comment on a separate line.

    Show the program to me before you leave.


*********************************************************************/

// This program demonstrates an iterator with a map.
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string searchCourse; // Course to search for

    // @MAP #1
    // Create a map containing Course Numbers & Room Numbers
    map<string, int>roomNumber =
    {
        {"CS101", 3004},
        {"CS102", 4501},
        {"CS103", 6755},
        {"NT110", 1244},
        {"CM241", 1411},
        {"CSCI270", 104}
    };

    // Create an iterator.
    map<string, int>::iterator roomnumberIterator;

    // Use the iterator to display each element in the roomNumber map.
    for (roomnumberIterator = roomNumber.begin(); roomnumberIterator != roomNumber.end(); roomnumberIterator++)
    {
        cout << "Course Number: " << roomnumberIterator->first
             << "\tRoom Number: " << roomnumberIterator->second << endl;
    }
    cout << endl;

    // @MAP #2
    // Create a map containing Course Numbers & Instructors
    map<string, string>roomInstructor =
    {
        {"CS101", "Haynes"},
        {"CS102", "Alvarado"},
        {"CS103", "Rich"},
        {"NT110", "Burke"},
        {"CM241", "Lee"},
        {"CSCI270", "Ogle"}
    };
    // Create an iterator.
    map<string, string>::iterator roominstructorIterator;

    // Use the iterator to display each element in the roomInstructor map.
    for (roominstructorIterator = roomInstructor.begin(); roominstructorIterator != roomInstructor.end(); roominstructorIterator++)
    {
        cout << "Course Number: " << roominstructorIterator->first
             << "\tInstructor: " << roominstructorIterator->second << endl;
    }
    cout << endl;

    // @MAP #3
    // Create a map containing Course Numbers & Meeting Times
    map<string, string>roomTime =
    {
        {"CS101", "8:00 a.m."},
        {"CS102", "9:00 a.m."},
        {"CS103", "10:00 a.m."},
        {"NT110", "11:00 a.m."},
        {"CM241", "1:00 p.m."},
        {"CSCI270", "2:00 p.m."}
    };

    // Create an iterator
    map<string, string>::iterator roomtimeIterator;

    // Use the iterator to display each element in the roomTime map
    for (roomtimeIterator = roomTime.begin(); roomtimeIterator != roomTime.end(); roomtimeIterator++)
    {
        cout << "Course Number: " << roomtimeIterator->first
             << "\tMeeting Time: " << roomtimeIterator->second << endl;
    }
    cout << endl;


    // Display Results from searchCourse
    while (int i = 0 != 10)
    {
        // Search for a course input
        cout << "Please enter a course to search: ";
        getline(cin, searchCourse);

        // Search iterators
        roomnumberIterator = roomNumber.find(searchCourse);
        roominstructorIterator = roomInstructor.find(searchCourse);
        roomtimeIterator = roomTime.find(searchCourse);

        if (roomnumberIterator != roomNumber.end())
        {
            cout << "The room for course " << searchCourse << " is: " << roomnumberIterator->second << endl;
        }
        if (roominstructorIterator != roomInstructor.end())
        {
            cout << "The instructor for course " << searchCourse << " is: " << roominstructorIterator->second << endl;
        }
        if (roomtimeIterator != roomTime.end())
        {
            cout << "The time for course " << searchCourse << " is: " << roomtimeIterator->second << endl;
            system("PAUSE");

            // Erase searchCourse from Map
            roomNumber.erase(searchCourse);
            roomInstructor.erase(searchCourse);
            roomTime.erase(searchCourse);

            system("CLS"); // Clear screen

            // display each element in the all three maps
            for (roomnumberIterator = roomNumber.begin(); roomnumberIterator != roomNumber.end(); roomnumberIterator++)
            {
                cout << "Course Number: " << roomnumberIterator->first
                     << "\tRoom Number: " << roomnumberIterator->second << endl;
            }
            cout << endl;
            for (roominstructorIterator = roomInstructor.begin(); roominstructorIterator != roomInstructor.end(); roominstructorIterator++)
            {
                cout << "Course Number: " << roominstructorIterator->first
                     << "\tInstructor: " << roominstructorIterator->second << endl;
            }
            cout << endl;
            for (roomtimeIterator = roomTime.begin(); roomtimeIterator != roomTime.end(); roomtimeIterator++)
            {
                cout << "Course Number: " << roomtimeIterator->first
                     << "\tMeeting Time: " << roomtimeIterator->second << endl;
            }
            cout << endl;
        }
        else
        {
            cout << "Course not found." << endl;
            system("PAUSE");
            return 0;
        }
    }
}
