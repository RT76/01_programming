#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int a[26],i;
	for(i=0;i<26;i++)
	{
		a[i]=0;
	}
	char c[256]={"\0"};
	gets(c);
	
	for(i=0;i<strlen(c);i++)
	{
		if(islower(c[i]))
		a[(c[i]-'a')%26]++;
		else if(isupper(c[i]))
		a[(c[i]-'A')%26]++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]>0)
		{
			printf("%c %d\n",'A'+i,a[i]);
		}
		else continue;
	}
	return 0;
}
