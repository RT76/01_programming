#include<stdio.h>

int main()

{
	int h1,h2,min1,min2,ih,im;
	printf("请输入时间1：");
	scanf("%d%d",&h1,&min1);
	printf("请输入时间2：");
	scanf("%d%d",&h2,&min2);
	ih=h2-h1,im=min2-min1;
	if(im<0){
		im=60+im;
		ih--;
	}
	printf("时间差是%d时%d分\n",ih,im);
	return 0;
}
