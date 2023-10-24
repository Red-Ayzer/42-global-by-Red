// libft.h
#ifndef __LIBFT__
#define __LIBFT__

#include <unistd.h>

void *ft_memset(void *s, int c, size_t n);

void bzero(void *s, size_t n);

void *memcpy(void *dest, const void *src, size_t n);

void *memccpy(void *dest, const void *src, int c, size_t n);

#endif