#include "p_nome.h"
char*sgn(double coeff){
    char *t=(char*)malloc(10*sizeof(char));
    (coeff>0)? sprintf(t," %c %2g ",'+',coeff) : (coeff<0)? sprintf(t," %2g",coeff) : sprintf(t," ");
    return t;
}
void head(double*coeff,FILE*f){
    if (coeff[1] !=0 )
            fprintf(f,"0) f(x) = %2gx²%sx%s\n",coeff[0],sgn(coeff[1]),sgn(coeff[2]));
    else
            fprintf(f,"0) f(x) = %2gx²%s\n",coeff[0],sgn(coeff[2]));
}
void rx(double*coeff,FILE*f){
        fprintf(f,"1) racines : {%g ,%g}\n",coeff[0],coeff[1]);
}
void sxy(double*coeff,FILE*f){
    fprintf(f,"2) sommet : S(%g ,%g)\n",coeff[0],coeff[1]);
}
void soraty(double*coeff){
    FILE*f=fopen("secong_ded.txt","w");
    head(coeff,f);
    delta(coeff)>=0 ? rx(racine(coeff),f) : fprintf(f,"1) Cette pôlynome n'a pas de racine\n");
    sxy(sommet(coeff),f);
    fclose(f);
}
