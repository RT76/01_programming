#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		double a,b,c,x1,x2;
		scanf("%lf %lf %lf",&a,&b,&c);
		double delta;
		if (a == 0)
			 {
			 x1 = -c * 1.0 / b;
			 printf("%.6f\n", x1);
			 }
		delta=b*b-4*a*c;
		if(delta==0)
		printf("%.6lf %.6lf",-b/(2*a),-b/(2*a));
		else if(delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a),x2=(-b-sqrt(delta))/(2*a);
			if(x1>x2) printf("%.6lf %.6lf",x1,x2);
			else printf("%.6lf %.6lf",x2,x1);
		}
		else if(delta<0)
		{
			double q=fabs(sqrt(-delta)/(2*a));
			double p=-b/(2*a);
			printf("%.6lf+%.6lfi %.6lf-%.6lfi",p,q,p,q);
		}
	}
	return 0;
}
