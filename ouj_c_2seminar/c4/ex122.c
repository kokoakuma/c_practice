#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int point = 0;
    int cont;
    srand((unsigned int)time(NULL));
    do
    {
        printf("現在の得点: %d\n", point);        
        fflush(stdout);
        printf("カードを引きますか (はい: 1, いいえ: 0) > ");
        fflush(stdout);
        scanf("%d", &cont);
        if (cont)
        {
            int new_card;
            // 1 - 10 のカード
            new_card = 1 + rand() % 10;
            printf("カードは%dでした\n", new_card);
            fflush(stdout);
            point += new_card;

            // 23より大きい場合、ポイント0にし、ゲームを終了させる
            if (point > 23) {
                point = 0;
                cont = 0;
            }

        }
        printf("\n");
    } while (cont);

    printf("あなたの得点は %d 点です¥n", point);
    return 0;
}