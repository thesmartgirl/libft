int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *c1;
  const unsigned char *c2;
  size_t i;

  c1 = (unsigned char *)s1;
  c2 = (unsigned char *)s2;
  i = 0;
  while (i < n)
  {
      if (c1[i] != c2[i])
          return c1[i] - c2[i];
      i++;
  }
  return 0;
}
