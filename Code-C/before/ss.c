#include<stdio.h>
#include<string.h>
int main()
{
	char a[12]={0};
	//scanf("%s",&a);
	int n,p;
	gets(a);
//	puts(a);
	n=strlen(a);
	if(n%2==0)
	{
		p=a[n/2]+a[n/2-1]-96;
	}
	else p=a[n/2]-48;
	printf("%d",p);
	return 0;
}
