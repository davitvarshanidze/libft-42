#include "libft.h"

void *ft_bzero(void *s, size_t n) {
    char *ptr;
    size_t i;
    if (!n)
    return;
    ptr = 0;
    i = 0;
    while (i < n)
    *(ptr + i++) = 0;
}