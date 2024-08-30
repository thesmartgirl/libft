size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t len_dst;
    size_t len_src;
    size_t i;
    size_t res;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (size > len_dst)
        res = len_src + len_dst;
    else
        res = len_src + size;
    i = 0;
    while (src[i] && (len_dst < size - 1))
    {
        dst[len_dst] = src[i];
        len_dst++;
        i++;
    }
    if (len_dst < size)
        dst[len_dst] = '\0';
    return res;
}
