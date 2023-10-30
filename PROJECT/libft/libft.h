// libft.h
#ifndef __LIBFT__
#define __LIBFT__

#include <unistd.h>

// memset
void *ft_memset(void *s, int c, size_t n);

// bzero
void ft_bzero(void *s, size_t n);

// memcpy
void *ft_memcpy(void *dest, const void *src, size_t n);

// memccpy
void *ft_memccpy(void *dest, const void *src, int c, size_t n);

// memmove
void *ft_memmove(void *dest, const void *src, size_t n);

// memchr 
void *ft_memchr(const void *s, int c, size_t n);

// memcmp 
int memcmp(const void *s1, const void *s2, size_t n);

// strlen 
size_t strlen(const char *s);

// strdup 
char *strdup(const char *s);

// strcpy 


// strncpy 


// strcat 


// strncat 


// strlcat 


// strchr 


// strrchr 


// strstr 


// strnstr 


// strcmp 


// strncmp 


// atoi 


// isalpha 


// isdigit 


// isalnum 


// isascii 


// isprint 


// toupper 


// tolower 


#endif