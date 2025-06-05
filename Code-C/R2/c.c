#include<stdio.h>
int main()
{
    int n=0,sum=0,num;
    while(~scanf("%d",&num)){
        sum+=num;
        n++; 
    }
    printf("%.2lf",(double)sum/n);
    printf("\n%d %d",num,n);
    return 0;
}