#include "libft.h"
#include <stdio.h>

int main()
{
  const char *str = "hello Hello";
  const char *s1 = "hello Hello";
  const char *s2 = "hello Hello123";
  char *dst = malloc(sizeof(char)*40);
  ft_memset(dst, 0, 15);
	ft_memset(dst, 'r', 6);
  dst[11] = 'a';
  char *dst2 = malloc(sizeof(char)*40);
  ft_memset(dst2, 0, 15);
	ft_memset(dst2, 'r', 6);
  dst2[11] = 'a';
  int c = 111; //o

  printf("ft_strlen = %lld\n", ft_strlen(s2));
  printf("ft_strchr = %s\n", ft_strchr(str, c));
  printf("ft_strrchr = %s\n", ft_strrchr(str, c));
  printf("ft_strncmp = %d\n", ft_strncmp(s1, s2, 13));
  printf("ft_strlcpy= %lld\n", ft_strlcpy(dst, s2, 13));
  printf("ft_strlcat = %lld\n", ft_strlcat(dst2, "lo", 15));
  printf("dst2 after ft_strlcat = %s\n", dst2);
  printf("ft_strnstr, big= 12345678, little = 5: %s\n", ft_strnstr("12345678", "5", 8));
  printf("new string %s\n", ft_strdup("hej"));


  char **array;

  array = ft_split("this is_a beautiful_day", 'i');
  int i = 0;
  while(array[i])
  {
    printf("i= %d, %s\n", i, array[i]);
    i++;
  }
  return 0;
}
