#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<math.h>

int main()
{
    int n,i,j=0;
    double sum=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&a);
        if((a>=60)&&(a<80)){
            sum+=a;
            j++;
        }
    }
    printf("%.2lf",sum/j);
    return 0;
}