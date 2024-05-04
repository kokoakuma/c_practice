#include <stdio.h>

int main(void)
{
	printf("sizeof(char)        = %d\n\n", (int)sizeof(char));

	printf("sizeof(short)       = %d\n", (int)sizeof(short));
	printf("sizeof(int)         = %d\n", (int)sizeof(int));
	printf("sizeof(long)        = %d\n\n", (int)sizeof(long));

	printf("sizeof(float)       = %d\n", (int)sizeof(float));
	printf("sizeof(double)      = %d\n", (int)sizeof(double));
	printf("sizeof(long double) = %d\n\n", (int)sizeof(long double));

	printf("sizeof(size_t)      = %d\n\n", (int)sizeof(size_t));

	printf("sizeof 'A'          = %d\n", (int)sizeof 'A');
	printf("sizeof 3            = %d\n", (int)sizeof 3);
	printf("sizeof 3.0          = %d\n", (int)sizeof 3.0);
	printf("sizeof \"A\"          = %d\n", (int)sizeof "A");
	printf("sizeof \"ABC\"        = %d\n\n", (int)sizeof "ABC");

	printf("sizeof (3 + 5)      = %d\n", (int)sizeof (3 + 5));
	printf("sizeof (3.0 + 5)    = %d\n", (int)sizeof (3.0 + 5));

	return 0;
}
