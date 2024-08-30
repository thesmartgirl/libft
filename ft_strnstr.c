char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t llen;

    llen = ft_strlen(little);
    if (llen == 0)
        return (char *)big;
    if (llen > len)
        return NULL;
    i = 0;
    while (i <= len - llen)
    {
        if (ft_strncmp(&big[i], little, llen) == 0)
            return (char *)&big[i];
        i++;
    }
    return NULL;
}
