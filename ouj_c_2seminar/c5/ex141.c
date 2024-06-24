#include <stdio.h>
#include <math.h>
void sqrt2(double *);

int main(void)
{
    double x;
    printf("0以上の数 > ");
    fflush(stdout);
	scanf("%lf", &x);

    sqrt2(&x);
    printf("平方根は %lf です", x);

    return 0;
}
/* 仮引数yで変数xの値を受け取る */
void sqrt2(double *y)
{
    *y = sqrt(*y);
}
