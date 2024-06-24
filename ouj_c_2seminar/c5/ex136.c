#include <stdio.h>
int main(void)
{
    int i = 3;
    double d = 1.5;

    int *ip;
    double *id;

    ip = &i;
    id = &d;

    *ip += 2;
    *id *= *ip;

    printf("i = %d\n", *ip);
    printf("p = %f\n", *id);
    return 0;
}