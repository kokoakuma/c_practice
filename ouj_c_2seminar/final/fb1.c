#include <stdio.h>

/* 期末課題B-1を選択しています */

typedef struct {
	char name[10];
	int height;
	int weight;
} PDATA;

void bubble_sort(PDATA *, int);

int main(void)
{
	int len, i;

	PDATA pd[] = {
		{ "Ito", 170, 71 },
		{ "Sato", 182, 74 },
		{ "Takahashi", 166, 54 },
		{ "Hasegawa", 153, 59 },
		{ "Yano", 161, 61 }
	};

	len = (int)(sizeof pd / sizeof pd[0]);

	for (i = 0; i < len; ++i)
	{
		printf("%sさんの身長は%dcmです。\n", pd[i].name, pd[i].height);
	}

	bubble_sort(pd, len);

	printf("\n身長の昇順に並べ替えました。\n\n");

	for (i = 0; i < len; ++i)
	{
		printf("%sさんの身長は%dcmです。\n", pd[i].name, pd[i].height);
	}

	return 0;
}

/* bubble_sort()の定義 構造体PDATAのポインタ変数と配列の長さを示すintを受け取る */
void bubble_sort(PDATA *pp, int len)
{
	int i, j;
	/* iを降順でループする */
	for (i = len - 1; i > 0; --i)
	{
		/* jを昇順でループさせ、隣の要素と比較する */
		for (j = 0; j < i; ++j)
		{
			/* -> を使用して、ポインタが示す構造体のメンバにアクセスする */
			if ((pp + j) -> height > (pp + j + 1) -> height)
			{
				/* tmp変数を用意して、要素を入れ替える */
				PDATA tmp;
				tmp = *(pp + j);
				*(pp + j) = *(pp + j + 1);
				*(pp + j + 1) = tmp;
			}
		}
	}
}