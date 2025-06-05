#include<stdio.h>
int main()
{
	double a[5],a1,b,c,d;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%lf %lf %lf %lf",&a1,&b,&c,&d);
		a[i]=a1*2+b+c/4+d;
	}
	for(i=0;i<5;i++)
	{
		printf("%.2lf\n",a[i]);
	}
	return 0;
 } 
