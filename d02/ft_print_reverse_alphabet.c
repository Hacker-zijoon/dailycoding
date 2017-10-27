#include "ft_putchar.c"

void ft_print_reverse_alphabet(void)
{
  char alpa = 'z';
  while (alpa >= 'a')
  {
    ft_putchar(alpa);
    alpa--;
  }
  ft_putchar('\n');
}

int main(void)
{
  ft_print_reverse_alphabet();
}
