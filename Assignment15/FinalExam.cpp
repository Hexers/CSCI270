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

#include "FinalExam.h"

//********************************************************
// set function                                          *
// The parameters are the number of questions and the    *
// number of questions missed.                           *
//********************************************************

void FinalExam::set(int questions, int missed)
{
    double numericScore;  // To hold the numeric score

    // Set the number of questions and number missed.
    numQuestions = questions;
    numMissed = missed;

    // Calculate the points for each question.
    pointsEach = 100.0 / numQuestions;

    // Calculate the numeric score for this exam.
    numericScore = 100.0 - (missed * pointsEach);

    // Call the inherited setScore function to set
    // the numeric score.
    setScore(numericScore);
}

void Essay::set(double grammar, double spelling, double length, double content)
{
    double numericScore;  // To hold the numeric score

    numGrammar = grammar;
    numSpelling = spelling;
    numLength = length;
    numContent = content;


    // Calculate the numeric score for this exam.
    numericScore = (numGrammar + numSpelling + numLength + numContent);

    // Call the inherited setScore function to set
    // the numeric score.
    setScore(numericScore);
}
