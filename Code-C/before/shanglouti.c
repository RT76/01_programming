#include<stdio.h>
#include<stdlib.h>

int step_num(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	
	printf("%d  %d\n",i,step_num(i));
	}
	//system("pause");
	return 0;
 } 
 
 int step_num(int n)
 {
 	if(n==1)
	return 1;
 	if(n==2)
 	return 2;
 	else 
	return (step_num(n-1)+step_num(n-2));
 }
