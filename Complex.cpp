#include "Complex.h"

Complex::Complex() : real(0), imaginary(0)
{

}

Complex::Complex(int realPart, int imaginaryPart) : real(realPart), imaginary(imaginaryPart)
{

}

Complex Complex::operator+(const Complex& x) const
{
    return Complex(real + x.real, imaginary + x.imaginary);
}

Complex Complex::operator-(const Complex& x) const
{
    return Complex(real - x.real, imaginary - x.imaginary);
}

Complex& Complex::operator=(const Complex& nval)
{
    if((real != nval.real) || (imaginary != nval.imaginary))
    {
        real = nval.real;
        imaginary = nval.imaginary;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Complex& val)
{
    out << val.real << " + " << val.imaginary << "i ";
    return out;
}
