#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct student_data
{
    char name[25];
    char no[10];
    double score;
} stuinf;
stuinf stu[10050];
// int number[10050];
int compare(const void *p, const void *q);
int main()
{
    int n, i;
    char a[256];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // gets(a);
        scanf("%s %s %lf", stu[i].name, stu[i].no, &stu[i].score);
        // sscanf(stu[i].no,"%d",&number[i]);
    }
    qsort(stu, n,sizeof(stuinf),compare);
    for(i=0; i < n; i++)
    {
        printf("%s %s %.4lf\n",stu[i].name,stu[i].no,stu[i].score);
    }
    return 0;
}
int compare(const void *p, const void *q)
{
    int na, nb;
    stuinf *a = (stuinf *)p, *b = (stuinf *)q;
    sscanf(a->no, "%d", &na);
    sscanf(b->no, "%d", &nb);
    if (a->score > b->score)
        return -1;
    else if (a->score < b->score)
        return 1;
    else
    {
        if (na < nb)
            return -1;
        else if (na > nb)
            return 1;
        else
            return strcmp(a->name, b->name);
    }
}