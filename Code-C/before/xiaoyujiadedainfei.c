#include<stdio.h>

int main()
{
	int n;
	double m;
	scanf("%d",&n);
	if(n<=150)
	m=0.4463*n;
	else if(n>150&&n<=400)
	m=0.4463*150+(n-150)*0.4663;
	else if(n>400)
	m=0.4463*150+0.4663*250+(n-400)*0.5663;
	printf("%.1lf",m);
	return 0;
 } 
