#include <stdio.h>
#define NUM 5

int main(void)
{
    int price1, price2, price3, price4, price5;
    int max_id;    /* 最高額の商品の番号 */

    int prices[NUM];

	for (i = 0; i < NUM; ++i)
	{
		printf("商品 %d の価格 > ", i + 1);
        fflush(stdout);
		scanf("%d", &price[i]);
	}

    max_id = 0;

    int i;
    for (i = 0; i < NUM - 1; ++i) {
        if (prices[i] < prices[i + 1]) {
            max_id = i + 1;
        }
    }
    printf("最高額の商品の番号は %d、価格は %d です。¥n", max_id + 1, prices[max_id]);
    return 0;
}