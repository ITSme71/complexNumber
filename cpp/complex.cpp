#include "./inc/complex.h"

complex::complex()
{
   complex(0,0); 
}

complex::complex(dataInComplex real, dataInComplex imag)
{
    setReal(real);
    setImag(imag);
}

/*method to get private variable (real) */
dataInComplex complex::getReal()
{
    return real;
}

/*method to get private variable (imag) */
dataInComplex complex::getImag()
{
    return imag;
}

/*method to set private variable (real) */
void complex::setReal(dataInComplex real)
{
    this->real = real;
}

/*method to set private variable (imag) */
void complex::setImag(dataInComplex imag)
{
    this->imag = imag;
}

/* print complex number */
void complex::print_c()
{
    printf("%.5f  ", getReal());
    if (getImag() <0)
    	printf("- %.5fi\n", -getImag());
    else
    	printf("+ %.5fi\n", getImag());
}

/* calculate the sum of complex number and real number */
complex complex::add_cr(dataInComplex real)
{
    dataInComplex sum = getReal() + real;
    return complex(sum, getImag());
}

/* calculate the sum of complex number and imag number */
complex complex::add_ci(dataInComplex imag)
{
    dataInComplex sum = getImag() + imag;
    return complex(getReal(), sum);
}

/* calculate the sub of complex number and real number */
complex complex::sub_cr(dataInComplex real)
{
    dataInComplex sum = getReal() - real;
    return complex(sum, getImag());
}

/* calculate the sub of complex number and imag number */
complex complex::sub_ci(dataInComplex imag)
{
    dataInComplex sum = getImag() - imag;
    return complex(getReal(), sum);
}

/* calculate the sum of two complex numbers */
complex complex::add_cc(complex cpB)
{
    dataInComplex realOut = getReal() + cpB.real;
    dataInComplex imagOut = getImag() + cpB.imag;
    return complex(realOut, imagOut);
}

/* subtract two complex numbers */
complex complex::sub_cc(complex cpB)
{
    dataInComplex realOut = getReal() - cpB.real;
    dataInComplex imagOut = getImag() - cpB.imag;
    return complex(realOut, imagOut);
}

/* multiply complex number with real number */
complex complex::mult_cr(dataInComplex real)
{
    dataInComplex realOut = getReal()*real;
    dataInComplex imagOut = getImag()*real;
    return complex(realOut, imagOut);
}

/*multiply complex number with imag number */
complex complex::mult_ci(dataInComplex imag)
{
    dataInComplex realOut = -getImag()*imag;
    dataInComplex imagOut = getReal()*imag;
    return complex(realOut, imagOut);
}

/*multiply complex number with complex number */
complex complex::mult_cc(complex cpB)
{
    dataInComplex realOut = getReal()*cpB.getReal() - getImag()*cpB.getImag();
    dataInComplex imagOut = getImag()*cpB.getReal() + getReal()*cpB.getImag();
    return complex(realOut, imagOut);
}

/* return the absolue value of complex number */
dataOutComplex complex::abs_c()
{
    dataInComplex result = (dataInComplex)(getReal() * getReal()) + (dataInComplex)(getImag() * getImag());
    return sqrtf(result);
}

/*return conjugate of a complex number*/
complex complex::conj_c()
{
    return complex(getReal(), -getImag());
}

/* return inverse of a complex number 1/cpA */
complex complex::inv_c()
{
    complex result = this->conj_c();
    dataInComplex divisor = (dataInComplex)(getReal() * getReal()) + (dataInComplex)(getImag() * getImag());
    return result.mult_cr(1/divisor);
}

/* division complex number by real number */
complex complex::div_cr(dataInComplex real)
{
    dataInComplex realOut = (dataInComplex)(getReal()/real);
    dataInComplex imagOut = (dataInComplex)(getImag()/real);
    return complex(realOut, imagOut);
}

/* division complex number by imag number */
complex complex::div_ci(dataInComplex imag)
{
    dataInComplex realOut = (dataInComplex)(getImag()/imag);
    dataInComplex imagOut = (dataInComplex)(-getReal()/imag);
    return complex(realOut, imagOut);
}

/* return division between two complex numver cpA/cpB  */
complex complex::div_cc(complex cpB)
{
    complex result = this->mult_cc(cpB.conj_c());
    dataInComplex divisor = (dataInComplex)(getReal() * getReal()) + (dataInComplex)(getImag() * getImag());
    return result.mult_cr(1/divisor);
}

/* find sin and cos values for imput anle in rad*/
complex complex::sinCos(dataInComplex angle)
{
    dataInComplex realOut = cosf(angle);
    dataInComplex imagOut = sinf(angle);
    return complex(realOut, imagOut);
}

