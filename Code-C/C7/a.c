#include<stdio.h>
int main(int argc, char **argv){
    int num=0;
    double a[10],h=0;
    for(int i=0;i<10;i++){
        scanf("%lf",&a[i]);
    }
    scanf("%lf",&h);
    h=h*100+30;
    for(int i=0;i<10;i++){
        if(a[i]<=h)num++;
        else continue;
    }
    printf("%d",num);
    return 0;
}