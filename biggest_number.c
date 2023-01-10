#include <stdio.h>

int main (void)
{
  int a, b;
  scanf("%*d\n%d", &a);

  while (scanf("%d", &b) != EOF)
    if (b > a)
      a = b;

  printf("%d\n", a);
}
