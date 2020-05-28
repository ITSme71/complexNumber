#include "./inc/complex.h"
#include <iostream>
#include <math.h>

using namespace std;
/*main function*/
int main()
{
    complex ca(1,1);
    cout<<"complex no. a:\t";ca.print_c(); 
    complex cb(0,2);
    cout<<"complex no. b:\t";cb.print_c();
    cout<<"a + 1            =\t";ca.add_cr(1).print_c(); 
    cb = ca.add_cr(1);
    cout<<"b = a + 1        =\t";cb.print_c();
    cb = ca.add_ci(1);
    cout<<"b = a + 1j       =\t";cb.print_c();
    cb = ca.sub_cr(1);
    cout<<"b = a - 1        =\t";cb.print_c();
    cb = ca.sub_ci(2);
    cout<<"b = a - 2j       =\t";cb.print_c();
    cout<<"b + a            =\t";cb.add_cc(ca).print_c();
    cout<<"b * 3            =\t";cb.mult_cr(3).print_c();
    cout<<"b * 3j           =\t";cb.mult_ci(3).print_c();
    cout<<"b * a            =\t";cb.mult_cc(ca).print_c();
    cout<<"abs(b)           =\t"<<cb.abs_c()<<"\n";
    cout<<"cnj(b)           =\t";cb.conj_c().print_c();
    cout<<"inv(b)           =\t";cb.inv_c().print_c();
    cout<<"b / 2            =\t";cb.div_cr(2).print_c();
    cout<<"b / 2j           =\t";cb.div_ci(2).print_c();
    cout<<"b / a            =\t";cb.div_cc(ca).print_c();
    cout<<"cos +j sin    :PI=\t";ca.sinCos(M_PI).print_c();
    return 0;
}
