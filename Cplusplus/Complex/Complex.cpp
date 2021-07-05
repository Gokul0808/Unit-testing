#include "Complex.h"

Complex::Complex():real(0),img(0)
{
}

Complex::Complex(int val):real(val), img(val)
{
}

Complex::Complex(int real, int img):real(real),img(img)
{
}

Complex::Complex(const Complex& ref):real(ref.real), img(ref.img)
{
}

Complex Complex::operator+(const Complex& ref)
{
    Complex temp;
    temp.real = this->real + ref.real;
    temp.img = this->img + ref.img;

    return temp;
}

Complex& Complex::operator++()
{
    this->real++;
    this->img++;
    return (*this);
}

Complex Complex::operator++(int dummy)
{
    Complex temp(*this);
    
    this->real++;
    this->img++;
    return temp;
}

bool Complex::operator==(const Complex& ref)
{
    return (this->real == ref.real && this->img == ref.img);
}

std::ostream& operator<<(std::ostream& rout, const Complex& ref)
{
    rout << ref.real << "+" <<ref.img;
    return rout;
}

std::istream& operator>>(std::istream& rin, const Complex& ref)
{
    rin >> ref.real >> ref.img;
    return rin;
}
int Complex::get_real()
{
    return real;
}
int Complex::get_img()
{
    return img;
}

Complex::~Complex()
{
}