#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // for macros
# include <unistd.h> //for write 
# include <stdio.h>
# include <stdint.h> // for uintptr_t unsigned int that adapts automatically to system 32 or 64

int     ft_printf(const char *format, ...);
int     ft_putchar(int c);
int     ft_putstr(char *str);
int     ft_putnbr(int n);
int     ft_puthex(unsigned int n, char specifier);
int     ft_putunsigned(unsigned int n);
int     ft_putptr(void *ptr);

#endif