#include <stdio.h>
#include <string.h>

struct person{
    char name[10];
    int age;
    double height;
};

int main(void)
{
    struct person p1, p2;
    strcpy(p1.name, "yamada");
    p1.age = 35;
    p1.height = 170.5;

    printf("名前 > ");
    fflush(stdout);
    scanf("%s", p2.name);
    printf("年齢 > ");
    fflush(stdout);
    scanf("%d", &p2.age);
    printf("身長 > ");
    fflush(stdout);
    scanf("%lf", &p2.height);
    printf("\n");
    printf("%sさんの年齢は%d歳、身長は%.1fcmです。\n", p1.name, p1.age, p1.height);
    printf("%sさんの年齢は%d歳、身長は%.1fcmです。\n", p2.name, p2.age, p2.height);
    return 0;
}
