#include<stdio.h>
int isExp(unsigned int );
int main()
{
    unsigned int a;
    scanf("%u",&a);
    if (isExp(a)==1)
    {
        printf("Yes\n%u",a);
    }
    else
    {
        unsigned int b=2;
        while(b<a)
        {
            b<<=1;
        }
        printf("No\n%u",b/2);
    }
    
    return 0;
}
int isExp(unsigned int a)
{
    if (a==1) return 1;
    else if (a>=2)
    {
        if(a%2!=0)
        return 0;
        else return isExp(a/2);
    }  
}