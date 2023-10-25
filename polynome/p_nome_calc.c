#include "p_nome.h"
double n2(double n){return n*n;}
double delta(double*coeff){
    return n2(coeff[1])-4*coeff[0]*coeff[2];
}
double f2(double x,double*coeff){
    return coeff[0]*n2(x) + coeff[1]*x + coeff[2];
}
double f1(double x,double*coeff){return coeff[0]*x + coeff[1];}
double*racine(double*coeff){
   // double x[2];
    double *x=(double*)malloc(2*sizeof(double));
    if(delta(coeff)>=0){
        x[0]=(-coeff[1]-sqrt(delta(coeff)))/(2*coeff[0]);
        x[1]=(-coeff[1]+sqrt(delta(coeff)))/(2*coeff[0]);
        return x;
    }
    else{
        //printf("\033[31m On n'a pas de solutions réels\033[0m\n");
        return NULL;
    }
}
double*sommet(double*coeff){
    double *s=(double*)malloc(2*sizeof(double));
    s[0]=-coeff[1]/(2*coeff[0]);
    s[1]=f2(s[0],coeff);
    return s;
}
double sommet_x(double*coeff){return -coeff[1]/(2*coeff[0]);}
