#include <stdio.h>
int main(void)
{
    int a, b;
    int max, min;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    if (a > b) {
        max = a;
        min = b;
    }
    else { 
        max = b;
        min = a;
    }
    printf("max = %d, min = %d\n", max, min);
    return 0;
}