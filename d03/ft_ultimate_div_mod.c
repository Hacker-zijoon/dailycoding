#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int c;
  c = *a;
  *a = *a / *b;
  *b = c % *b;
}

// void ft_ultimate_div_mod(int *a, int *b)
// {
//   int *c;
//   c = a;
//   *a = *a / *b;
//   *b = *c % *b;
// }

int main(void)
{
  int *a;
  int a2 = 10;
  a = &a2;
  int *b;
  int b2 = 3;
  b = &b2;

  ft_ultimate_div_mod(a,b);
  printf("%d, %d\n", *a, *b);
  return (0);
}
