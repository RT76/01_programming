
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
char *readfloat(char *str,double *result){
    while(*str && isspace(*str))str++;
    if(sscanf(str,"%lf",result) != 1)return 0;
    while(*str && !isspace(*str))str++;
    return str;
}
int main()
{
    
}