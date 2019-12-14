/*********************************************************************
    PROGRAM:    Assignment 15
    PROGRAMMER: Aleksandar Kljaic
    INSTRUCTOR: Donna Ogle
    DUE DATE:   Tuesday December 3, 2019

    Do Programming Challenge #6 - Essay Class on p. 983 in the book.

    I have included: GradedActivity.h, GradedActivity.cpp, FinalExam.h,
    FinalExam.cpp, and Pr15-2.cpp. I suggest you load this code and get
    the final exam to work. You will not make changes to GradedActivity.h
    nor GradedActivity.cpp

    You will need to modify the Final Exam code to match that on p. 983
    in the book. You may leave the names as FinalExam.h, FinalExam.cpp,
    and the FinalExam class. Assume that the essay is the final exam.
    (Do not create a separate class for Essay, just modify the FinalExam class.)

    The new main() code could look like this. You do not need to ask the user
    to enter the results.

    int main()
    {
        FinalExam essay(20,10,20,30);

        // Display the test results.
        cout << "The exam score is " << essay.getScore() << endl;
        cout << "The exam grade is " << essay.getLetterGrade() << endl;

        cout << "The grammar score is " << essay.getGrammar() << endl;
        cout << "The spelling score is " << essay.getSpelling() << endl;
        cout << "The length score is " << essay.getLength() << endl;
        cout << "The content score is " << essay.getContent() << endl;

        system("pause");
        return 0;
    }

    Name the new program: LastnameFAssign15.cpp where Lastname is your
    last name and F is the first initial of your first name. Ex: OgleD.
    Save in a file folder on your storage device.

    Add 3 comments at the top of the page with your name, the class, and
    the date. Put each comment on a separate line.

    Show me your work.

    If you upload, upload your source, FinalExam.h, and FinalExam.cpp.

*********************************************************************/

// This program demonstrates a base class and a derived class.
#include <iostream>
#include <iomanip>
#include "FinalExam.h"
using namespace std;

int main()
{
    int questions; // Number of questions on the exam
    int missed;    // Number of questions missed by the student

    double grammar;
    double spelling;
    double length;
    double content;

    // Get the number of questions on the final exam.
    cout << "How many questions are on the final exam? ";
    cin >> questions;

    // Get the number of questions the student missed.
    cout << "How many questions did the student miss? ";
    cin >> missed;

    // Define a FinalExam object and initialize it with
    // the values entered.
    FinalExam test(questions, missed);

    // Display the test results.
    cout << setprecision(2);
    cout << "\nEach question counts " << test.getPointsEach()
         << " points.\n";
    cout << "The exam score is " << test.getScore() << endl;
    cout << "The exam grade is " << test.getLetterGrade() << endl;

    cout << endl;
    // Essay stuffs below

    cout << "How many Grammar Points did you get? ";
    cin >> grammar;

    cout << "How many Spelling Points did you get? ";
    cin >> spelling;

    cout << "How many Length Points did you get? ";
    cin >> length;

    cout << "How many Content Points did you get? ";
    cin >> content;

    // Get the number of questions the student missed.

    Essay essay(grammar, spelling, length, content);

    // Display the test results.
    cout << setprecision(2);
    cout << "The exam score is " << essay.getScore() << endl;
    cout << "The exam grade is " << essay.getLetterGrade() << endl;

    cout << "The grammar score is " << essay.getGrammar() << endl;
    cout << "The spelling score is " << essay.getSpelling() << endl;
    cout << "The length score is " << essay.getLength() << endl;
    cout << "The content score is " << essay.getContent() << endl;

    system("PAUSE");
    return 0;
}
