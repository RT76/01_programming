#include<stdio.h>
int main()
{
    int n1,n2,orf1,orf2;
    scanf("%d %d %d %d",&n1,&orf1,&n2,&orf2);
    if(n1>=35&&orf1>=35&&n2>=35&&orf2>=35)
    printf("True, but the TA would like you to copy this paragraph instead of typing it by hand.\n");
    else printf("False\n");
    printf("%d",(n1+orf1+n2+orf2)/4);
    return 0;
}