#include "libft.h"
#include <stddef.h>

void *ft_strlen(const char *s)
{
	size_t length = 0;
	while (s[length] != '\0') {
		length++;
	}
	return length;
}
