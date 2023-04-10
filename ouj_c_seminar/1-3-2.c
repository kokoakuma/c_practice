#include <stdio.h>

int main(void)
{
    int age;

    printf("今何歳ですか？");
    fflush(0);
    scanf("%d", &age);
    printf("5年後の年齢は%dです", age + 5);

    return 0;
}