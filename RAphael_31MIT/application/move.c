#include "proba.h"
char*mvr(char*s,int mv){//to the right
	size_t l = strlen(s);
	char*r=(char*)malloc(l*sizeof(char));
	for(int i=0 ; i< l ; i++){
		*(r+i) = *(s + (mv + i)%l);//affect
	}
	return r;
}
