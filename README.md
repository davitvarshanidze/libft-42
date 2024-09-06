# libft
### Open <a href="https://github.com/datodotio/libft/blob/main/subject.pdf" target="_blank">subject.pdf</a> and follow it

### Rewriting C standard library

First read this, to understand how C standard library's functions/modules, etc.. works: <a href="https://www.dii.uchile.cl/~daespino/files/Iso_C_1999_definition.pdf" target="_blank">ISO/IEC 9899:1999 (E)</a>

Study the source code of existing implementations like glibc or musl to see how they meet these specifications.

### Break Down Each Function

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

### Plan the Implementation

Algorithm Design:

Outline the Algorithm: Write down the steps required to perform the function’s task. For strlen, this might be a loop that counts characters until the null terminator is found.
Consider Edge Cases: Think about special cases like empty strings or very long strings.
Example for strlen:

Initialize a counter.
Iterate through each character of the string.
Increment the counter until the null terminator is encountered.
Return the counter.

### Implement the Function

Write Code:

Start Simple: Begin with a basic version of the function.
Refine: Add optimizations or handle additional cases as needed.
Example Code for strlen:

size_t strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

### Test Thoroughly

Create Test Cases:

Normal Cases: Typical use cases, like strings of various lengths.
Edge Cases: Empty strings, very long strings, null pointers if your implementation needs to handle them.
Example Tests for strlen:

strlen("hello") should return 5.
strlen("") should return 0.

### Reflect and Iterate

Review and Improve:

Analyze: Review your implementation to ensure it meets the specification and performs well.
Optimize: Look for potential performance improvements or memory optimizations.
Example for strlen: Consider the implications of different approaches. For instance, a more advanced implementation might use pointer arithmetic or SIMD instructions for optimization.

### Learn from Others

Study Various Implementations:

Compare: Look at how different standard libraries implement the same functions.
Learn Patterns: Identify common patterns or techniques used in high-quality implementations.

### Understand Low-Level Details

System Interaction:

Explore System Calls: For functions that interact with the operating system (like fopen), understand how system calls work and how they can be used.
Memory Management: Understand how dynamic memory allocation works at a lower level.

### Think in Terms of Abstractions

High-Level Design:

Modularity: Break functions into smaller, manageable parts.
Encapsulation: Hide implementation details and provide a clear interface.

### Practice and Iterate

Hands-On Experience:

Build Projects: Work on small projects or contribute to open-source projects to gain more experience.
Refactor: Regularly revisit and improve your code.
Summary
Study Specifications: Understand what each function should do.
Break Down Functions: Analyze inputs, outputs, and behavior.
Plan: Outline algorithms and consider edge cases.
Implement: Write and refine the code.
Test: Ensure correctness with diverse test cases.
Reflect: Review and optimize your implementation.
Learn from Others: Study various implementations and techniques.
Understand System Interaction: Know how functions interact with the OS and memory.
Think in Abstractions: Maintain modular and clear designs.
Practice: Gain experience through projects and iterations.
By following these steps, you’ll develop a deeper understanding of how to design, implement, and think critically about functions in the context of a standard library.
