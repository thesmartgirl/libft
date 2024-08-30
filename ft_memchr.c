void *ft_memchr(const void *s, int c, size_t n)
{
  unsigned char *src;
  unsigned char chr;

  src = (unsigned char *)s;
  chr = (unsigned char)c;
  while(n-- > 0)
  {
    if(*src == chr)
      return src;
    src++;
  }
  return NULL;
}
