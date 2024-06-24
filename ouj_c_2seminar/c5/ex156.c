#include <stdio.h>

int main(void)
{
    char *cp = "string";
    while (*cp != '\0')
    {
        printf("'%c'\n", *cp++);
    }
    return 0;
}