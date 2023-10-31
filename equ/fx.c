#include "fx.h"


/*
    la fonction f(x) est entrez par l'utilisateur en generale
*/

// # notre fonction
double f(double x){
    return log(x) - 1;
}
int Df(double x){
    if (x > EPS) return 1;
    else return 0;   
}
//#1 methode de newton

//11 ==> pente en x_o
double p_x(double x_o){
    return (f(x_o + EPS) - f(x_o))/EPS;
}

//12 ==> valeur de x_o (inter Cf et D) 
double inter_abs(double x,double f_x,double p_x){
    return x - f_x/p_x;                 //tsy misy atahorana fa resaka limite no eto
}

//13 ==> Resoudre en entran une parametre x
void m_newtown(double x){
    // [a ; b] intervall
    if(Df(x) == 1){
        int control = 0;
    
        while (f(x - EPS) * f(x  + EPS)> 0)
        {
            x = inter_abs(x,f(x),p_x(x));
            if (x<0)
            {
                control = 0;
                printf("changer ton absciss origine\n");
                break;
            }
            else
            {
                control = 1;
                x = inter_abs(x,f(x),p_x(x));
            }
        }

        if (control == 1)
        {
            printf("on a la solution x :  %g\n",x);
        }
    }
    else printf("Verifie votre valeur, elle n'est pas inclue dans la dommaine de definition\n");
}

//#2 methode de pascal  | euclide dichotomie 
//21 ==> moyenne de l'inervalle 
double moy(double a, double b){
    return (a + b)/2;
}

//22 recherche de l'approximation du solution 
double dichotomi(double a, double b){
    double c;
    while (1)
    {
        c = moy(a,b);
        if (f(c - EPS) * f(c  + EPS)< 0){ //
            break;// ajanona ny boucle satria ita ny slt
        }
            
        else
        {
            if (f(c) * f(a) <0)
                b=c;
            else
                a=c;
        }
    }
    return c;
}

//23 resolution
void m_euclide(double a, double b){
    if(Df(a) == 1 && Df(b) == 1){
        if (f(a) * f(b) >0){
            printf("on a pas de solution\n");
        }
        else{
            printf("on a la solution x :  %g\n",dichotomi(a,b));
        }
    }
    else printf ("verifiez votre intervalle il y a au moins une vleur qui n'est pas dans Df\n");
}

//#3 methode secante 
//31 calcul de la pente entre A,B
double p_ab(double a, double b){
    return ((f(b) - f(a))/(b - a));
}

//32 recherche de l'approximation du solution
double secante(double a, double b){
    double c; // l'approximation de la soluion
    double tmp; 
    
    while(1){
        tmp = f(b)/p_ab(a,b);
        c = b - tmp; // par rapport a b
        if(f(c - EPS) * f(c  + EPS)< 0){
            break;
        }
        else{
            b = c;
        }
    }
    return c;
}
//33 resolution
void m_secante(double a, double b){
    if(Df(a) == 1 && Df(b) ==1 ){
        if (f(a) * f(b) >0){
            printf("on a pas de solution\n");
        }
        else{
            printf("on a la solution x :  %g\n",secante(a,b));
        }
    }
    else printf ("verifiez votre intervalle il y a au moins une vleur qui n'est pas dans Df\n");
}

/*=Calcul surface==========================================================*/

double S_rect(double a,double b){
    double s = 0;
    
    for (double i = a; i < b; i = i + EPS_S)
    {
        s = s + EPS_S * (f(i));
    }

    return s;
}

double S_trap(double a, double b){
    double s = 0;

    for (double i = a; i < b; i = i + EPS_S)
    {
        s = s + 0.5 * EPS_S* ((f(i) + f(i + EPS_S)));
    }
    return s;
}

int propriete(int i){
    if(i%2 == 0) return 2;
    else return 4;
}

double S_Simpson(double a , double b){
    double s = 0;
    int n = (b-a)/EPS_S;
    double stmp = 0;
    for (int i = 1; i < n; i++)
    {
        stmp = stmp + propriete(i)*f((a + i*EPS_S));   
    }
    s = (EPS_S/3)*(f(a) + f(b) + stmp);
    return s;
}