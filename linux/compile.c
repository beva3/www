#include <stdlib.h>
int main(){
    char cmd[]="gcc user.c def_user.c style.c -o user.cgi ;sudo cp user.cgi /usr/lib/cgi-bin/user.cgi";
    system(cmd); 
    return 0;
}