/*********************************************************************
   PROGRAM:    CSCI 270 - Extra Credit
   PROGRAMMER: Aleksandar Kljaic
   INSTRUCTOR: Donna Ogle
   DUE DATE:   Tuesday October 15, 2019

*********************************************************************/

#include<iostream>
#include<iomanip>

using namespace std;


class Population
{

private:

    double population;
    double birth;
    double death;

public:

    Population(double p, double b, double d)
    {
        population = p;
        birth = b;
        death = d;
    }

    double getBirthRate()
    {
        return birth / population;
    }

    double getDeathRate()
    {
        return death / population;
    }

};

int main()

{
    double population;
    double birth;
    double death;

    do
    {
        cout << "What is the starting population: ";
        cin >> population;

        if(population < 100000 || population < 0)
        {
            cout << "Population must be greater than 100000 and a positive value." << endl;
        }

    }
    while( population < 100000 || population < 0 );

    do
    {
        cout << "What is the amount of births: ";
        cin >> birth;

        if( birth <= 0 )
        {
            cout << "Births cannot be less than or equal to zero." << endl;
        }
    }
    while( birth <= 0 );

    do
    {
        cout << "What is the amount of deaths: ";
        cin >> death;

        if( death <= 0 )
        {
            cout << "Deaths cannot be less than or equal to zero." << endl;
        }

    }
    while( death <= 0 );

    Population P(population, birth, death);

    cout << "Birth Rate is: " << P.getBirthRate() << endl;
    cout << "Death Rate is: " << P.getDeathRate() << endl;

    system("Pause");
    return 0;
}
