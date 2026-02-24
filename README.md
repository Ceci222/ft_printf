*This project has been created as part of the 42 curriculum by Cscaroni.*
# ft_printf

## Description

ft_printf is a custom implementation of the standard C library function printf, aiming at recreating its behaviour with a focus on its ability to handle various format specifiers and a variable number of arguments.  

Through this project several topics require a closer look:
- variadic functions
- macros
- data parsing

## Instructions

To compile run the following command in the root directory:

```bash
make
```
This will generate the `libftprintf.a` static library file.

## Usage
To use the library in your projects, include the header file libftprintf.h in your source files and link the `libftprintf.a` library during compilation.

**Example compilation:**
```bash
cc -Wall -Werror -Wextra ft_myfunction.c libftprintf.a
```

## Resources
- https://www.geeksforgeeks.org/c/variadic-functions-in-c/

### AI Usage
This project utilized AI assistance for:
- Explaining the project structure and Makefile requirements.
- Further clarification of certain concepts.

