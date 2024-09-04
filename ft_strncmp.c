#include "libft.h"

/*compares the first (at most) n bytes of s1 and s2. */
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    unsigned char c1;
    unsigned char c2;

    while (i < n)
    {
        c1 = (unsigned char)s1[i];
        c2 = (unsigned char)s2[i];
        if (c1 != c2 || c1 == '\0' || c2 == '\0')
            return c1 - c2;
        i++;
    }
    return 0;
}
