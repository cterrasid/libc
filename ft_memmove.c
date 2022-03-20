#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
}

int main(void)
{
    unsigned char str1[] = "This is a test";
    // unsigned char str2[] = "This is a test";
    size_t  size = 4;
    printf("Original:\n");
    printf("Before: :%s:\n", str1);
    memmove(str1, &str1[10], size);
    printf("After: :%s:\n", str1);
    // printf("\nMine:\n");
    // printf("Before: :%s:\n", str2);
    // ft_memmove(str2, &str2[10], size);
    // printf("After: :%s:\n", str2);
    return (0);
}