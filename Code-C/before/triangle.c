#include<stdio.h>
int main()
{
	int n,op;
	int i,j,k;
	scanf("%d %d",&n,&op);
	if(op==1)
	{
		for(i=0;i<=n/2;i++)
		{
			for(j=0;j<i+1;j++)
			{
				printf(" ");
			}
			for(k=0;k < n-2*i;k++)
			{
				printf("*");
			}
//			for(j=0;j<i+1;j++)
//			{
//				printf(" ");
//			}
			printf("\n");
		}
	}
	else if(op==0)
	{
		for(i=0;i<=n/2;i++)
		{
			for(j=0;j<(n-1-2*i)/2;j++)
			{
				printf(" ");
			}
			for(k=0;k<2*i+1;k++)
			{
				printf("*");
			}
//			for(j=0;j<(n-1)/2;j++)
//			{
//				printf(" ");
//			}
			printf("\n");
		}
	}
	return 0;
}
