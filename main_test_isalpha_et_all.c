#include "libft.h"
#include <stdio.h>

int main()
{
  int c = 66;

  printf("isalpha = %d\n", ft_isalpha(c));
  printf("isalnum = %d\n", ft_isalnum(c));
  printf("isascii = %d\n", ft_isascii(c));
  printf("isdigit = %d\n", ft_isdigit(c));
  printf("isprint = %d\n", ft_isprint(c));
  printf("to_upper = %d\n", ft_toupper(c));
  printf("to_lower = %d\n", ft_tolower(c));

  return 0;
}
