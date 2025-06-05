#include <stdio.h>
int main()
{
int a = 0x80000001;
int i=0;
for(;i<64;i++)
printf("left %d:%08x,%d\n",i, a<<i, a<<i);
return 0;
}
