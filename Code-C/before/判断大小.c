#include<stdio.h>
main()
{
	double x,y,z,t;
	printf("��������������\n");
	scanf("%lf%lf%lf",&x,&y,&z);
	 if(x>y)
	 { t=x;
	   x=y;
	   y=t;
	 }
	 if(x>z)
	 { t=x;
	   x=z;
	   z=t;
	 }
	 if(y>z)
	 {t=y;
	  y=z;
	  z=t;
	 }
	printf("��������˳��Ϊ��\n");
	printf("%f,%f,%f,",x,y,z);
	system("pause");
	return 0;
 } 
