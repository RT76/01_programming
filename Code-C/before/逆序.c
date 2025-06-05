#include<stdio.h>
int main()
{
	int x,digit,ret;
	scanf("%d",&x);
	for(ret=0;x>0;digit=x%10,ret=ret*10+digit,x/=10);
	printf("%d",ret);
	//system("pause");
	return 0;
 } 
