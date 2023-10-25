#include "auth.h"
int main(){
    printf("Content-Type: text/html\n\n");
    head();
    printf("<html>");
    tronc();
    printf("</html>");
    return 0;
}