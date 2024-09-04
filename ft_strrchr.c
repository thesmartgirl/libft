#include "libft.h"

/*The strrchr() function returns a pointer to the last occurrence of
the character c in the string s.*/
char *ft_strrchr(const char *s, int c)
{
  char *res;

  res = ((char *)NULL);
  while(*s != '\0')
  {
    if(*s == (char)c)
      res = (char *)s;
    s++;
  }
  if (*s == c)
       res = (char*)s;
  return res;
}
