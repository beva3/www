#include "user.h"
int main(){
    printf("Content-Type: text/html\n\n");
    printf("<html>");
    head();
    tronc();
    printf("</html>");
    return 0;
}