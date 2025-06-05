#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    char R[100],S[2022];
    gets(R);
    gets(S);
    char* ret;
    ret=strstr(S,R);
    if(ret==NULL)printf("Oh!No!");
    else printf("%d",((ret-S)/sizeof(char))+1);
    return 0;
}