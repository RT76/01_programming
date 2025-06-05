#include<stdio.h>
void minmax(int *a,int len,int *max,int *min);
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,j;
		scanf("%d",&n);
		int a[n],max,min,len;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i]);
		}
		len=sizeof(a)/sizeof(a[0]);
		minmax(a,len,&max,&min);
		printf("%d",max-min);
	}
	return 0; 
}
void minmax(int *a,int len,int *max,int *min)
{
	int i;
	*max=*min=a[0];
	for(i=0;i<len;i++)
	{
		if(a[i]>*max)
		*max=a[i];
		else continue;
	}
	for(i=0;i<len;i++)
	{
		if(a[i]<*min)
		*min=a[i];
		else continue;
	}	
}
