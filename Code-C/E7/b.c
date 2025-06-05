#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
typedef struct node
{ //创建一个名为 'struct node' 的结构体, 同时将 'struct node' 命名为 'stuinf'.
    char name[15];
    int chinese;
    int math;
    int eng;
} stuinf;          //此时 'struct node' 和 'stuinf' 均指代该数据结构类型
stuinf stu[10005];
int sum[10005],i=0,n=0,max; //申请一个大小为10005的 'stuinf' 类型数组, 也即 'struct node' 类型数组 stu.
int main(){
    char a[50];
    while(gets(a) != NULL){
        sscanf(a, "%s %d %d %d", stu[i].name,&stu[i].chinese,&stu[i].math,&stu[i].eng);
        sum[i]=stu[i].chinese+stu[i].math+stu[i].eng;
        i++;
        n=i;
    }max=sum[0];
    for(i=0;i<=n;i++){
        if(sum[i]>max)max=sum[i];
        else continue;
    }
    for(i=0;i<=n;i++)
    {
        if(sum[i]==max)
        {
            printf("%s %d %d %d\n",stu[i].name,stu[i].chinese,stu[i].math,stu[i].eng);
        }
    }
    return 0;

}