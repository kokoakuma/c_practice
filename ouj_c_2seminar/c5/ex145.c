#include <stdio.h>
int main(void)
{
  int ia[] = { 1, 2, 3, 4, 5 };
  int *ip;
  int len;
  int i;
  ip = ia; /* ipはiaの先頭要素を指す */
  len = (int)(sizeof ia / sizeof ia[0]); /* lenはiaの要素数 */
  /* iaの要素の値を2倍する */
  for (i = 0; i < len; ++i)
  {
    printf("%p\n", (ip + i));
    *(ip + i) *= 2;
  }
  /* iaの要素の値を表示する */
  for (i = 0; i < len; ++i)
  {
    printf("%p\n", ip);
    printf("%d\n", *ip++);
  }
  return 0;
}