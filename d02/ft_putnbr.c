#include "ft_putchar.c"

void ft_putnbr(int nb)
{
  if (nb == 0)
  {
    ft_putchar ('0');
  }
  if (nb >= -2147483648 && nb <= 2147483647 && nb != 0)
  {
    if (nb < 0)
    {
      ft_putchar ('-');
      nb = -nb;
    }
    if (nb > 0)
    {
      if (nb / 10 != 0)
        ft_putnbr(nb / 10);
      ft_putchar(nb % 10 + 48);
    }
 }
}

int main (void)
{
  ft_putnbr(0);
  return(0);
}
