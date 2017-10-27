#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

int main (void)
{
  int a2 = 14;
  int b2 = 5;
  int *div2;
  div2 = &a2;
  int *mod2;
  mod2 = &b2;
  //
  ft_div_mod(a2,b2,div2,mod2);
  printf("%d %d\n",*div2, *mod2);
  return (0);
}
