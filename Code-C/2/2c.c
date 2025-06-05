#include<stdio.h>
#include<string.h>
int main()
{
    char a[512]={'\0'};
    gets(a);
    printf("%d",strlen(a));
    return 0;
}