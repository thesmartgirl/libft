#include "libft.h"

int is_separator(char c, char sep) {
    return c == sep;
}

int words_count(const char *str, char sep) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (!is_separator(*str, sep) && !in_word) {
            in_word = 1;
            count++;
        } else if (is_separator(*str, sep)) {
            in_word = 0;
        }
        str++;
    }
    return count;
}

char **ft_split(const char *str, char sep) {
    char **array;
    int count = 0;
    int start = 0;
    int i = 0;

    int num_words = words_count(str, sep);
    array = (char **)malloc((num_words + 1) * sizeof(char *));
    if (!array) return NULL;

    while (str[i]) {
        if (!is_separator(str[i], sep)) {
            start = i;
            while (str[i] && !is_separator(str[i], sep)) {
                i++;
            }
            array[count] = ft_strdup(str + start);
            if (!array[count]) {
                while (count > 0) {
                    free(array[--count]);
                }
                free(array);
                return NULL;
            }
            count++;
        } else {
            i++;
        }
    }
    array[count] = NULL;
    return array;
}
