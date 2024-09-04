# libft
### Open <a href="https://github.com/datodotio/libft/blob/main/subject.pdf" target="_blank">subject.pdf</a> and follow it

### Rewriting C standard library

First read this, to understand how C standard library's functions/modules, etc.. works: <a href="https://www.dii.uchile.cl/~daespino/files/Iso_C_1999_definition.pdf" target="_blank">ISO/IEC 9899:1999 (E)</a>

Study the source code of existing implementations like glibc or musl to see how they meet these specifications.

(Break Down Each Function)

Analyze the Function:
Purpose: What does the function need to achieve? For example, strlen computes the length of a string, while fopen opens a file.
Inputs: What parameters does the function take? Understand the data types and constraints.
Outputs: What should the function return or modify? Identify return values and side effects.
Error Handling: What errors need to be handled? For instance, malloc should handle cases where memory allocation fails.

Example: strlen Implementation

Purpose: Compute the length of a null-terminated string.

Inputs: A pointer to the string.

Outputs: An integer representing the length of the string.

Error Handling: Ensure the input pointer is not NULL.
