#include<stdio.h>
void maxx(long long a[],int len,long long *max);
int main()
{
	int k,m,n;
	scanf("%d %d %d",&k,&m,&n);
	long long a[m],b[m],c[m],max;
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<m;i++)
	{
		if(a[i]!=0)
		c[i]=(k/a[i])*b[i];
		else c[i]=n;
	}
	maxx(c,m,&max);
	if(max<n)
	printf("%d",max);
	else for(i=0;i<m;i++)
	{
		if(c[i]>=n)
		printf("%d ",i+1);
		else continue;
	}
	return 0;
}
void maxx(long long a[],int len,long long *max)
{
	int i;
	*max=a[0];
	for(i=0;i<len;i++)
	{
		if(a[i]>*max)
		{
			*max=a[i];
		}
	}
}
