#include <stdio.h>
#include <math.h>
#define len 3
double fan(double *v1[], double *v2[]);
int main()
{
    double v1[3], v2[3], v3[3], v4[3], v5[3];
    int i;
    
   
        scanf("%lf %lf %lf", &v1[0],&v1[1],&v1[2]);
        scanf("%lf %lf %lf", &v2[0],&v2[1],&v2[2]);
        scanf("%lf %lf %lf", &v3[0],&v3[1],&v3[2]);
        scanf("%lf %lf %lf", &v4[0],&v4[1],&v4[2]);
        scanf("%lf %lf %lf", &v5[0],&v5[1],&v5[2]);
    

    printf("%.3lf\n", fan(&v5[3], &v4[3]));
    printf("%.3lf\n", fan(&v3, &v1));
    printf("%.3lf\n", fan(&v1, &v5));
    printf("%.3lf\n", fan(&v2, &v4));
    printf("%.3lf\n", fan(&v5, &v3));
    printf("%.3lf\n", fan(&v2, &v1));
    printf("%.3lf\n", fan(&v3, &v4));
    printf("%.3lf\n", fan(&v1, &v4));
    return 0;
}
double fan(double *v1[], double *v2[])
{
    double m[3], max;
    int i;
    for (i = 0; i < len; i++)
    {
        m[i] = fabs(v1[i] - v2[i]);
        max = m[0];
        for (i = 0; i < len; i++)
        {
            if (m[i] > max)
                max = m[i];
        }
    }
    return max;
}