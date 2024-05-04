#include <stdio.h>

#define INT_BIT 32

int main(void)
{
	int i = 0, num;

	printf("num > ");
	fflush(stdout);
	scanf("%d", &num);

	printf("numのビット列は ");

	do {
		i += 1;
		printf("%d", num >> (INT_BIT - i) & 1);

	} while ( i < INT_BIT);
	/* ここにnumのビット列を表示する処理を記述 */


	printf(" です。\n");

	return 0;
}
