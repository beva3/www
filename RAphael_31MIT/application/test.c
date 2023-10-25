#include "proba.h"

int main(){	
	char*t=(char*)malloc(10*sizeof(char));
	strcpy(t,"0321");
	for(int i=0 ; i<strlen(t) ; i++){
		printf("%d ==> %s\n",i,mvr(t,i));
	}
	return 0;
}
