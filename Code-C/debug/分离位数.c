#include<stdio.h>
int main()
{
	int x,mask=1,t;
	scanf("%d",&x);
	t=x;
	while(t>9){
		t/=10;
		mask*=10;
	}
	do{
		int d;
		d=x/mask;
		printf("  %d  ",d);
		x%=mask;
		mask/=10;
		}while(mask>0);
	if(x<10){
	printf("\n");
            }
	system("pause");
	return 0;
 } 
