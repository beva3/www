#include "declaration.h"
/*------------------------------------------------------------------------------------------*/
/*char*affect(char*dest,const char*scr){
	return strcpy(dest,scr);
}*/
/*------------------------------------------------------------------------------------------*/
void raiso(char*tmp){
	fgets(tmp,256,stdin);
}
/*------------------------------------------------------------------------------------------*/
char*continute(char*t){
	int i=0;
	while(t[i] !='\0'){
		if(t[i] =='\n') t[i]=' ';//atao espace
		i++;
	}
	return t;
}
/*------------------------------------------------------------------------------------------*/
char* ampidiro(Information infoelev){
	char*tmp=malloc(2000);
	printf("Entrez votre NOM 	: ");raiso(infoelev.nom[0]);
	printf("Entrez votre Prenoms    : ");raiso(infoelev.nom[1]);
	printf("Ne le (JJ/MM/AA)        : ");raiso(infoelev.born.date);
	printf("A : (lieu)              : ");raiso(infoelev.born.lieu);
	printf("Votre Information numeriques    : ");
	printf("\n\tEntrez votre Telephone: ");raiso(infoelev.numeric[0]);
	printf("\tEntrez votre mail     : ");raiso(infoelev.numeric[1]);
	printf("\tEntrez votre facebook : ");raiso(infoelev.numeric[2]);
	printf("Votre identifiant : \n");
	printf("\tEntrez votre CIN        : ");raiso(infoelev.cin);
	printf("\tEntrez votre Matricul   : ");raiso(infoelev.matricul);
	//sprintf(tmp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",infoelev.nom[0],infoelev.nom[1],infoelev.born.date,infoelev.born.lieu,infoelev.numeric[0],infoelev.numeric[1],infoelev.numeric[2],infoelev.matricul);
	sprintf(tmp,"%s,%s,%s,%s,%s,%s,%s,%s,%s",infoelev.nom[0],infoelev.nom[1],infoelev.born.date,infoelev.born.lieu,infoelev.numeric[0],infoelev.numeric[1],infoelev.numeric[2],infoelev.cin,infoelev.matricul);
	continute(tmp);
	return tmp;
}
/*------------------------------------------------------------------------------------------*/
void soraty(FILE*f){	
	f=fopen("Donnees_Brutes.csv","a");
	Information infoelev={{" "," "},{" "," "}," ",{" "," "," "},0};//initialisation
	//system("clear");
	fprintf(f,"%s",ampidiro(infoelev));
	fprintf(f,"\n");//retour @ la ligne
	fclose(f);
}
/*------------------------------------------------------------------------------------------*/
void soratyMult(){
	FILE*f=NULL;
	while(1){
		int q='q';
		soraty(f);
		printf("Voulez vous continuez ? (<ENTREE> : pour continuer) ");
		if((q=getchar()) !='\n') break;
	}
}
/*------------------------------------------------------------------------------------------*/
/*
int main(){
 	soratyMult();
 	return 0;
}
*/
