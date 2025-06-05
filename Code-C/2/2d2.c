#include<stdio.h>
void maxx(unsigned long long n, unsigned long long *max );
int main()
{
    unsigned long long n,max;
	scanf("%llu",&n);
    if((n&(n-1))==0)
    printf("Yes\n%llu",n);
	else if((n&(n-1))!=0)
    {
        maxx(n,&max);
        printf("No\n%llu",max);
    }
	return 0;
}
void maxx(unsigned long long n, unsigned long long *max )
{
    int cnt=0,i;
    *max=1;
    while(n!=1)
    {
        n>>=1;
        cnt++;
    }
   // *max<<=(cnt-1);
    for(i=1;i<cnt;i++)
    {
        *max|=(*max<<i);
    }
    *max+=1;
}