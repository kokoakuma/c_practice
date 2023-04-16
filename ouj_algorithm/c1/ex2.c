#include <stdio.h>

int main()
{
    int a;
    double b;
    printf("ファーレンハイト温度を入力してください");
    fflush(0);
    scanf("%d", &a);

    b = 5.0 / 9.0 * (a - 32);
    printf("セルシウス温度だと、%.1fになります", b);
    return 0;
}