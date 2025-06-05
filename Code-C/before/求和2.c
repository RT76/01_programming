#include<stdio.h>
main()
{
	int x,sum=0,i;
	scanf("%d",&x);
	for(i=0;i<x;i++,sum+=i);
	printf("sum=%d",sum);
	system("pause");
	return 0;
 } 
