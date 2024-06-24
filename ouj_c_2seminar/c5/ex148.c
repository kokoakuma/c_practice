#include <stdio.h>
void decuple_array(int *, int);
int main(void)
{
	int x[] = { 1, 2, 3 }, y[] = { 9, 8, 7, 6 };
	int len_x, len_y, i;
	len_x = (int)(sizeof x / sizeof x[0]);
	len_y = (int)(sizeof y / sizeof y[0]);
	decuple_array(x, len_x);
	decuple_array(y, len_y);
	for (i = 0; i < len_x; ++i)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}
	printf("\n");
	for (i = 0; i < len_y; ++i)
	{
		printf("y[%d] = %d\n", i, y[i]);
	}
	return 0;
}

void decuple_array(int *ip, int len)
{
	int i;
	for (i = 0; i < len; ++i)
	{
		*(ip + i) *= 10;
	}
}