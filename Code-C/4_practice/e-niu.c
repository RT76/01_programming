#include <stdio.h>
#include <math.h>
double length(double a, double b);           //划分区间长度
double height(double l, double a, int n);    //求某点的值&&矩形高度
double area(double h, double l);             //曲面梯形近似面积
double fun(double x);                        //定义积分方程
double seek_x(double l, double a, double n); //求当前x的值
double integrate(double a, double b);        //求积分

int main()
{
    double n, start, end, out;
    scanf("%lf", &n);
    start = 0;
    end = n;
    out = integrate(1.0 * start, 1.0 * end);
    printf("%lf", pow(2.71828182846, out));
    return 0;
}
double length(double a, double b)
{
    double division;
    division = 100000;
    return ((b - a) / division);
}
double seek_x(double l, double a, double n)
{
    return (a + n * l);
}
double fun(double x)
{
    return -1.0 * pow(2.71812182846, -(x + 0.5) * (x + 0.5));
}
double height(double l, double a, int n)
{
    return fun(seek_x(l, a, n));
}
double area(double h, double l)
{
    return h * l;
}
double integrate(double a, double b)
{
    double Lenth, Height, Area, Addarea = 0;
    int i;
    Lenth = length(a, b);
    for (i = 0; i < 100000; i++)
    {
        Height = height(Lenth, a, i);
        Area = area(Height, Lenth);
        Addarea += Area;
    }
    return Addarea;
}