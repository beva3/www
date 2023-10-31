#include "fx.h"

int main(){
    m_secante(1,6);
    m_euclide(1,3);
    m_newtown(3);

    printf("on a la surface : [1:2] = %g\n",S_rect(1,10));
    printf("on a la surface : [1:2] = %g\n",S_trap(1,10));
    printf("on a la surface : [1:2] = %g\n",S_Simpson(1,10));



    return 0;
}