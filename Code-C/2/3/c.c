#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<=n/5;i++)
    for(j=0;j<=n/2;j++)
    {
        k=n-5*i-2*j;
        if(k<0)
        continue;
        if(i*5+j*2+k==n)
        {
            printf("%d %d %d\n",i,j,k);
        }
    }
    return 0;
}