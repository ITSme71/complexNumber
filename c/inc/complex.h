#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
#include <math.h>
typedef float dataInComplex;
typedef float dataOutComplex;

typedef struct complex{
    dataInComplex real;
	dataInComplex imag;
} complex;

/* initialize a complex number */
complex myComplex(dataInComplex real, dataInComplex imag);

/* print complex number */
void print_c(complex cp);

/* calculate the sum of complex number and real number */
complex add_cr(complex cpA, dataInComplex real);

/* calculate the sum of complex number and imag number */
complex add_ci(complex cpA, dataInComplex imag);

/* calculate the sub of complex number and real number */
complex sub_cr(complex cpA, dataInComplex real);

/* calculate the sub of complex number and imag number */
complex sub_ci(complex cpA, dataInComplex imag);

/* calculate the sum of two complex numbers */
complex add_cc(complex cpA, complex cpB);

/* subtract two complex numbers */
complex sub_cc(complex cpA, complex cpB);

/* multiply complex number with real number */
complex mult_cr(complex cpA, dataInComplex real);

/* multiply complex number with imag number */
complex mult_ci(complex cpA, dataInComplex imag);

/* multiply complex number with complex number */
complex mult_cc(complex cpA, complex cpB);

/* return the absolue value of complex number*/
dataInComplex abs_c(complex cpA);

/* return conjugate of a complex number */
complex conj_c(complex cpA);

/* return inverse of a complex number */
complex inv_c(complex cpA);

/* division complex number by real number */
complex div_cr(complex cpA, dataInComplex real);

/* division complex number by imag number */
complex div_ci(complex cpA, dataInComplex real);

/* return division between two complex numver */
complex div_cc(complex cpA, complex cpB);

/* find sin and cos values */
complex mySinCos(dataInComplex angle);

#endif
