#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
typedef struct data
{
    char name[25];
    int num;
} data;
data ora[100050];
char a[1024];
int cmp(const void *a, const void *b)
{
    data *p = (data *)a, *q = (data *)b;
    if (p->num > q->num)
        return -1;
    else if (p->num < q->num)
        return 1;
    else
        return (strcmp(p->name, q->name));
}
int main()
{
    int i = 0, num = 0, n = 0;
    while (gets(a) != NULL)
    {
        sscanf(a, "%s %d", ora[i].name, &ora[i].num);
        if (ora[i].num >= 100)
            n++;
        i++;
        num = i + 1;
    }
    qsort(ora, num, sizeof(data), cmp);
    printf("%d\n", n);
    for (i = 0; i < num; i++)
    {
        if (ora[i].num >= 100)
            printf("%s %d\n", ora[i].name, ora[i].num);
    }
}