#include <stdio.h>

int main()
{
    int i;
    printf("正の整数を入れて");
    fflush(0);
    scanf("%d", &i);

    if (i < 0)
    {
        printf("いやだから正の整数だって");
        return 0;
    }

    if (i % 2)
    {
        printf("%dは奇数です", i);
    }
    else
    {
        printf("%dは偶数です", i);
    }

    return 0;
}