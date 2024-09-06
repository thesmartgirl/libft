#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d == s || n == 0)
        return dest;
    if (d < s || d >= s + n)
    {
        while (n-- > 0)
        {
            *d++ = *s++;
        }
    }
    else
    {
        d += n;
        s += n;
        while (n-- > 0)
        {
            *(--d) = *(--s);
        }
    }
    return dest;
}
