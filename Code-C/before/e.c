#include<stdio.h>
#include<math.h>
int main()
{
	double e,n;
	printf("����������n=");
	scanf("%lf",&n);
	e=pow(1+1/n,n);
	printf("��Ȼ�����ĵ�e�Ľ���ֵΪ%1.20f\n",e);
	system("pause");
	return 0;
}
