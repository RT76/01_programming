#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,x,i,y[1024],min;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    scanf("%d",&x);
    for( i=0;i<n;i++)
    {
        y[i]=abs(y[i]-x);
    }
    min=y[0];
    for( i=0;i<n;i++)
    {
        if(min>y[i])
        min=y[i];
        else continue;
    }
    printf("%d",min);
    return 0;
}