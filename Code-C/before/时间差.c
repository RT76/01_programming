#include<stdio.h>

int main()

{
	int h1,h2,min1,min2,ih,im;
	printf("������ʱ��1��");
	scanf("%d%d",&h1,&min1);
	printf("������ʱ��2��");
	scanf("%d%d",&h2,&min2);
	ih=h2-h1,im=min2-min1;
	if(im<0){
		im=60+im;
		ih--;
	}
	printf("ʱ�����%dʱ%d��\n",ih,im);
	return 0;
}
