#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 6
int array_max(int *);


int main(void) {
    int ia[NUM];

    int i;

    srand((unsigned int) time(NULL));

    for (i = 0; i < NUM; ++i)
    {
        ia[i] = rand() % 10;
    }

    for (i = 0; i < NUM; ++i) 
    {
        printf("[%d] ",i);
    }
    printf("\n");
    for (i = 0; i < NUM; ++i) 
    {
        printf("[%d]  ",ia[i]);
    }
    printf("\n");
    printf("\n最大値は %d です\n", array_max(ia));
    return 0;
}

int array_max(int *ip)
{
    int max, i;
    for (max = *ip, i = 1; i < NUM; ++i)
    {
        if (*(ip + 1) > max)
        {
            max = *(ip + 1);
        }
    }
    return max;
}