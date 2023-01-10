#include <stdio.h>

int main(void)
{
  scanf("%*d\n");

  int c;
  while ((c = getchar()) != EOF)
  {
    if (c >= 'A' && c <= 'Z')
    {
      c += 13;
      if (c > 'Z')
        c -= 26;
    }
    putchar(c);
  }
}
