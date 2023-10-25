#ifndef P_NOME
#define P_NOME
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//double*coeff=(double*)malloc(3*sizeof(double));
double n2(double n);
double f2(double x,double*coeff);
double f1(double x,double*coeff);
double delta(double*coeff);
double*racine(double*coeff);
double*sommet(double*coeff);
double sommet_x(double*coeff);
void soraty(double*coeff);
char*sgn(double coeff);
void head(double*coeff,FILE*f);
void rx(double*coeff,FILE*f);
void sxy(double*coeff,FILE*f);
#endif
