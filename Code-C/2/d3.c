#include<stdio.h>
int main()
{
    unsigned long long n;
	scanf("%llu",&n);
    if((n&(n-1))==0)
    printf("Yes\n%llu",n);
	else if((n&(n-1))!=0)
    {
        unsigned long long i=1;
        while(i<n)
        {
            i<<=1;
        }
        printf("No\n%llu",i/2);
    }
	return 0;
}