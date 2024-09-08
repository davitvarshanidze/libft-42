#include "libft.h"

void *ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *src1 = (const unsigned char *)s1;
	const unsigned char *src2 = (const unsigned char *)s2;
	for (size_t i = 0; i < n; i++) {
		if (src1[i] != src2[i]) {
			return src1[i] - src2[i];
		}
	}
	return 0;
}

