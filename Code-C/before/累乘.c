#include<stdio.h>
int main()
{
	int a,n=1;
	while((scanf("%d",&a))!=EOF)
	{
		n*=a;
	}
	printf("%d\n",n);
	system("pause");
	return 0;
 } 
