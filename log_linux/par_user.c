#include "auth.h"
void tronc(){
    printf("<body>");
    auth_log();
    printf("</body>");
}
void auth_log(){
    char tmp[256];
    char moment[100];
    char for_user[256];
    int compt=0;
    AUTH auth = {{"date","time"},"srvc_prg ","pan","ses","user"};
    FILE*f=fopen("/var/log/auth.log","r");
    REQUET req ={"...","..."};
    char *query_string = getenv("QUERY_STRING");
    char *name =NULL;

    tadiavo();
    name=strtok(query_string, "&");
    if(name!=NULL){
        //printf("%s<br>", name);
        sscanf(name,"%[^=]=%[^\n]",req.var,req.value);
        //printf("<h1>%s</h1>",req.value);

    }
    char tadiavo[256];
    strcpy(tadiavo,req.value);
    //printf("<h1>tadiavina = %s</h1>",tadiavo);
    printf("<fieldset>");
        printf("<table><legend><h1>Journaux du noyau Linux <h1></legend>");
            if(compt !=0)
                printf("<tr class = \"tr\">\
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
                    if(strstr(for_user,tadiavo)!=NULL){
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
                        ",auth.moment.date,auth.moment.time,auth.srvc_prgrm,auth.pam_unix,auth.sesion,auth.user);
                    }
                }
            }
            if (compt != 0)
            {
                printf("<h5>maintenant:<span></span> il y a %d </h5>",compt);
            }
        printf("</table>");
    printf("</fieldset>");
    fclose(f);
}
void tadiavo(){
    printf("\
        <div id = \"mitady\">\
            <form action=\"par_user.cgi\" method=\"GET\">\
                <input type=\"text\" name=\"name\" placeholder=\"Cherchez\">\
                <input type=\"submit\" value=\"ok\">\
            </form>\
        </div>");
}