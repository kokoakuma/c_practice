#include <stdio.h>
int locate_char(const char *, char);
int main(void)
{
	char s[100], c;
	int ret;
	printf("文字列s > ");
	scanf("%s%*c", s);
	printf("文字c > ");
	scanf("%c", &c);
	ret = locate_char(s, c);
	if (ret == -1)
	{
		printf("%s の中に %c は含まれません。\n", s, c);
	}
	else
	{
		printf("%s の中の %c の位置は %d です。\n", s, c, ret);
	}
	return 0;
}
int locate_char(const char *s, char c)
{
	int i;
	for (i = 0; *(s + i) != '\0'; ++i)
	{
		if (*(s + i) == c)
		{
			return i;
		}
	}
	return -1;
}