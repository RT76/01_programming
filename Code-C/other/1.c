#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
struct student
{
    int id;
    char name[100];
    int score;
    struct student *next;
}
#typedef struct student student_t;
#define len sizeof(struct student)
int
main(int argc, char *argv[])
{
}