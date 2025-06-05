#include<stdio.h>

int main()
{
	int n,i,j,num;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		num=0;
		scanf("%d",&a[i]);
		for(j=i;j>=0;j--)
		{
			if(a[i]>a[j]) num++;
		}
		printf("%d ",num);
	}
	return 0;
}
