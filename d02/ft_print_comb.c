#include "ft_putchar.c"

void ft_print_comb(void)
{
	char dgt[3];
	dgt[0] = '0';

	while (dgt[0] <= '7')
	{
		dgt[1] = dgt[0] + 1;
		while (dgt[1] <= '8')
		{
			dgt[2] = dgt[1] + 1;
			while (dgt[2] <= '9')
			{
				ft_putchar(dgt[0]);
				ft_putchar(dgt[1]);
				ft_putchar(dgt[2]);
				if (dgt[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				dgt[2]++;
			}
			dgt[1]++;
		}
		dgt[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
