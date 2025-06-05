#include<stdio.h>
int main()
{
	int x,mask=1,t=x;
	scanf("%d",&x);
	while(t>9){
		t/=10;
		mask*=10;
	}
	do{
		int d;
		d=x/mask;
		printf("\n\n\n\n\n%d\n\n\n\n\n",d);
		x%=mask;
		mask/=10;
		}while(mask>0);
	printf("\n");
	system("pause");
	return 0;
 } 
