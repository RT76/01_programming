#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct point
{
    double x, y;
};
int cmpfunc(const void *a, const void *b)
{
    struct point p = *(struct point *)a, q = *(struct point *)b;
    if (p.x > q.x)
        return 1;
    else if (p.x < q.x)
        return -1;
    else
        return 0;
}
double max(struct point a[], int n)
{
    double ans = (a[0].y - a[1].y) / (a[0].x - a[1].x);
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if ((a[i].y - a[i + 1].y) / (a[i].x - a[i + 1].x) > ans)
        {
            ans = (a[i].y - a[i + 1].y) / (a[i].x - a[i + 1].x);
        }
    }
    return ans;
}
struct point a[500005];
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf%lf", &a[i].x, &a[i].y);
    }
    qsort(a, n, sizeof(struct point), cmpfunc);
    printf("%.3lf", max(a, n));
    return 0;
}