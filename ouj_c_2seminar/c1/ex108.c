#include <stdio.h>
int main(void)
{
    int month;


    do {
        printf("月（1-12）> ");
        fflush(stdout);
        scanf("%d", &month);
    } while ( month < 1 || month > 12);

    switch (month)
    {
        case 3:
        case 4:
        case 5:
            printf("春です。\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("夏です。\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("秋です。\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("冬です。\n");
            break;
        default:
            printf("入力が正しくありません。\n");
            break;
    }
    return 0;
}