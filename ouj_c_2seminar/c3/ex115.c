#include <stdio.h>
int main(void)
{
    int num, x;
    printf("num > ");
    fflush(stdout);
    scanf("%d", &num);
    printf("位置 > ");
    fflush(stdout);
    scanf("%d", &x);
    printf("numの下位から%dビット目の値は %c です。 \n", x, num & 1 << (x - 1) ? '1' : '0');
    return 0;
}