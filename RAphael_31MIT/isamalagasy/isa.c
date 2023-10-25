#include "isa.h"
char*head(char*s){
    char*h=(char*)malloc(strlen(s)*sizeof(char));
    sprintf(h,"%d",(atoi(s)-atoi(s+1)));
    return h;
}
char*ntos(int n){
	char *s=(char*)malloc(20*sizeof(char));
	sprintf(s,"%d",n);
	return s;
}
const char*_u(int n){
    //char isa[10];
    //char*isa=(char*)malloc(8*sizeof(char));
    switch (n){
    //case 0 : strcpy(isa,"Aotra");break;
        case 1 : return "Ray";    break;
        case 2 : return "Roa";    break;
        case 3 : return "Telo";   break;
        case 4 : return "Efatra"; break;
        case 5 : return "Dimy";   break;
        case 6 : return "Enina";  break;
        case 7 : return "Fito";   break;
        case 8 : return "Valo";   break;
        case 9 : return "Sivy";   break;
    }
}
const char*_10(int n){
    //char*isa=(char*)malloc(10*sizeof(char));
    switch (n){
    //case 0 : strcpy(isa,"Aotra");break;
        case 1 : return "Folo";         break;
        case 2 : return "Roapolo";      break;
        case 3 : return "Telopolo";     break;
        case 4 : return "Efapolo";      break;
        case 5 : return "Dimapolo";     break;
        case 6 : return "Enimpolo";     break;
        case 7 : return "Fitopolo";     break;
        case 8 : return "Valopolo";     break;
        case 9 : return "Sivifolo";     break;
    }
}
const char*_100(int n){
    switch (n){
        case 1 : return "Zato";         break;
        case 2 : return "Roanjato";     break;
        case 3 : return "Telonjato";    break;
        case 4 : return "Efajato";      break;
        case 5 : return "Dimanjato";    break;
        case 6 : return "Eninjato";     break;
        case 7 : return "Fitonjato";    break;
        case 8 : return "Valonjato";    break;
        case 9 : return "Sivinjato";    break;
    }
}
char*manisa(char*isa){
    //:wchar_tsprintf(isa,"%d",atoi(isa));
    size_t l = strlen(isa);
    char*soratra=(char*)malloc(512);
    if(l==1){
        strcpy(soratra,_u(atoi(isa)));
    }
    else if(l==2){
        if(atoi(isa+1)==0) strcpy(soratra,_10(atoi(isa)/10));
        else (isa[1]=='1')?
            sprintf(soratra,"Iraika amby %s",_10(atoi(isa)/10)):
            sprintf(soratra,"%s amby %s",_u(atoi(isa+1)),_10(atoi(isa)/10));
    }
    else if(l==3){
        if(atoi(isa+1)==0) sprintf(soratra,"%s",_100(atoi(isa)/100));
        else (atoi(isa+1)<10) ?
            (isa[0]=='1') ?
                sprintf(soratra,"%s amby %s",manisa((isa+2)),_100(atoi(isa)/100)):
                sprintf(soratra,"%s sy %s"  ,manisa((isa+2)),_100(atoi(isa)/100)):
            (isa[0]=='1') ?
                sprintf(soratra,"%s amby %s",manisa((isa+1)),_100(atoi(isa)/100)):
                sprintf(soratra,"%s sy %s",manisa((isa+1)),_100(atoi(isa)/100));
    }
    else if(l==4){
        if(atoi(isa+1)==0){
            (isa[0]=='1') ?
                sprintf(soratra,"%s","Arivo") :
                sprintf(soratra,"%s Arivo",_u(atoi(isa)/1000));
        }
        else if(atoi(isa+1)<10) sprintf(soratra,"%s sy %s",manisa(isa+3),manisa(head(isa)));
        else (atoi(isa+1)<100) ?
            sprintf(soratra,"%s sy %s",manisa(isa+2),manisa(head(isa))):
            sprintf(soratra,"%s sy %s",manisa(isa+1),manisa(head(isa)));
    }
    else if(l==5){
        if(atoi(isa+1)==0){
            (isa[0]=='1') ?
                sprintf(soratra,"%s","Iray Alina") :
				sprintf(soratra,"%s Alina",_u(atoi(isa)/10000));
		}
        else  sprintf(soratra,"%s sy %s",manisa(ntos(atoi(isa+1))),manisa(head(isa)));
	}
    else if(l==6){
        if(atoi(isa+1)==0){
            (isa[0]=='1') ?
                sprintf(soratra,"%s","Iray Hetsy") :
				sprintf(soratra,"%s Hetsy",_u(atoi(isa)/100000));
		}
        else  sprintf(soratra,"%s sy %s",manisa(ntos(atoi(isa+1))),manisa(head(isa)));
	}
    else if(l==7){
        if(atoi(isa+1)==0){
            (isa[0]=='1') ?
                sprintf(soratra,"%s","Iray Tapitsisa"):
				sprintf(soratra,"%s Tapitsisa",_u(atoi(isa)/1000000));
		}
        else  sprintf(soratra,"%s Tapitsisa",manisa(ntos(atoi(isa+1))));
	}
    return soratra;
}
