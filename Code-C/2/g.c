#include <stdio.h>
void f(unsigned *m);
void g(unsigned *m);
void h(unsigned *m);
void a(unsigned *m);
void b(unsigned *m);
int main()
{
    unsigned n;
    while (scanf("%u", &n) != EOF)
    {
        // scanf("%u", &n);
        f(&n);
        g(&n);
        h(&n);
        a(&n);
        b(&n);
        printf("%u\n", n);
    }
    return 0;
}
void f(unsigned *m)
{
    *m = *m ^ (*m << 1);
}
void g(unsigned *m)
{
    *m = *m ^ (*m << 2);
}
void h(unsigned *m)
{
    *m = *m ^ (*m << 4);
}
void a(unsigned *m)
{
    *m = *m ^ (*m << 8);
}
void b(unsigned *m)
{
    *m = *m ^ (*m << 16);
}