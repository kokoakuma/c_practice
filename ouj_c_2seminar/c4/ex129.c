#include <stdio.h>
#define NUM 15

int main(void)
{

    int fibo[NUM];

    fibo[0] = 1;
    fibo[1] = 1;

    int i;
	for (i = 2; i < NUM; ++i)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

    printf("フィボナッチ数列は");
    fflush(stdout);
    int i_print;
    for (i_print = 0; i_print < NUM; ++i_print) {
        printf(" %d,", fibo[i_print]);
    }
    return 0;
}