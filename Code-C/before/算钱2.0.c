#include<stdio.h>

 int main()  
 {
 	int price=0,bill=0;  /*��ʼ��*/ 
 	printf("��ֱ�����ʵ������Ӧ����\n");
 	scanf("%d%d",&bill,&price); /*������*/ 
	if(bill>=price){printf("����%dԪ\n",bill-price);} 
	else{printf("���Ǯ������\n"); }  /*�жϲ�����*/ 
    system("pause");
    return 0;
  } 
