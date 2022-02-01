#ifndef __COMP_H
#define __COMP_H

#include <iostream>

#define PI 3.1415926535897932384626434

class Complex{
private:
    double real;
    double imag;

public:
    //constructor
    Complex(double r=0, double i=0){real = r; imag = i;}

    //operator overloading
    Complex operator + (Complex const &obj) const;

    Complex operator - (Complex const &obj) const;

    Complex operator * (Complex const &obj) const;

    Complex operator * (double const x) const;

    Complex operator / (Complex const &obj) const;

    Complex conj() const;

    Complex conj(Complex const &obj) const;

    void print(){
        std::cout << real << " + " << imag << "j\n";
    }
};



#endif