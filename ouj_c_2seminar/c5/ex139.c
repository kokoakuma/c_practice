#include <stdio.h>
void decuple1(int);
int main(void)
{
    int x = 5;
    printf("変数xのアドレス: %p\n", &x);
    decuple1(x);
    return 0;
}
void decuple1(int y)
{
    printf("変数yのアドレス: %p\n", &y);
    y *= 10;
}