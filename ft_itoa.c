#include "libft.h"

static size_t ft_nbrlen(int n)
{
    size_t len;

    len = 0;
    if (n == 0)
        len = 1;
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n != 0)
    {
        (n /= 10);
        len++;
    }
    return (len);
}

char	*ft_itoa(int n)
{
    size_t      nlen;
    char        *nstr;
    long int    nbr;

    nlen = ft_nbrlen(n);
    nbr = n;
    if (!(nstr = (char *)malloc(sizeof(char) * (nlen + 1))))
        return (NULL);
    nstr[nlen] = '\0';
    if (nbr < 0)
    {
        *nstr = '-';
        nbr *= -1;
    }
    while (nbr > 0)
    {
        nstr += nlen;
        *nstr-- = '0' + (nbr % 10);
        nbr /= 10;
    }
    return (nstr);  
}

// int	main(void)
// {
// 	printf("itoa: %s\n", ft_itoa(-2147483648));
// 	// system("leaks a.out");
// 	return (0);
// }