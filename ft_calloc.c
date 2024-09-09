#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_calloc(size_t num_elements, size_t element_size)
{
	size_t total_size = num_elements * element_size;
	void* ptr = malloc(total_size);
	if (ptr != NULL) {
		memset(ptr, 0, total_size);
	}
	return ptr;
}
