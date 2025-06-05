#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char **argv)
{
    long long rot = 1;
    for (int i = 1; i <= 1000; i++)
    {
        rot *= i;
    }
    printf("%lld\n", rot);
    system("pause");
}