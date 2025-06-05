#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,n,number=0;
	scanf("%d",&n);
	for(x=2;x<=n;x++){
		int i;
		int isPrime=1;
		for(i=2;i<x;i++){
			if(x % i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			number++;
			printf(" %d\t ",x);	
			if(number%5==0){
				printf("\n");
			}
		}
	}
	printf("\n共有%d个质数\n",number);
	system("pause");
	return 0;
 } 
