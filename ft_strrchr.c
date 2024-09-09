#include "libft.h"

void *ft_strrchr(const char *s, int c)
{
	const char *p = NULL;
	for (;;) {
		if (*s == (char)c) {
			p = s;
		}
		if (*s++ == '\0') {
			return (char *)p;
		}
	}
}
