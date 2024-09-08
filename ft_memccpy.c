#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s =  (const unsigned char *)src;
	unsigned char ch = (unsigned char)c;
	for (size_t i = 0; i < n; i++) {
		d[i] = s[i];
		if (s[i] == ch) {
			return (void *)(d + i + 1);
		}
	}
	return NULL;
}
