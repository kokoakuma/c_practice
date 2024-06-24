#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 6
int array_max(int *);
int array_max2(const int *, int);

int main(void)
{
    int ia[NUM];
    int i;
    srand((unsigned int)time(NULL));
    /* ia[0]〜ia[NUM - 1]に0以上9以下の乱数を代入 */
    for (i = 0; i < NUM; ++i)
    {
        ia[i] = rand() % 10;
    }
    /* iaの要素の値を表示 */
    for (i = 0; i < NUM; ++i)
    {
        printf("[%d]  ", i);
    }
    printf("\n");
    for (i = 0; i < NUM; ++i)
    {
        printf(" %d   ", ia[i]);
    }
    printf("\n");
    printf("\n最大値は %d です\n", array_max2(ia, NUM));
    return 0;
}
int array_max(int *ip)
{
    int max, i;
    for (max = *ip, i = 1; i < NUM; ++i)
    {
        if (*(ip + i) > max)
        {
            max = *(ip + i);
        }
    }
    return max;
}

int array_max2(const int *ip, int len)
{
    int max, i;
    for (max = *ip, i = 1; i < len; ++i)
    {
        if (*(ip + i) > max)
        {
            max = *(ip + i);
        }
    }
    return max;
}