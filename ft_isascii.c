#include "libft.h"

void *ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
