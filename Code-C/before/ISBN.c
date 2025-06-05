#include<stdio.h>

int main()
{
	char a[14],mod[12]={"0123456789X"};
	int i,j=1,sum=0;
	gets(a);
	for(i=0;i<12;i++)
	{
		if(a[i]=='-')continue;
		sum+=(a[i]-48)*j++;
	}
	if(mod[sum%11]==a[12])
	printf("Right");
	else{
		a[12]=mod[sum%11];
		puts(a);
	}
	return 0;
}
