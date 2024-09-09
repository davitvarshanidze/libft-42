#include "libft.h"

void *ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
