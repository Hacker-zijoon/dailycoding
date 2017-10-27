#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int ptr;
  ptr = *b;
  *b = *a;
  *a = ptr;
}

int main(void)
{
  int c = 3;
  int d = 5;
  ft_swap(&c,&d);
  printf("%d, %d", c, d);

}
