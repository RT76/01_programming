#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
typedef long long LL;
int tot=0;
int is_prim(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
LL primetable[10050];
void initnprimes(int n){
    primetable[tot]=2;
    for(int i=3;i<=n;i++){
        if(is_prim(i)){
            ++tot;
            primetable[tot]=1ll*i;
        }
    }
}
int main()
{
    
    int n,a,i;
    initnprimes(10050);
    
    while(1)
    {
        
        n=getchar();
        if(n=='\n')goto end;
        n=n-'0';
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            printf("%lld ",primetable[a-1]);
        }printf("\n");
        a=getchar();
    }
    end:return 0;
}