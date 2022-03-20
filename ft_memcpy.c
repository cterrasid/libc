#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    unsigned char   *d_str;
    unsigned char   *s_str;

    d_str = (unsigned char *)dest;
    s_str = (unsigned char *)src;
    while (n-- > 0)
        *d_str++ = *s_str++;
}

int main(void)
{
    unsigned char str1[] = "This is a test";
    unsigned char str2[] = "This is a test";
    size_t  size = 4;
    printf("Original:\n");
    printf("Before: :%s:\n", str1);
    memcpy(str1, &str1[10], size);
    printf("After: :%s:\n", str1);
    printf("\nMine:\n");
    printf("Before: :%s:\n", str2);
    ft_memcpy(str2, &str2[10], size);
    printf("After: :%s:\n", str2);
    return (0);
}