#ifndef __USER__
#define __USER__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct USER
{
    char name[30];
    int uid;
    int gid;
    char other[100];
}USER;

void head();/*tete et style*/
void tronc();
void user();
char** split(char*str);
#endif // !__USER__
