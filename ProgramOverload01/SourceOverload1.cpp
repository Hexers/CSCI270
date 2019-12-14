// A very simple operator overloading example

#include <iostream>
using namespace std;

class Test
{
private:
    int count;

public:
    Test();

    void operator ++();
    void operator --();
    int getCount();
};

// Default Constructor
Test::Test()
{
    count = 5;
}

// Overloading example for ++
void Test::operator ++()
{
    count = count + 1;
}

// Overloading example for --
void Test::operator --()
{
    count = count - 1;
}

// Return the Count variable
int Test::getCount()
{
    return count;
}

int main()
{
    Test t;
    // this calls "function void operator ++()" function
    cout << "Count initially: " << t.getCount() << endl;
    ++t;
    cout << "Count after the ++: " << t.getCount()<<endl;

    Test t2;
    // this calls "function void operator ++()" function
    cout << "Count initially: " << t2.getCount() << endl;
    --t2;
    cout << "Count after the ++: " << t2.getCount()<<endl;

    system("pause");
    return 0;
}
