#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  char *res;

  if (!s)
      return NULL;
  if (start > ft_strlen(s))
      return ft_strdup("");
  if(len > ft_strlen(s) - start)
      len = ft_strlen(s) - start;
  res = (char *)malloc((len + 1) * sizeof(char));
  if (!res)
    return NULL;
  i = 0;
  while (i < len) {
    res[i] = s[start+i];
    i++;
  }
  res[i] = '\0';
  return res;
}
