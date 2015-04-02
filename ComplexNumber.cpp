#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{

}

ComplexNumber::ComplexNumber(float Real, float Imaginary)
{
    setReal(Real);
    setImaginary(Imaginary);
}

void ComplexNumber::setReal(float Real)
{
    this->real=Real;
}

void ComplexNumber::setImaginary(float Imaginary)
{
    this->imaginary=Imaginary;
}

float ComplexNumber::getReal()
{
    return real;
}

float ComplexNumber::getImaginary()
{
    return imaginary;
}

void ComplexNumber::printNumber(ComplexNumber number)
{
    float realPart=number.getReal();
    float imaginaryPart=number.getImaginary();

    cout << realPart << "+" << imaginaryPart << "i" << endl;
}

float ComplexNumber::getModulus(ComplexNumber num)
{
    float realPart=num.getReal();
    float imaginaryPart=num.getImaginary();
    float modulus1;
    float modulus2;
    float modulus;

    modulus1=pow(realPart,2);
    modulus2=pow(imaginaryPart,2);
    modulus=sqrt(modulus1+modulus2);
    cout << "The modulus for " << num.getReal() << "+" << num.getImaginary() << "i" << " is:" << endl;
    cout << modulus << endl;

    return modulus;
}

ComplexNumber ComplexNumber::add(ComplexNumber num1, ComplexNumber num2)
{
    //the real part of the first complex number
    float real1=num1.getReal();

    //the imaginary part of the first complex number
    float imaginary1=num1.getImaginary();

    //the real part of the second complex number
    float real2=num2.getReal();

    //the imaginary part of the second complex number
    float imaginary2=num2.getImaginary();

    float realSum=real1+real2;

    float imaginarySum=imaginary1+imaginary2;

    ComplexNumber sum;

    sum.setReal(realSum);
    sum.setImaginary(imaginarySum);

    cout << "The sum of " << num1.getReal() << "+" << num1.getImaginary() << "i" << " and " << num2.getReal() << "+" << num2.getImaginary() << "i" << " is:" << endl;
    sum.printNumber(sum);

    return sum;
}

ComplexNumber ComplexNumber::subtract(ComplexNumber num1, ComplexNumber num2)
{
    //the real part of the first complex number
    float real1=num1.getReal();

    //the imaginary part of the first complex number
    float imaginary1=num1.getImaginary();

    //the real part of the second complex number
    float real2=num2.getReal();

    //the imaginary part of the second complex number
    float imaginary2=num2.getImaginary();

    float realDifference=real1-real2;

    float imaginaryDifference=imaginary1-imaginary2;

    ComplexNumber difference;

    difference.setReal(realDifference);
    difference.setImaginary(imaginaryDifference);

    cout << "The difference of " << num1.getReal() << "+" << num1.getImaginary() << "i" << " and " << num2.getReal() << "+" << num2.getImaginary() << "i" << " is:" << endl;
    difference.printNumber(difference);

    return difference;
}

//compute the product of two complex numbers using the FOIL (First Outer Inner Last) method
ComplexNumber ComplexNumber::multiply(ComplexNumber num1, ComplexNumber num2)
{
    //the real part of the first complex number
    float real1=num1.getReal();

    //the imaginary part of the first complex number
    float imaginary1=num1.getImaginary();

    //the real part of the second complex number
    float real2=num2.getReal();

    //the imaginary part of the second complex number
    float imaginary2=num2.getImaginary();

    //FIRST part of the foil method
    float first=real1*real2;

    //OUTTER part of the foil method
    float outter=real1*imaginary2;

    //INNER part of the foil method
    float inner=imaginary1*real2;

    //LAST part of the foil method
    float last=imaginary1*imaginary2;

    //Sum of OUTTER and INNER parts to give us the part of the imaginar part of the sum
    float outterInnerSum=outter+inner;

    //multiply the product of the two imaginary parts by -1 since 
    //the imaginary product has a i^2 term and i^2 = -1
    last*=-1;

    ComplexNumber product;

    product.setReal(first+last);
    product.setImaginary(outterInnerSum);

    cout << "The product of " << num1.getReal() << "+" << num1.getImaginary() << "i" << " and " << num2.getReal() << "+" << num2.getImaginary() << "i" << " is:" << endl;
    product.printNumber(product);

    return product;
}

void ComplexNumber::toString(ComplexNumber num)
{
    float realPart=num.getReal();
    float imaginaryPart=num.getImaginary();

    cout << realPart << "+" << imaginaryPart << "i" << " in string form is:" << endl;
    cout << "\"" << realPart << "+" << imaginaryPart << "i" << "\"" << endl;

}