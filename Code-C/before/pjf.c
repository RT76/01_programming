#include<stdio.h>
int main()
{
	int n,i,num=0,sum1=0,sum2=0;
	//int a[1001];
	double ave,ave1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum1+=a[i];
	}
	ave=(double)sum1/n;
//	printf("%f\n",ave);
	for(i=0;i<n;i++)
	{
		if(a[i]>=ave)
		{
		sum2+=a[i];
		num++;
		}
	}
	ave1=(double)sum2/num;
	printf("%.2f",ave1);
	return 0;
 } 
