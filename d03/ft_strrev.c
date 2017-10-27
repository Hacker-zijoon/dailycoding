#include <stdio.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while (*str != '\0')
  {
    i++;
    str++;
  }
  return (i);
}

char *ft_strrev(char *str)
{
  int cnt;
  int cnt2;
  int i;
  char temp;

  i = 0;
  cnt = ft_strlen(str) - 1;
  cnt2 = cnt/2;
  while (i < cnt2)
  {
    temp = str[i];
    str[i] = str[cnt];
    str[cnt] = temp;
    i++;
    cnt--;
  }
  return(str);
}

int main (void)
{
  char test[10] = "asdsfgh";
  ft_strrev(test);
  printf("%s\n", test);

  return (0);
}
