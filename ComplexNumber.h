#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>

using namespace std;

class ComplexNumber
{
    private:
        float real;
        float imaginary;

    public:
        ComplexNumber();
        ComplexNumber(float Real, float Imaginary);
        float getReal();
        float getImaginary();
        void setReal(float Real);
        void setImaginary(float Imaginary);
        void printNumber(ComplexNumber number);
        float getModulus(ComplexNumber num);
        ComplexNumber getConjugate();
        ComplexNumber static add(ComplexNumber num1, ComplexNumber num2);
        ComplexNumber static subtract(ComplexNumber num1, ComplexNumber num2);
        ComplexNumber static multiply(ComplexNumber num1, ComplexNumber num2);
        void toString(ComplexNumber num);
};
#endif
