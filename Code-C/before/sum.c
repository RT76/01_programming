#include<stdio.h>

int sum(int n)
{
	int sum;
	sum=(n+1)*n/2;
	return sum;
	
 } 
 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	printf("%d",sum(n));
 }
