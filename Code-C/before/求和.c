#include<stdio.h>
int main()
{	int i,n,sum=0;
	printf("请输入一个正整数：");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		sum+=i; 	
	printf("sum=%d",sum);
	system("pause");
	return 0;
 } 
