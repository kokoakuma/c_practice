#include <math.h>
#include <stdio.h>
#define NUM 6
int main(void)
{
    double da[NUM];
    int i;
    /* 代入 */
    for (i = 0; i < NUM; ++i) {
        da[i] = sqrt((double)(i + 1));
    }
    for (i = 0; i < NUM; ++i) {
        printf("√%d = %.2f\n", i + 1, da[i]);
    }
    return 0;
}