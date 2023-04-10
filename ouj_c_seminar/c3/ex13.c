#include <stdio.h>

int main(void)
{
    int a, b;
    int sum;

    printf("整数a >");
    fflush(0);
    scanf("%d", &a);
    printf("整数 b > ");
    fflush(0);
    scanf("%d", &b);

    sum = a + b;

    printf("a + b の結果は%d a - b の結果は%d a * b は%d a / bは%d", sum, a - b, a * b, a / b);
    printf("%f", 4.5 / 2);
    return 0;
}