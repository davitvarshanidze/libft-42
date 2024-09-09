#include "libft.h"

char *ft_strdup(const char *str)
{
	size_t len = strlen(str);
	char* dup_str = (char*)malloc(len + 1);
	if (dup_str == NULL) {
		return NULL;
	}
	strcpy(dup_str, str);
	return dup_str;
}
