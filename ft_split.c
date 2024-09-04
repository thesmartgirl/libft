#include "libft.h"

static size_t count_words(const char *str, char sep) {
    size_t count = 0;
    while (*str) {
        while (*str == sep)
            str++;
        if (*str)
            count++;
        while (*str && *str != sep)
            str++;
    }
    return count;
}

static char **allocate_array(const char *str, char sep) {
    char **array;

    array = (char **)malloc((count_words(str, sep) + 1) * sizeof(char *));
    if (!array)
        return NULL;
    return array;
}

char **ft_split(const char *str, char sep) {
    char **array;
    size_t i;
    size_t start;

    if (!str)
        return NULL;
    array = allocate_array(str, sep);
    if (!array)
        return NULL;
    i = 0;
    while (*str) {
        while (*str == sep)
            str++;
        start = 0;
        while (str[start] && str[start] != sep)
            start++;
        if (start > 0) {
            array[i] = ft_substr(str, 0, start);
            if (!array[i++])
                return NULL;
        }
        str += start;
    }
    array[i] = NULL;
    return array;
}
