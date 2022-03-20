#include <strings.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *str;

    str = (unsigned char *)s;
    while(n-- > 0)
        *str++ = '\0';
}

int main(void)
{
    char buffer1[] = "This is a test";
    char buffer2[] = "This is a test";
    printf("Original:\n");
    printf("Before: :%s:\n", buffer1);
    bzero(buffer1, 4);
    printf("After: :%s:\n", buffer1);
    printf("\nMine:\n");
    printf("Before: :%s:\n", buffer2);
    ft_bzero(buffer2, 4);
    printf("After: :%s:\n", buffer2);
    return (0);
}