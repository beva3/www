#ifndef __F__
#define __F__
#define EPS 1e-10
#define EPS_S 1e-5

#include <stdio.h>
#include <math.h>

/*====NEWTON====*/
double f(double x);//notre fonction
double p_x(double x_o);//pente
double inter_abs(double x, double f_x,double p_x);
void m_newtown(double x);

/*====EUCLIDE====*/
double moy(double a, double b);
double dichotomi(double a, double b);
void m_euclide(double a, double b);


/*====SECANTE====*/
double p_ab(double a, double b); 
double secante(double a, double b);
void m_secante(double a, double b);

/*=Methde de simpson==========================================================*/

double S_rect(double a,double b);
double S_trap(double a, double b);
double S_Simpson(double a , double b);
int propriete(int i);

#endif
