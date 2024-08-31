#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *str;

    if (!s1 || !set)
        return NULL;
    start = 0;
    end = ft_strlen(s1) - 1;
    while (ft_strchr(set, s1[start]) && start <= end)
        start++;
    if (start > end)
        return ft_strdup("");
    while (ft_strchr(set, s1[end]) && end >= start)
        end--;
    str = malloc(end - start + 2);
    if (!str)
        return NULL;
    ft_strlcpy(str, &s1[start], end - start + 2);
    return str;
}