#include <stdio.h>
int str_comp(const char *, const char *);
int main(void)
{
	char s1[100], s2[100];
	printf("文字列s1 > ");
	scanf("%s", s1);
	printf("文字列s2 > ");
	scanf("%s", s2);
	printf("%s と %s は%s。\n", s1, s2, str_comp(s1, s2) == 0 ? "等しいです" : "等しくありません");
	return 0;
}
int str_comp(const char *s1, const char *s2)
{
	while (*s1 == *s2++)
	{
		if (*s1++ == '\0')
		{
			return 0;
		}
	}
	return 1;
}
