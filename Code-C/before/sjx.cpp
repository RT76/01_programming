#include<stdio.h>
int main()
{
	int n, op, i, j;
	scanf("%d %d",&n,&op); 
	if(op){//dao
	for(i = 0;i <= n / 2;i++){
	for(j = 0;j<n-i;j++){
	putchar(j >= i ? '*':' ');
	}
	putchar('\n');
	}
}
	else{//zheng
	for(i =n / 2;i >= 0;i--){
	for(j = 0;j <n -i;j++){
	putchar(j >= i ? '*' :' ');
	}
	putchar('\n');
	}
	}
	
	}
