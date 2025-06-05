#include<stdio.h>
#include<string.h>
#define len strlen(a) 
void cap(char a[]);
int main()
{
	char a[105];
	gets(a);
	cap(a);
	return 0;
}
void cap(char a[])
{
	
	int i;
	for(i=0;i<len;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-'a'+'A';
		}
	}
	puts(a);
}
