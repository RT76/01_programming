#include<stdio.h>
int main()
{	int a,b,min,i,ret;
	scanf("%d %d",&a,&b);
	if(a>=b){
		min=b;
	}else min=a; 
	for(i=1;i<min;i++){
		if(a%i==0&&b%i==0){
		ret=i;}
	}
	if(ret=1){ 
		printf("%d与%d互质\n",a,b);
	}else
	printf("%d和%d的最大公约数是%d\n",a,b,ret);
	system("pause");
	return 0;
 } 
