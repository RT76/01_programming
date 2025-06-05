#include <stdio.h>
#define _DEBUG
int main(){
#ifdef _DEBUG
    freopen("input.txt","r",stdin);
#else
    puts("cbj1");
#endif
    char buffer[128]={0};
    fgets(buffer,127,stdin);
    puts(buffer);
    printf("cbjlaji!!!!!!!!!!!\n\n");
    return 0;
}