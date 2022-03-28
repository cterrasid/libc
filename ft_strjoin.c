#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
    size_t  len;
    char    *str;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = (char *)malloc(sizeof(char) * len);
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1, len);
    ft_strlcat(str, s2, len);
    return (str);
}

// int main(void)
// {
//     char    s1[] = "Hola";
//     char    s2[] = "Pelota";
//     char    *join = ft_strjoin(s1, s2);
//     printf("%s\n", join);
//     printf("%ld\n", sizeof(s1));
//     printf("%ld\n", sizeof(s2));
//     printf("%ld\n", sizeof(join));
// 	// system("leaks a.out");
//     return (0);
// }