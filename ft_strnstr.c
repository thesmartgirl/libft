#include "libft.h"

/*The strnstr() function locates the first	occurrence of the  null-termi-
       nated  string little in the string big, where not more than len charac-
       ters are	searched.  Characters that appear after	a `\0'	character  are
       not  searched.  Since the strnstr() function is a FreeBSD specific API,
       it should only be used when portability is not a	concern.*/
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
