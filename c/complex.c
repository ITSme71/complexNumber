#include "./inc/complex.h"



complex myComplex(dataInComplex real, dataInComplex imag)
{
    complex cpA;
    cpA.real = real;
    cpA.imag = imag;
    return cpA;
}

/* print complex number */
void print_c(complex cp)
{
    printf("%.5f  ", cp.real);
    if (cp.imag <0)
    	printf("- %.5fi\n", -cp.imag);
    else
    	printf("+ %.5fi\n", cp.imag);
}

/* calculate the sum of complex number and real number */
complex add_cr(complex cpA, dataInComplex real)
{
	cpA.real += real;
    return cpA;
}

/* calculate the sum of complex number and imag number */
complex add_ci(complex cpA, dataInComplex imag)
{
	cpA.imag += imag;
    return cpA;
}

/* calculate the sub of complex number and real number */
complex sub_cr(complex cpA, dataInComplex real)
{
	cpA.real -= real;
    return cpA;
}

/* calculate the sub of complex number and imag number */
complex sub_ci(complex cpA, dataInComplex imag)
{
	cpA.imag -= imag;
    return cpA;
}

/* calculate the sum of two complex numbers */
complex add_cc(complex cpA, complex cpB)
{
	cpA.real += cpB.real;
	cpA.imag += cpB.imag;		
    return cpA;
}

/* subtract two complex numbers */
complex sub_cc(complex cpA, complex cpB)
{
	cpA.real -= cpB.real;
	cpA.imag -= cpB.imag;		
    return cpA;
}

/* multiply complex number with real number */
complex mult_cr(complex cpA, dataInComplex real)
{
	cpA.real = (dataInComplex)(cpA.real *real);
	cpA.imag = (dataInComplex)(cpA.imag *real);		
    return cpA;
}

/*multiply complex number with imag number */
complex mult_ci(complex cpA, dataInComplex imag)
{
    complex result;
    result.imag = (dataInComplex)(cpA.real * imag);
    result.real = (dataInComplex)(-cpA.imag * imag);
    return result;
}

/*multiply complex number with complex number */
complex mult_cc(complex cpA, complex cpB)
{
    complex result;
    result.real = (dataInComplex)(cpA.real * cpB.real) - (dataInComplex)(cpA.imag * cpB.imag);
    result.imag = (dataInComplex)(cpA.real * cpB.imag) + (dataInComplex)(cpA.imag * cpB.real);
    return result;
}

/* return the absolue value of complex number */
dataInComplex abs_c(complex cpA)
{
    dataInComplex result = (dataInComplex)(cpA.real * cpA.real) + (dataInComplex)(cpA.imag * cpA.imag);
    return sqrtf(result);
}

/*return conjugate of a complex number*/
complex conj_c(complex cpA)
{
	cpA.imag = -cpA.imag;
	return cpA;
}

/* return inverse of a complex number 1/cpA */
complex inv_c(complex cpA)
{
	complex result = conj_c(cpA);
	dataInComplex divisor = (dataInComplex)(cpA.real * cpA.real) + (dataInComplex)(cpA.imag * cpA.imag);
	result = mult_cr(result,1/divisor) ;
	return result;
}

/* division complex number by real number */
complex div_cr(complex cpA, dataInComplex real)
{
    complex cpB;
	cpB.real = (dataInComplex)(cpA.real /real);
	cpB.imag = (dataInComplex)(cpA.imag /real);		
    return cpB;
}

/* division complex number by imag number */
complex div_ci(complex cpA, dataInComplex imag)
{
    complex cpB;
	cpB.real = (dataInComplex)(cpA.imag /imag);
	cpB.imag = (dataInComplex)(-cpA.real /imag);		
    return cpB;
}

/* return division between two complex numver cpA/cpB  */
complex div_cc(complex cpA, complex cpB)
{
	complex result = mult_cc(cpA,conj_c(cpB));
	dataInComplex divisor =  (dataInComplex)(cpB.real * cpB.real) + (dataInComplex)(cpB.imag * cpB.imag);
	return mult_cr(result,1/divisor);
}

complex mySinCos(dataInComplex angle)
{
    complex cpA;
    cpA.real = cosf(angle);
    cpA.imag = sinf(angle);
    return cpA;
}

