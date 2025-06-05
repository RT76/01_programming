#include<stdio.h>
#include<math.h>
int main()
{	int n,i;
	scanf("%d",&n);
	int begin=pow(10,n-1),end=pow(10,n)-1;
	for(i=begin;i<end;i++){
		int d,num=0,m,i1;
		int sum=0;
		m=pow(10,n-1);
		i1=i;
		do{
			d=i1/m;
			sum+=pow(d,n);
			i1%=m;
			m/=10;
		}while(m>=1);
		if(sum==i){
			printf("%d\n",i);
			num++;
		}
	/*	if(num%10==0){
			printf("\n");
		}*/
	}
	system("pause");
	return 0;
 } 
