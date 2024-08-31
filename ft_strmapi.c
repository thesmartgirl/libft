#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int i;
  char *res;

  if (!s || !f)
        return NULL;
  res = (char *)malloc((ft_strlen(s)+1) * sizeof(char));
  if(!res)
    return NULL;
  i = 0;
  while (s[i] != '\0') {
    res[i] = f(i, s[i]);
    i++;
  }
  res[i] = '\0';
  return res;
}
