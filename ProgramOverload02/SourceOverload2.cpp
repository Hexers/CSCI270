// A simple overloading example using two objects

#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex();
    Complex(int, int);


    Complex operator + (Complex const &);
    Complex operator - (Complex const &);
    Complex operator * (Complex const &);
    Complex operator / (Complex const &);
    Complex operator % (Complex const &);
    void operator++ ();
    void operator-- ();

    void print();
};

// Default Constructor
Complex::Complex()
{
    real = 0;
    imag = 0;
}

// Second Constructor
Complex::Complex(int r, int i)
{
    real = r;   imag = i;
}

// This is automatically called when '+' is used with
// between two Complex objects
Complex Complex::operator + (Complex const &obj)
{
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
}

Complex Complex::operator - (Complex const &obj)
{
    Complex res;
    res.real = real - obj.real;
    res.imag = imag - obj.imag;
    return res;
}

Complex Complex::operator * (Complex const &obj)
{
    Complex res;
    res.real = real * obj.real;
    res.imag = imag * obj.imag;
    return res;
}

Complex Complex::operator / (Complex const &obj)
{
    Complex res;
    res.real = real / obj.real;
    res.imag = imag / obj.imag;
    return res;
}

void Complex::operator ++ ()
{
    real = real + 1;
    imag = imag + 1;
}



void Complex::operator -- ()
{
    real = real - 1;
    imag = imag - 1;

}

Complex Complex::operator % (Complex const &obj)
{
    Complex res;
    res.real = real % obj.real;
    res.imag = imag % obj.imag;
    return res;
}

// Print Function in Complex
void Complex::print()
{
    cout << real << " + i" << imag << endl;
}

int main()
{
    Complex c1(10, 5), c2(2, 4);

    Complex c3 = c1 + c2;
    cout << "An example call to operator+" << endl;
    c3.print();

    Complex c4 = c1 - c2;
    cout << "An example call to operator-"<< endl;
    c4.print();

    Complex c5 = c1 * c2;
    cout << "An example call to operator*"<< endl;
    c5.print();

    Complex c6 = c1 / c2;
    cout << "An example call to operator/"<< endl;
    c6.print();

    cout << "An example call to operator++"<< endl;
    ++c3;
    c3.print();

    cout << "An example call to operator--"<< endl;
    --c3;
    c3.print();

    Complex c7 = c1 % c2;
    cout << "An example call to operator%"<< endl;
    c7.print();

    system("pause");
    return 0;
}
