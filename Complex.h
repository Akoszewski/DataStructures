#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imaginary;
    public:
        Complex();
        Complex(int realPart, int imaginaryPart);
        Complex operator+(const Complex& x) const;
        Complex operator-(const Complex& x) const;
        Complex& operator=(const Complex& nval);
        friend ostream& operator<<(ostream& out, const Complex& val);
};

#endif 