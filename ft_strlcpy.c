size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t i;
  size_t len;

  len = ft_strlen(src);
  if (len == 0)
    return 0;
  i = 0;
  while(i < size - 1 && src[i] != '\0')
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return len;
}
