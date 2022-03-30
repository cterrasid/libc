#include "libft.h"

static size_t   ft_count_words(const char *s, char c)
{
    size_t  i;

    i = 0;
    while (*s++)
    {
        if (*s != c && *(s + 1) == c)
            i++;
    }
    return (i + 1);
}

char	**ft_split(const char *s, char c)
{
    size_t  words;
    size_t  len;
    size_t  i;

    words = ft_count_words(s, c);
    len = ft_strlen(s);
    i = 0;
    while (i < words)
    {
    }
    // printf("%ld\n", words);
    return ((char **)s);
}

int main(void)
{
    char    s[] = "Clarette       Terrasi Díaz  nonono'";
    ft_split(s, ' ');
    return (0);
}