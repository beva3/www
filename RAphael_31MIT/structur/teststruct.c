#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Pers{
	char nom[100];
	char birth[20];
	char home[20];
	int age;
	double longeur;
}Pers;

int main(){
	//static int i=1;
	FILE*f=fopen("moi.xlsx","a");
	Pers p1 ={
		"RANDRIANANTOANINA Bienvenu Raphaël",
		"31 Mars 2002",
		"Ankatso",
		20,
		1.78
	};
	//fprintf(f,"[%3d]\n",i);
	fprintf(f,"Nom	: %s\n",p1.nom);
	fprintf(f,"Né le	: %s\n",p1.birth);
	fprintf(f,"Domicile	: %s\n",p1.home);
	fprintf(f,"Age	: %d\n",p1.age);
	fprintf(f,"hauteur	: %g\n",p1.longeur);
	//i++;
	// Réécrire la nouvelle valeur de i dans le fichier
    	//fseek(f, 0, SEEK_SET);
    	//fprintf(f, "[%3d]\n", i);
	fclose(f);
	return 0;
}
