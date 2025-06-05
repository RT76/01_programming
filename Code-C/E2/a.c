#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int is[1024]={0};
	for(i=0;i<n;i++)
	{
		long long a,b,c;
		scanf("%llf %llf %llf",&a,&b,&c);
		if(a+b>c)
		is[i]=1;
		else is[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(is[i])
		printf("true\n");
		else printf("false\n");
	}
	return 0;
 } 
