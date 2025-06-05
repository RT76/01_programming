#include<stdio.h>
#include<math.h>

int main()
{
	int m,t,s;
	scanf("%d %d %d",&m,&t,&s);
	if(t==0)printf("0");
	else{
	int a;
	a=m-ceil((1.0*s/t));
	if(a<0){
		printf("0");
	}else printf("%d",a);}
	return 0;
}
