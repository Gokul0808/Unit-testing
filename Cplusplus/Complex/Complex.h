/**
 * @file Complex.h
 * @author Bharath.G ()
 * @brief Implementation of Overloading functions for Complex nUmber
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __COMPLEX_H_
#define __COMPLEX_H_
#include <iostream>

class Complex
{
private:
    int real;
    int img;
public:
    Complex();
    Complex(int val);
    Complex(int real, int img);
    Complex(const Complex&);

    int get_real();
    int get_img();

    Complex& operator++();
    Complex operator++(int);

    bool operator==(const Complex&); 
    Complex operator+(const Complex& ref);

    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend std::istream& operator>>(std::istream&, const Complex&);
    ~Complex();
};


#endif //#ifndef __COMPLEX_H_