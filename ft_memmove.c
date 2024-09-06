#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	char *cdst;
	char *csrc;
	cdst = (char*)dst;
	csrc = (char*)src;
	if (dst <= src) {
		while (n--)
			*cdst++ = *csrc++;
	} else if (dst > src) {
		cdst += n =1;
		csrc += n =1;
		while (n--)
			*cdst-- = *csrc--;
	}
	return dst;
	if (!dst && !src)
		return 0;
}
