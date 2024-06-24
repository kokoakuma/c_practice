#include <stdio.h>


int main(void){
    char c;
    int i;
    char *pc;
    int *pi;

    pc = &c;
    pi = &i;

    printf("%p\n", pc);
    printf("%p\n", pi);

    return 0;
}