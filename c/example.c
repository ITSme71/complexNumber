#include "./inc/complex.h"
#include <iostream>
#include <math.h>

/*main function*/
int main()
{
    complex ca = myComplex(1,1);
    printf("complex no. a:\t");print_c(ca); 
    complex cb = myComplex(0,2);
    printf("complex no. b:\t");print_c(cb);
    printf("a + 1            =\t");print_c(add_cr(ca,1)); 
    cb = add_cr(ca,1);
    printf("b = a + 1        =\t");print_c(cb);
    cb = add_ci(ca,1);
    printf("b = a + 1j       =\t");print_c(cb);
    cb = sub_cr(ca,1);
    printf("b = a - 1        =\t");print_c(cb);
    cb = sub_ci(ca,2);
    printf("b = a - 2j       =\t");print_c(cb);
    printf("b + a            =\t");print_c(add_cc(cb,ca));
    printf("b * 3            =\t");print_c(mult_cr(cb,3));
    printf("b * 3j           =\t");print_c(mult_ci(cb,3));
    printf("b * a            =\t");print_c(mult_cc(cb,ca));
    printf("abs(b)           =\t %f \n", abs_c(cb));
    printf("cnj(b)           =\t");print_c(conj_c(cb));
    printf("inv(b)           =\t");print_c(inv_c(cb));
    printf("b / 2            =\t");print_c(div_cr(cb,2) );
    printf("b / 2j           =\t");print_c(div_ci(cb,2) );
    printf("b / a            =\t");print_c(div_cc(cb,ca));
    printf("cos +j sin    :PI=\t");print_c(mySinCos(M_PI));
    return 0;
}
