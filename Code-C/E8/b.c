#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define len strlen(a)
int main()
{
    char a[256];
    int cap = 0;
    gets(a);
    for(int i=0; i<len; i++){
        if(isupper(a[i])) cap++;
    }
    if((cap==1&&isupper(a[0]))||cap==len||cap==0)printf("true");
    else printf("false");
    return 0;
}