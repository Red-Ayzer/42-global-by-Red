// bzero.c
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    int index;

    index = 0;
    while (index < n)
    {
        ((int*)s)= "\0";
        index ++;
    }
    
}

// 