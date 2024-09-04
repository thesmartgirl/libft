#include "libft.h"

/* The strchr() function returns a pointer to the first occurrence of
the character c in the string s. */
char *ft_strchr(const char *s, int c)
{
  while(*s != '\0')
  {
    if(*s == (char)c)
      return (char *)s;
    s++;
  }
  if (*s == c)
       return (char*)s;
  return ((char *)NULL);
}
