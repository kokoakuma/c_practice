#include <stdio.h>
int main(void)
{
    int x, y = 2;
    char initial;
    int age;

    printf("名字の頭文字を入力してください > ");
    fflush(0);
    scanf("%c", &initial);
    printf("年齢を入力してください > ");
    fflush(0);
    scanf("%d", &age);
    printf("%cさんの年齢は%d歳です。\n", initial, age);
    return 0;
}