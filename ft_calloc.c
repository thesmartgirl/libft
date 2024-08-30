#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  void *arr;
  size_t total_size;

  if(nmemb == 0 || size == 0)
    total_size = 0;
  total_size = nmemb*size;
  arr = (void *)malloc(total_size);
  if(arr != NULL)
    ft_bzero(arr, total_size);
  return arr;
}
