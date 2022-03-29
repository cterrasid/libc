#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
    size_t  s1len;
    char    *str;

    if (!s1 || !set)
        return (NULL);
    s1len = ft_strlen(s1);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    while (ft_strchr(set, *(s1 + s1len)))
        s1len--;
    str = ft_substr((char *)s1, 0, s1len + 1);
    return (str);
}

// int main(void)
// {
//     printf("%s\n", ft_strtrim("xxxHolaxxx", "x"));
//     return (0);
// }
