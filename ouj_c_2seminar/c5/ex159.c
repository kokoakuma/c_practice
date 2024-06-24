#include <stdio.h>
#include <string.h>
int mystrlen(const char *);

int main(void)
{
    const char *cp = "string";
    printf("%d\n", mystrlen(cp));
    printf("%d\n", mystrlen("ABC"));
    printf("%d\n", mystrlen(""));
    return 0;
}

int mystrlen(const char *target) {
    int num = 0;
    while (*target != '\0')
    {
        num += 1;
        target++;
    }
    return num;
}