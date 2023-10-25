#include "auth.h"

void tronc(){
    printf("<body>");
    auth_log();
    printf("</body>");
}
/*date malagasy*/
int bij(int anne){
	if(anne%4 == 0 ) return 1;
	else return 0;
}

char *daty_gasy(char df[]){
	//2023-12-4 == > Atalata 12 Desambra
	char *dg = (char*)malloc(200*sizeof(char));
	DATE d = {"2003","12","1"};
	sscanf(df,"%[^-]-%[^-]-%s",d.a,d.m,d.j);
	//andro[(atoi(d.j)+ atoi(d.m)*2 +atoi(d.a)*11+ bij(atoi(d.a)))%7];
	//d.j
	//volana[atoi(d.m)+1]
	//d.a
    const char *andro[]={"Alahady","Alatsinainy","Talata","Alarobia","Alakamisy","Zoma","Sabotsy"};
    const char *volana[]={"Janoary","Febroary","Martsa","Aprily","Mey","Jona","Jolay","Aogositra","Septambra","Oktobra","Novambra","Desambra"};
	sprintf(dg,"%s %s %s %s",andro[(atoi(d.j)+ atoi(d.m)*2 +atoi(d.a)*11+ bij(atoi(d.a)))%7]\
							,d.j\
							,volana[atoi(d.m)-1]\
							,d.a);
	return dg;
}



void auth_log(){
    char tmp[256];
    char moment[100];
    char for_user[256];
    int compt=0;
    AUTH auth = {{"date","time"},"srvc_prg ","pan","ses","user"};
    FILE*f=fopen("/var/log/auth.log","r");
    printf("<fieldset>");
        printf("<table><legend><h1>Journaux du noyau Linux (user)<h1></legend>\
                    <tr class = \"tr\">\
                        <th>date</th>\
                        <th>time</th>\
                        <th>service or programme</th>\
                        <th>pan_unix</th>\
                        <th>session</th>\
                        <th>user</th>\
                    </tr>");
            while (fgets(tmp,256,f)!=NULL){
                if (strstr(tmp,"for user")!=NULL)
                {   
                    strcpy(for_user,tmp);/*zay misy user ihany no lalaoviko*/
                    compt++;
                    /*2023-10-22T05:34:18.294596+03:00 mx pkexec: pam_unix(polkit-1:session): session opened for user root(uid=0) by (uid=1000)*/
                    sscanf(for_user,"%[^T]%[^ ] mx %[^:]: pam_unix(%[^:]:session): session %[^ ] for user %[^(]",auth.moment.date,auth.moment.time,auth.srvc_prgrm,auth.pam_unix,auth.sesion,auth.user);
                    printf("\
                        <tr>\
                            <td class=\"date\">%s</td>\
                            <td class=\"time\">%s</td>\
                            <td class=\"srv_prg\">%s</td>\
                            <td class=\"pan\">%s</td>\
                            <td class=\"ses\">%s</td>\
                            <td class=\"user\"><a href=\"#\">%s</a></td>\
                        </tr>\
                    ",daty_gasy(auth.moment.date),auth.moment.time,auth.srvc_prgrm,auth.pam_unix,auth.sesion,auth.user);
                }
            }
            //daty_gasy("2023-10-24")
            printf("<h5>maintenant:<span></span> il y a %d </h5>",compt);
            printf("</table>");
    printf("</fieldset>");
    fclose(f);
}