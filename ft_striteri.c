#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    if (!s || !f)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

// void test(unsigned int i, char * s) {
// 	*s += i;
// }

// int main(void)
// {
//     char    s[] = "Caracol";
//     ft_striteri(s, test);
//     printf("%s\n", s);
//     return (0);
// }