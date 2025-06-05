#include<stdio.h>
#include<ctype.h>
int main()
{
	int a,k,num=0;
	char b[128];
	scanf("%d %d",&a,&k);
	if(a==0)
		printf("0");
	while(a>0)
	{
		b[num++]=(a%k)+'0';
		a/=k;
	}
	int i;
	for(i=num-1;i>=0;i--)
	{
		if(~(b[i]>='0'&&b[i]<='9'))
		b[i]+='A'-'0';
		printf("%c",b[i]);
	}
	return 0;
}
