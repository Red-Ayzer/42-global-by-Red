// memset.c
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
  int index;

  index = 0;
  while (index < n)
  {
    ((int *)s)[index] = c;
    ++index;
  }
  return s;
}