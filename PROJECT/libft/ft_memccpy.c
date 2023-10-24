// memccpy
#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
    int index;

    index = 0;

    while(index <n and dest[index] != c)
    {
        ((int*)src[index]) = ((int*)dest[index])

        if(dest[index]=c)
        {
            return dest[index]
        }
        else
        {
            index ++
            return NULL
        }
    }
}