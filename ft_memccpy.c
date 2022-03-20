#include <string.h>
#include <stdio.h>

void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
    size_t          i;
    unsigned char   *d_str;
    unsigned char   *s_str;

    i = 0;
    d_str = (unsigned char *)dest;
    s_str = (unsigned char *)src;
    while (i < n)
    {
        d_str[i] = s_str[i];
        if (s_str[i] == (unsigned char)c)
            return ((void *)dest + i + 1);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char src1[] = "testing@mail.com";
    char dest1[12];
    char src2[] = "testing@mail.com";
    char dest2[12];
    size_t  size = 7;
    printf("Original:\n");
    printf("Before: :%s:\n", dest1);
    memccpy(dest1, src1, '@', size);
    printf("After: :%s:\n", dest1);
    printf("\nMine:\n");
    printf("Before: :%s:\n", dest2);
    ft_memccpy(dest2, src2, '@', size);
    printf("After: :%s:\n", dest2);
    return (0);
}