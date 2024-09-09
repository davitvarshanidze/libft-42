#include "libft.h"

size_t *ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	    size_t dst_len = 0;
	    size_t src_len = 0;
	    size_t i, j;
	    while (dst_len < dstsize && dst[dst_len] != '\0') {
	        dst_len++;
	    }
	    while (src[src_len] != '\0') {
	        src_len++;
	    }
	    if (dstsize <= dst_len) {
	        return dstsize + src_len;
	    }
	    i = dst_len;
	    j = 0;
	    while (i < dstsize - 1 && src[j] != '\0') {
	        dst[i] = src[j];
	        i++;
	        j++;
	    }
	    if (i < dstsize) {
	        dst[i] = '\0';
	    }
	    return dst_len + src_len;
}
