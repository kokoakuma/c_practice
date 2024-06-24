#include <stdio.h>
void func1(int);
void func2(int *);
int main(void)
{
	int x = 0;
	func1(x);
	func2(&x);
	printf("%d\n", x);
	return 0;
}
void func1(int x)
{
	x += 1;
}
void func2(int *x)
{
	*x += 2;
}