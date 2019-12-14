/*********************************************************************
   PROGRAM:    CSCI 270 - Assignment 4
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Tuesday September 17, 2019

   PROJECT NAME: KljaicAProjectAssign04
   FILENAME: KljaicASourceAssign04.cpp

   Page 811 Programming Challenge #8 - 9th Edition

        @ Professor Ogle

   # I was attempting to make a class CocentricCalculation
   # to calculate Cocentric Circles from Circle and CircleTwo
   # but was unable to incorporate it. Therefore I've let it as is.
   # I hope this is what you were looking for according to the
   # assignment criteria. - Alex

*********************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

// Defines a class Circle
class Circle
{
    private:
        double radius; // Defines radius for circle one
        double pi = 3.14159; // Sets value for pi

    public:

        // Empty Class
        Circle()
        {

        }
        // Defines radius to circleRadius
        Circle(double circleRadius)
        {
            radius = circleRadius;
        }

        void setRadius(double circleRadius);
        double getRadius();
        double getArea();
        double getDiameter();
        double getCircumference();

};
// Defines a class CircleTwo
class CircleTwo
{
    private:
        double radiusTwo; // Defines radius for circle two
        double pi = 3.14159; // Sets value for pi

    public:

        // Empty Class
        CircleTwo()
        {

        }

        // Defines radius to circleRadius
        CircleTwo(double circleRadiusTwo)
        {
            radiusTwo = circleRadiusTwo;
        }

        void setRadiusTwo(double circleRadiusTwo);
        double getRadiusTwo();
        double getAreaTwo();
        double getDiameterTwo();
        double getCircumferenceTwo();

};

void Circle::setRadius(double circleRadius)
{
    // Setting radius for calculating later
    radius = circleRadius;
}

void CircleTwo::setRadiusTwo(double circleRadiusTwo)
{
    // Setting radius for calculating later
    radiusTwo = circleRadiusTwo;
}

double Circle::getRadius()
{
    // Getting radius from user input and storing it
    return radius;
}

double CircleTwo::getRadiusTwo()
{
    // Getting radius from user input and storing it
    return radiusTwo;
}

double Circle::getArea()
{
    // Calculating are of circle one
    double circleArea = pi * radius * radius;
    return circleArea;
}

double CircleTwo::getAreaTwo()
{
    // Calculating area of circle two
    double circleAreaTwo = pi * radiusTwo * radiusTwo;
    return circleAreaTwo;
}

double Circle::getCircumference()
{
    // Calculating circumference of circle one
    double circleCircumference = 2 * pi * radius;
    return circleCircumference;
}

double CircleTwo::getCircumferenceTwo()
{
    // Calculating circumference of circle two
    double circleCircumferenceTwo = 2 * pi * radiusTwo;
    return circleCircumferenceTwo;
}

double Circle::getDiameter()
{
    // Calculating diameter of circle one
    double circleDiameter = 2 * radius;
    return circleDiameter;
}

double CircleTwo::getDiameterTwo()
{
    // Calculating diameter of circle two
    double circleDiameterTwo = 2 * radiusTwo;
    return circleDiameterTwo;
}

int main()
{
    double circleRadius; // Defines variable circleRadius
    double circleRadiusTwo; // Defines variable circleRadiusTwo

    // Requests user input for radius of circle one
    cout << "Enter radius for circle one: ";
    cin >> circleRadius;
    cout << endl;

    // Requests user input for radius of circle two
    cout << "Enter radius for circle two: ";
    cin >> circleRadiusTwo;
    cout << endl;

    // Loads values of circle one and circle two
    Circle circle1(circleRadius),circle2(circleRadiusTwo);

    // Outputs for circle One
    cout << "A circle (One) with a radius of [" << circle1.getRadius() << "] has an:" << endl;
    cout << "Area of: [" << circle1.getArea() << "]"  << endl;
    cout << "Diameter of: [" << circle1.getDiameter() << "]"  << endl;
    cout << "Circumference of: [" << circle1.getCircumference() << "]"  << endl;
    cout << endl;

    // Outputs for circle Two
    cout << "A circle (Two) with a radius of [" << circle2.getRadius() << "] has an:" << endl;
    cout << "Area of: [" << circle2.getArea() << "]" << endl;
    cout << "Diameter of: [" << circle2.getDiameter() << "]"  << endl;
    cout << "Circumference of: [" << circle2.getCircumference() << "]"  << endl;
    cout << endl;

    // Calculation for cocentric circles (circle 1 area minus circle 2 area)
    double cocentricArea= abs(circle1.getArea() - circle2.getArea());
    cout << "Cocentric circle area is: [" << cocentricArea << "]" << endl;

    system("pause");
    return 0;
}
