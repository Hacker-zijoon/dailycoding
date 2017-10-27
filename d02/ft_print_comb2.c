#include "ft_putchar.c"

void ft_print_comb(void)
{
  char dgt[4];
  dgt[0] = '0';
  dgt[1] = '0';
  dgt[2] = '0';
  dgt[3] = '1';

  while(dgt[0] <= '9')
  {
    while(dgt[1] <= '9')
    {
      while(dgt[2] <= '9')
      {
        while(dgt[3] <= '9')
        {
          if (dgt[0] <= dgt[2] && dgt[1] <= dgt[3] && (dgt[0] != dgt[2] || dgt[1] != dgt[3]))
          {
            ft_putchar(dgt[0]);
            ft_putchar(dgt[1]);
            ft_putchar(' ');
            ft_putchar(dgt[2]);
            ft_putchar(dgt[3]);
            if ((dgt[0] != '9') || (dgt[1] != '8') || (dgt[2] != '9') || (dgt[3] != '9'))
            {
              ft_putchar(',');
              ft_putchar(' ');
            }
          }
          dgt[3]++;
        }
        dgt[3] = '0';
        dgt[2]++;
      }
      dgt[1]++;
      dgt[2] = '0';
    }
    dgt[0]++;
    dgt[1] = '0';
  }
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
