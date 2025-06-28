# libft

This project is a personal rewrite of selected functions from the C Standard Library (`libc`), created for educational purposes and deeper understanding of how common low-level operations work under the hood.

## Implemented Functions

The following functions have been reimplemented:

### Character Checks & Conversions
- `ft_isalnum`
- `ft_isalpha`
- `ft_isascii`
- `ft_isdigit`
- `ft_isprint`
- `ft_tolower`
- `ft_toupper`

### String Handling
- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_strlcat`
- `ft_strlcpy`

### Memory Operations
- `ft_memcpy`
- `ft_memccpy`
- `ft_memchr`
- `ft_memcmp`
- `ft_memmove`
- `ft_memset`
- `ft_bzero`
- `ft_calloc`

### Others
- `ft_atoi`

## How to Use

You can include the `.c` files in your C project and compile them with your existing build system (e.g., Makefile, CMake, etc.).

Example:

```bash
gcc -Wall -Wextra -Werror -c ft_strlen.c ft_memcpy.c ...
```
