#include<stdio.h>

int main()
{
	unsigned long long b,n;
//	int n;
	scanf("%d",&n);
//	b=n*(n-1)*(n-2)*(n-3)/24;
	b=n*(n-1)/2*(n-2)/3*(n-3)/4;
	printf("%lld",b);
	return 0;
}
