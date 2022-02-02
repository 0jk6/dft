#include "comp.h"

//operator overloading
Complex Complex::operator + (Complex const &obj) const{
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;

    return res;
}

Complex Complex::operator - (Complex const &obj) const{
    Complex res;
    res.real = real - obj.real;
    res.imag = imag - obj.imag;

    return res;
}

Complex Complex::operator * (Complex const &obj) const{
    Complex res;
    res.real = real*obj.real + (-1)*imag*obj.imag;
    res.imag = real*obj.imag + imag*obj.real;
    
    return res;
}

Complex Complex::operator * (double const x) const{
    Complex res;
    res.real = x*real;
    res.imag = x*imag;

    return res;
}

Complex Complex::operator / (Complex const &obj) const{
    Complex c = conj(obj);

    Complex numerator = (*this)*c;
    Complex denominator = obj*c;

    Complex res = numerator*(1/denominator.real);

    return res;
}

Complex Complex::conj() const{
    Complex res(real, (-1)*imag);
    return res;
}

Complex Complex::conj(Complex const &obj) const{
    Complex res(obj.real, (-1)*obj.imag);
    return res;
}