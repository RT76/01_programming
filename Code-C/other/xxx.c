#include <stdio.h>
#include <windows.h>

int main()
{
    const char music[] = "CDEFGAB";
    const int f[] = {0, 523, 578, 659, 698, 784, 880, 988};
    int i;

    int t = 400;

    Beep(f[1], t);
    Beep(f[1], t);
    Beep(f[5], t);
    Beep(f[5], t);
    Beep(f[6], t);
    Beep(f[6], t);
    Beep(f[5], t);
    sleep(1);

    Beep(f[4], t);
    Beep(f[4], t);
    Beep(f[3], t);
    Beep(f[3], t);
    Beep(f[2], t);
    Beep(f[2], t);
    Beep(f[1], t);
    sleep(1);

    Beep(f[5], t);
    Beep(f[5], t);
    Beep(f[4], t);
    Beep(f[4], t);
    Beep(f[3], t);
    Beep(f[3], t);
    Beep(f[2], t);

    Beep(f[5], t);
    Beep(f[5], t);
    Beep(f[4], t);
    Beep(f[4], t);
    Beep(f[3], t);
    Beep(f[3], t);
    Beep(f[2], t);

    Beep(f[1], t);
    Beep(f[1], t);
    Beep(f[5], t);
    Beep(f[5], t);
    Beep(f[6], t);
    Beep(f[6], t);
    Beep(f[5], t);

    Beep(f[4], t);
    Beep(f[4], t);
    Beep(f[3], t);
    Beep(f[3], t);
    Beep(f[2], t);
    Beep(f[2], t);
    Beep(f[1], t);

    return 0;
}