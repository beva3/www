#ifndef __AUTH__
#define __AUTH__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct MOMENT
{
    char date[50];
    char time[50];
}MOMENT;

typedef struct AUTH
{
    MOMENT moment;
    char srvc_prgrm[50];/*service ou programme*/
    char pam_unix[50];
    char sesion[50];
    char user[50];
}AUTH;

typedef struct REQUET
{
    char var[100];
    char value[100];
}REQUET;


//const char *andro[]={"Alahady","Alatsinainy","Talata","Alarobia","Alakamisy","Zoma","Sabotsy"};
//const char *volana[]={"Janoary","Febroary","Martsa","Aprily","Mey","Jona","Jolay","Aogositra","Septambra","Oktobra","Novambra","Desambra"};
typedef struct DATE{
	char a[10];
	char m[10];
	char j[10];
}DATE;

void head();
void tronc();
void auth_log();
void tadiavo();
void point();

/*for login and sing in*/
void style_log_sing();
void body__log();
void body__sing();

/*date malagasy*/
int bij(int anne);
char *daty_gasy(char df[]);
#endif