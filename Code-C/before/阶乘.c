#include<stdio.h>
int main()
{
	int n,i;
	long int fac;
	printf("������һ����Ȼ����\n");
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
		printf("��������룡");
	system("pause");
	return 0;
 } 
