#include<stdio.h>
int main()
{
	int n,i;
	long int fac;
	printf("请输入一个自然数：\n");
	scanf("%d",&n);
		if(n>=0)
		{
			fac=1;
			if(n>0)
			{
			i=1;
			while(i<=n)
			{
				fac*=i;
				i++;
			}
		}
		printf("%d!=%ld\n",n,fac);
	}
		else
		printf("错误的输入！");
	system("pause");
	return 0;
 } 
