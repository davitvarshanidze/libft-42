#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

void *ft_memset(void *b, int c, size_t len);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);

#endif

qwe
