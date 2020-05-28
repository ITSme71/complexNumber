#ifndef COMPLEX_H_
#define COMPLEX_H_

//#include <iostream>
#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
#include <math.h>
typedef float dataInComplex;
typedef float dataOutComplex;

class complex
{
    private:
        dataInComplex real;
        dataInComplex imag;

    public:
        /*default constructor*/
        complex();

        /*parametrized constructor*/
        complex(dataInComplex real, dataInComplex imag);

        /*get value in variable: real (encapsulation)*/
        dataInComplex getReal();

        /*get value in variable: imag (encapsulation)*/
        dataInComplex getImag();

        /*set value in variable: real (encapsulation)*/
        void setReal(dataInComplex real);

        /*set value in variable: imag (encapsulation)*/
        void setImag(dataInComplex imag);
            
        /* print complex number */
        void print_c();

        /* calculate the sum of complex number and real number */
        complex add_cr(dataInComplex real);

        /* calculate the sum of complex number and imag number */
        complex add_ci(dataInComplex imag);

        /* calculate the sub of complex number and real number */
        complex sub_cr(dataInComplex real);

        /* calculate the sub of complex number and imag number */
        complex sub_ci(dataInComplex imag);

        /* calculate the sum of two complex numbers */
        complex add_cc(complex cpB);

        /* subtract two complex numbers */
        complex sub_cc(complex cpB);

        /* multiply complex number with real number */
        complex mult_cr(dataInComplex real);

        /* multiply complex number with imag number */
        complex mult_ci(dataInComplex imag);

        /* multiply complex number with complex number */
        complex mult_cc(complex cpB);

        /* return the absolue value of complex number*/
        dataInComplex abs_c();

        /* return conjugate of a complex number */
        complex conj_c();

        /* return inverse of a complex number */
        complex inv_c();

        /* division complex number by real number */
        complex div_cr(dataInComplex real);

        /* division complex number by imag number */
        complex div_ci(dataInComplex imag);

        /* return division between two complex numver */
        complex div_cc(complex cpB);

        /* find sin and cos values */
        complex sinCos(dataInComplex angle);

};

#endif
