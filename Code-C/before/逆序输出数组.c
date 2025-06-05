#include<stdio.h>
#include<stdlib.h>

int main()	
{
	int i = 0;
	int a[105];
	scanf("%d", &a[0]);
	while(a[i] != 0)
	{		
		i++;
		scanf("%d", &a[i]);
	}
	int n ;
	for(n = i; n >=0; n--) 
	{
		if(a[n]!=0){
		printf("%d ", a[n]);
		}
		else continue;
	}
	return 0;
}
