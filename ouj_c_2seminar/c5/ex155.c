#include <stdio.h>
#define NUM 4
int gt5(const int *, int);

int main(void)
{
	int ta[NUM][NUM] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int i;

    printf("%d", ta[3][2]);
    printf("%d", *(ta[3] + 2));
}

int gt5(const int *ip, int len)
{
	int num, i;
	for (num = 0, i = 0; i < len; ++i)
	{
		if (*ip++ > 5)
		{
			++num;
		}
	}
	return num;
}