#include <string.h>
#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *ptr;

    ptr = s;
    while(n-- > 0)
        *ptr++ = c;
    return (s);
}

int main(void)
{
    char buffer1[] = "This is a test";
    char buffer2[] = "This is a test";
    printf("Original:\n");
    printf("Before: :%s:\n", buffer1);
    memset(buffer1, '*', 4);
    printf("After: :%s:\n", buffer1);
    printf("\nMine:\n");
    printf("Before: :%s:\n", buffer2);
    ft_memset(buffer2, '*', 4);
    printf("After: :%s:\n", buffer2);
    return (0);
}