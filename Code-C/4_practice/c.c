#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i*i<=n;i++)
    {
        printf("%d ",i*i);
    }
    return 0;
}