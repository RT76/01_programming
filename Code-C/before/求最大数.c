#include<stdio.h>

int main()
{
	int a=0,b=0,t;
	while(a>=0){
		a++;
	}
	printf("\nint���͵��������Ϊ%d(���ǵ���һ��һ���ӳ�����!)\n",a-1);
	t=a-1;
	while(t>1){
		b++;
		t/=10;
	}
	printf("�ܹ�%dλ����",b);
	return 0;
 } 
