#include "libft.h"

int *ft_toupper(char *str)
{
	int i;
	for(i=0;i< i <= strlen(str); i++) {

	        if(str[i] >= 97 && str[i] <= 122) {

	                str[i] = str[i] -32;
	        }
	    }
	return(str[i]);
}
