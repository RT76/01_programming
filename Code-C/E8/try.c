#include <stdio.h>
#include <math.h>
#define DIM 1024
#define _sq(x) ((x) * (x))
void pixel_write(int, int);
FILE *fp;
unsigned char RD(float x, float y)
{
    return ((int)x % 2 + (int)y % 2) * 127;
}
unsigned char GR(float x, float y)
{
    return ((int)(5 * x) % 2 + (int)(5 * y) % 2) * 127;
}
unsigned char BL(float x, float y)
{
    return ((int)(29 * x) % 2 + (int)(29 * y) % 2) * 127;
}
void pixel_write(int i, int j)
{
    static unsigned char color[3];
    float x, y, s, z;
    s = 3. / (j + 99);
    z = (j + sin((i * i + _sq(j - 700) * 5) / 100. / DIM) * 35) * s;
    x = (i + DIM) * s + z;
    y = (DIM * 2 - i) * s + z;
    color[0] = RD(x, y) & 255;
    color[1] = GR(x, y) & 255;
    color[2] = BL(x, y) & 255;
    fwrite(color, 1, 3, fp);
}
int main()
{
    int i, j;
    fp = fopen("mathPic.ppm", "wb");
    fprintf(fp, "P6\n%d %d\n255\n", DIM, DIM);
    for (j = 0; j < DIM; j++)
        for (i = 0; i < DIM; i++)
            pixel_write(i, j);
    fclose(fp);
    return 0;
}