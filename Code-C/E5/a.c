#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[200];

    while (gets(a)!= NULL)
    {
        int i = 0 ;
        int num = 0;
        // gets(a);
        for (i = 0; i < strlen(a); i++)
        {
            
            if (a[i] == '2')
                num++;
        }
        if (2 * num > strlen(a))
            printf("Pass\n");
        else
            printf("Veto\n");
    num=0;
    }
    
    return 0;
}