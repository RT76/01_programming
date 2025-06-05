#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
typedef unsigned int U;
int main(int argc, char **argv)
{
    U i=0;
    int num=32;
    scanf("%u",&i);
    if(i==0)num=32;
    else while(i!=0){
        i>>=1;num--;
    }
    printf("%d",num);
    return 0;
}