#include "libft.h"
#include <string.h>

size_t *ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_len = strlen(src);
	if (dstsize > 0) {
		size_t copy_len = (src_len >= dstsize) ? dstsize - 1 : src_len;
		memcpy(dst, src, copy_len);
		dst[copy_len] = '\0';
	}
	return src_len;
}
