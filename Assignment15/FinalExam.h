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

#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "GradedActivity.h"

class FinalExam : public GradedActivity
{
private:
    int numQuestions;    // Number of questions
    double pointsEach;   // Points for each question
    int numMissed;       // Number of questions missed


public:
    // Default constructor
    FinalExam()
    {
        numQuestions = 0;
        pointsEach = 0.0;
        numMissed = 0;
    }

    // Constructor
    FinalExam(int questions, int missed)
    {
        set(questions, missed);
    }

    // Mutator function
    void set(int, int);  // Defined in FinalExam.cpp

    // Accessor functions
    double getNumQuestions() const
    {
        return numQuestions;
    }

    double getPointsEach() const
    {
        return pointsEach;
    }

    int getNumMissed() const
    {
        return numMissed;
    }

};

class Essay : public GradedActivity
{
private:

    double numGrammar;
    double numSpelling;
    double numLength;
    double numContent;

public:
    // Default constructor
    Essay()
    {
        numGrammar = 0.0;
        numSpelling = 0.0;
        numLength = 0.0;
        numContent = 0.0;
    }

    // Constructor two
    Essay(double grammar, double spelling, double length, double content)
    {
        set(grammar, spelling, length, content);
    }

    void set(double, double, double, double);

    // New accessor functions

    double getGrammar() const
    {
        return numGrammar;
    }

    double getSpelling() const
    {
        return numSpelling;
    }

    double getLength() const
    {
        return numLength;
    }

    double getContent() const
    {
        return numContent;
    }

};
#endif
