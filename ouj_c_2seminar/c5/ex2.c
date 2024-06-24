#include <stdio.h>
int main(void)
{
	const char *cp = "string";
	int i;
	for (i = 0; (cp + 1) != '\0' ; ++i)
	{
		printf("%c\n", *(cp + i));
	}
	return 0;
}