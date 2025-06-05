#include<stdio.h>
int main()
{
	int s,i,j,k,st,sum,got=0;
	
	scanf("%d",&s);
	for(i=1;i<=s/2;i++){
		sum=i;
		for(j=i+1;sum<s;j++){
			sum+=j;
		if(sum==s){
			st=1;
			printf("%d=%d",s,st++);
			for(k=st;k<=j;k++)
			printf("+%d",k);
			putchar('\n');
			got++; 
		    }
		}
	}
	if(got==0);
	printf("-1\n");
	system("pause");
	return 0;
 } 
