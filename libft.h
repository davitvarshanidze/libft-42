#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

void *ft_memset(void *b, int c, size_t len);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_strlen(const char *s);
void *ft_strlcpy(char *dst, const char *src, size_t dstsize);
void *ft_strlcat(char *dst, const char *src, size_t dstsize);
void *ft_strchr(const char *str, int c);
void *ft_strrchr(const char *s, int c);
void *ft_strnstr(const char *big, const char *little, size_t len);
void *ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_atoi(const char *str);
void *ft_isalpha(int c);
void *ft_isdigit(int c);

#endif
