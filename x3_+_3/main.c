#include "fx.h"

int main(){
   
    double x = 2.5; // [a ; b] intervall

   
    while (f(x) * f(x  + EPS)> 0)
    {
        x = inter_abs(x,f(x),p_x(x));
    }
    
    printf ("on a  x = %g\n",x);
    
    return 0;
}