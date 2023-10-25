#include "declaration.h"
/*------------------------------------------------------------*/
int str2_len(char**t){
	int l=0;
	while(t[l] !=NULL) l++;
	return l;
}
/*------------------------------------------------------------*/
char*affect(char*dest,const char*scr){
	return strcpy(dest,scr);
}
/*------------------------------------------------------------*/
void echotab(char**t){
	for(int i=0 ; i<str2_len(t) ;i++)
		printf("%s",t[i]);
}
/*------------------------------------------------------------*/
V_p cmin(char*t){
	V_p vp={t[0],0};		//initialisation
	for(int i=0 ; i<strlen(t) ; i++){
		if(vp.v > t[i]){
			vp.v = t[i];	//valeur
			vp.p = i;	//position
		}
	}
	return vp;
}
/*------------------------------------------------------------*/
Min_len smin(char**t){
	Min_len ml={*t,0};
	for(int i=0 ; i<str2_len(t) ; i++){
		if(strcmp(ml.str,t[i])>0){
			affect(ml.str,t[i]);
			ml.l=i;
		}
	}
	return ml;
}
/*------------------------------------------------------------*/
char*arange_C(char*t){
	char tmp;
	V_p vp={0,0};
	for(int i=0 ; i<strlen(t)-1 ; i++){
		vp = cmin(t+i);
		tmp=t[i];
		t[i]=vp.v;
		t[vp.p +i] = tmp;	//+i car il y a la translation
	}
	return t;
}

/*------------------------------------------------------------*/
char**arange_S(char**t){
	char*tmp=malloc(2000);
	Min_len ml={t[0],0};
	for(int i=0 ; i<str2_len(t)- 1; i++){
		affect(tmp,t[i]); 
		ml=smin(t+i);
		affect(t[i],ml.str);
		affect(t[ml.l+i],tmp); //tsy mety !!! NON METY IO
	}
	free(tmp);
	return t;
}
/*------------------------------------------------------------*/
char**ftotab(){
	FILE*f=NULL;
	char**tab=(char**)malloc(100*sizeof(char*));//????????????? sizeof(char) et sizeof(char*)
	char test[256];
	for(int i=0 ; i<256 ;  i++) tab[i]=malloc(2000);//correspond @ une ligne
	char*tmp=malloc(2000);
	int i=0;
	f=fopen("Donnees_Brutes.csv","r");	//manokatra BRUT >>>MIKOROTANA
	while(fgets(tmp,2000,f) !=NULL){
		affect(tab[i],tmp);
		//strcpy(tab[i],test);
		//printf("==>%2i ::>%s",i,test);
		i++;
	}
	tab[i]=NULL;
	fclose(f);
	free(tmp);
	return tab;
}
/*------------------------------------------------------------*/
FILE*tabtof(char**t){
	FILE*f=fopen("DONNE_MILAHATRA.csv","w+");//sokafy ito alefaso ato ny tab
	if(f==NULL){
		printf("\033[31mEUREUR\033[0m\n");
		exit(1);
	}
	for(int i=0 ; i<str2_len(t) ; i++){
		fprintf(f,"%s",t[i]);
	}
	return f;
	fclose(f);
}
/*------------------------------------------------------------*/
void alaharo(){
	tabtof(arange_S(ftotab()));//avadio file lay tab io
}
/*------------------------------------------------------------*/
/*
int main(){
	alaharo();
	return 0;
}
*/
