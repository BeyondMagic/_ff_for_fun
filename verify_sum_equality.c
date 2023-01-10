// E.j.:
//   4
//   1 2 3 4
//   10
// Correct ("Acertou") because 1 + 2 + 3 + 4 = 10.
// E.j.:
// 4
// 1 2 3 4
// 11
// Wrong ("Errou").

#include <stdio.h>

int main (void)
{
  int soma = 0, a;
  scanf("%*d");
  while (scanf("%d", &a) != EOF)
    soma += a;
  soma -= a;
  if (soma == a)
    puts("Acertou");
  else
    puts("Errado");
}
