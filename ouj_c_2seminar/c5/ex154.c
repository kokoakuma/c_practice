#include <stdio.h>
#define NUM 6
int gt5(const int *, int);

int main(void)
{
	int ta[NUM] = {1,2,3,4,5,6};
    int i;

    printf("%d", gt5(ta, NUM));
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