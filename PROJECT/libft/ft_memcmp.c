// memcmp
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int index = 0;
    int entier;

    while (index<n)
    {
        ((int*)s1[]);
        ((int*)s2[]);

        if (s1[index]<s2[index])
        {
            entier = -1;
        }
        else if (s1[index]>s2[index])
        {
            entier = 1;
        }
        else
        {
            entier = 0;
        }

        return entier;
        ++index;
    }
}