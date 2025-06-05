#include<stdio.h>

main()
{
	int n,x,i,num=0;
	scanf("%d %d",&n,&x);
	if(n<10&&n>=x){
		num=1;
		return 0;
	}else {
		num=1;
	for(i=10;i<n;i++)
{
	
	int mask=1,t;
	t=i;
//	scanf("%d",&x);
	while(t>9){
		t/=10;
		mask*=10;
	}
	t=i;
	do{
		int d;
		d=t/mask;
	//	printf("\n\n\n\n\n%d\n\n\n\n\n",d);
		t%=mask;
		if(x==d)num++;
		if(x==t)num++;
		mask/=10;
		}while(mask>0);
	//printf("\n");

//	system("pause");
 } 
}
 	printf("%d",num);
 return 0;
}
