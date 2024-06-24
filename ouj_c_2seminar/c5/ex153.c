#include <stdio.h>
int main(void)
{
	int ta[9][9];
	int i, j;
	/* 1列目に1～9を代入 */
	for (i = 0; i < 9; ++i)
	{
		ta[i][0] = i + 1;
	}
	/* 1行目に1～9を代入 */
	for (j = 0; j < 9; ++j)
	{
		ta[0][j] = j + 1;
	}
	for (i = 1; i < 9; ++i)
	{
		for (j = 1; j < 9; ++j)
		{
			ta[i][j] = ta[i][0] * ta[0][j];
		}
	}
	/* 九九の表を出力 */
	for (i = 0; i < 9; ++i)
	{
		for (j = 0; j < 9; ++j)
		{
			printf(" %2d", ta[i][j]);
		}
		printf("\n");
	}
	return 0;
}