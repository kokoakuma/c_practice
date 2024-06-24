#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[5][10] = {
		"Morimoto",
		"Yamada",
		"Tanaka",
		"Takahashi",
		"Ito"
	};
	int max_len, i;
	for (max_len = -1, i = 0; i < 5; ++i)
	{
		int len;
		len = (int)strlen(name[i]);
		if (len > max_len)
		{
			max_len = len;
		}
	}
	printf("%d\n", max_len);
	return 0;
}