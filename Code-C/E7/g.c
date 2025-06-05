#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct point
{
    double x,y;
} dot;
dot p[500050];
double max(struct point a[], int n);
int cmp(const void *a, const void *b);
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf", &p[i].x, &p[i].y);
    }
    qsort(p, n, sizeof(dot), cmp);
    printf("%.3lf", max(p,n));
    return 0;
}
int cmp(const void *a, const void *b)
{
    dot *p = (dot *)a, *q = (dot *)b;
    if (p->x > q->x)
        return 1;
    else
        return -1;
}
double max(struct point a[], int n)
{
    double max0 = (a[0].y - a[1].y) / (a[0].x - a[1].x);
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if ((a[i].y - a[i + 1].y) / (a[i].x - a[i + 1].x) > max0)
        max0 = (a[i].y - a[i + 1].y) / (a[i].x - a[i + 1].x);
    }
    return max0;
}