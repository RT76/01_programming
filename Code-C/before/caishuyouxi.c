#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
	srand(time(0));
	int number,count,a;
	number=rand()%100+1,count=0,a=0;
	printf("\n\n����һ��������Ϸ\n");
	printf("�����Ѿ������һ��1��100����\n");
	do{
		printf("��������µ�����");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("��µ�������\n"); 
		} else if(a<number){
			printf("��µ���С��\n");
		}
	} while (a!=number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸣�%d\n",count,number);
	system("pause");
	return 0;
 } 
