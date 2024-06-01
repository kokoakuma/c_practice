#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int trials; /* くじを引く回数 */
    int w1 = 0; /* 10ポイントに当たった回数 */
    int w2 = 0; /*  3ポイントに当たった回数 */
    int i;

    srand((unsigned int)time(NULL));
    printf("くじを引く回数 > ");
    fflush(stdout);
    scanf("%d", &trials);
    /* ここに処理を記述 */
    int lottery;
    for (i = 0; i < trials; i++) {
        lottery = rand() % 20;
        if (lottery < 3) {
            w2 += 1;
        } else if (lottery == 3) {
            w1 += 1;
        }
    }
    printf("%d回くじを引き、10ポイントに%d回、3ポイントに%d回当たりました。\n", trials, w1, w2);
    printf("使ったポイントは%d、得たポイントは%dです。\n", trials, w1 * 10 + w2 * 3);
    return 0;
}