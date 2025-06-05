#include <stdio.h>
#include <stdlib.h>
struct section
{
    int l, r; //左端点和右端点
};
int cmp(const void *p, const void *q)
{
    int la, lb, ra, rb;
    struct section *a = (struct section *)p, *b = (struct section *)q;
    la = a->l;
    lb = b->l;
    ra = a->r;
    rb = b->r;
    if (la < lb)
        return -1;
    else if (la > lb)
        return 1;
    else
    {
        if (ra < rb)
            return -1;
        else
            return 1;
    }
}
int main()
{
    int n;
    struct section a[1010];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i].l, &a[i].r);
    }
    qsort(a, n, sizeof(struct section), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", a[i].l, a[i].r);
    }
    return 0;
}