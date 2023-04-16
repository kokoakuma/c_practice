#include <stdio.h>
#include <stdlib.h>
#include <search.h>
#define ARRAY_SIZE 10

int compare(const void *data1, const void *data2)
{
    int a, b;
    a = *(int *)data1;
    b = *(int *)data2;
    if (a < b)
    {
        return (-1);
    }
    else if (a > b)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

void print_array(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d,", array[i]);
    }
    printf("\n");
}

int main()
{
    int key;
    int *r;
    int array[ARRAY_SIZE] = {
        10, 12, 14, 15, 16, 17, 34, 45, 46, 47};

    key = 16;
    print_array(array, ARRAY_SIZE);
    r = (int *)bsearch(&key, array, ARRAY_SIZE, sizeof(int), compare);
    if (r != NULL)
    {
        printf("Found %d\n", key);
    }
    else
    {
        printf("Not found");
    }
    return 0;
}
