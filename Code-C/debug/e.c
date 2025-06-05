#include<stdio.h>
int main()
{
    long long a=0,b;
    int n,i;
    scanf("%d",&n);
   
     for(i=0;i<n;i++)
        {
            scanf("%lld",&b);
            a^=b;
        }
        if(a==0)
        printf("False Alarm.");
        else
        printf("%lld",a);
    
    return 0;
}