#include<stdio.h>
int main()
{
	int n,i,j,k=0;
	double max;
	scanf("%d",&n);
	double a[n],b[n],c[n*(n-1)/2];
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i],&b[i]);
	}
	for(i = 0;i < n;i++)
		for(j = i+1;j < n;j++)
		{
			c[k]=(b[j]-b[i])/(a[j]-a[i]);
			k++;
		}
	max=c[0];
	for(i=0;i<n*(n-1)/2;i++)
	{
		if(c[i]>max)
		max=c[i];
		else continue;
	}
	printf("%.3lf",max);
	return 0;
}
