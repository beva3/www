#ifndef DECLARATIO_H
#define DECLARATIO_H
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
/*------------------------------------------------------------------------------------------*/
typedef struct Min_pos{
	unsigned char v;//valeur
	int p;		//position
}V_p;
/*------------------------------------------------------------------------------------------*/
typedef struct Min_len{
	char*str;
	int l;
}Min_len;
/*------------------------------------------------------------------------------------------*/
typedef struct Borne{
	char date[256];
	char lieu[256];
}Borne;
/*------------------------------------------------------------------------------------------*/
typedef struct Information{
	char nom[2][256];		//nom _ p_nom
	Borne born;		//date et lieux de naissance 
	char cin[20];
	char numeric[3][256];	//mail telephone
	char matricul[50];
}Information;
/*------------------------------------------------------------------------------------------*/

/*DONNES BRUTS +++++++++++++++++++++++++++++++++++++++++++++++*/
char*affect(char*dest,const char*scr);
char* ampidiro(Information infoelev);
void soraty(FILE*f);
void soratyMult();
void raiso(char*tmp);
char*continute(char*t);
/*ALAHARO      +++++++++++++++++++++++++++++++++++++++++++++++*/
int str2_len(char**t);
V_p cmin(char*t);	//struct definir !!!!
Min_len smin(char**t);//struct definir !!!!
void echotab(char**t);
//char*affect(char*dest,const char*scr);
char*arange_C(char*t);
char**arange_S(char**t);
char**ftotab();//provisoir
FILE*tabtof(char**t);//vrai
void alaharo();
#endif
