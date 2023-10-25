#include "user.h"
void tronc(){
    printf("<body>");
    user();
    printf("</body>");
}
char** split(char*str){
    char**sp=(char**)malloc(5*sizeof(char*));
    for(int i=0; i<5; i++) sp[i]=(char*)malloc(50*sizeof(char));
    int i=0;/*pour la string*/
    int j=0;/*controle dans sp*/
    int k=0;/*controle le numereau de ligne */
    while (str[i]!='\0')
    {
        if(str[i]!=':'){
			sp[j][k]=str[i];
			k++;
		}
        else{
			j++;k=0;
		}
		i++;
    }
    return sp;
}
void user(){
    char tmp[256];
    
    USER u={"root",0,0,"/root/root"};
    /*
    typedef struct REP
    {
        char repo[50];
        char shell[50];
    }REP;
    */
    char**sp=(char**)malloc(5*sizeof(char*));
    for(int i=0; i<5; i++) sp[i]=(char*)malloc(50*sizeof(char));
    //REP r={"repo","shel"};
    /*user=>root:x:0:0:root:/root:/bin/bash*/
    FILE *f = fopen("/etc/passwd","r");
    printf("<fieldset>");
        printf("<table><legend><h1>user linux<h1></legend>\
                    <tr class = \"tr\">\
                        <th>USER-NAME</th>\
                        <th>UID</th>\
                        <th>GUD</th>\
                        <th>REPOSITORY</th>\
                        <th>SHELL</th>\
                    </tr>");
            while (fgets(tmp,256,f) !=NULL)
            {
                sscanf(tmp,"%[^:]:x:%d:%d:%[^\n]",u.name,&u.gid,&u.gid,u.other);
                sp=split(u.other);
                //strcpy(r.repo,sp[2]);
                //strcpy(r.repo,sp[3]);
                //sscanf(u.other,"%[^:]:%[^:]",r.repo,r.shell);
                //sscanf(u.other,"%[^:]:%[^:]",sp[],r.shell);
                printf("\
                    <tr>\
                        <td class=\"name\">%s</td>\
                        <td class=\"uid\">%d</td>\
                        <td class=\"gid\">%d</td>\
                        <td class=\"rep\">%s</td>\
                        <td class=\"shell\">%s</td>\
                    </tr>\
                ",u.name,u.gid,u.gid,sp[1],sp[2]);
            }
        printf("</table>");
    printf("</fieldset>");

    fclose(f);
}