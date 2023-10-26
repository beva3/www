#include "fx.h"


/*
    la fonction f(x) est entrez par l'utilisateur en generale
*/

double f(double x){
    return log(x) - 1;
}

double p_x(double x_o){
    return (f(x_o + EPS) - f(x_o))/EPS;
}

double inter_abs(double x,double f_x,double p_x){
    return x - f_x/p_x;                 //tsy misy atahorana fa resaka limite no eto
}