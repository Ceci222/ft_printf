#include "libftprintf.h"

int ft_puthex(unsigned int n, char specifier)
{
    char            *hexa;
    char            chars[8];//no null character because it's an array not a string #FABADA or 0xFABADA
    int             i;
    int             len;

    if (specifier == 'x')
        hexa = "0123456789abcdef";
    else
        hexa = "0123456789ABCDEF";
    i = 0;
    len = 0;
    if (n == 0)
       return(write(1, "0", 1));
    while (n > 0)
    {
        chars[i++] = hexa[n % 16];
        n = n / 16;
    }
    len = len + i;
    while (i > 0)
        write(1, chars + --i, 1);  // or write(1, chars + i, 1);
    return (len);
}
/*
#include "libftprintf.h"

int ft_puthex(unsigned int n, char specifier)
{
    char            *hexa;
    char            chars[8];//no null character because it's an array not a string #FABADA or 0xFABADA
    int             i;
    int             len;
    unsigned int    num;

    if (specifier == 'x')
        hexa = "0123456789abcdef";
    else
        hexa = "0123456789ABCDEF";
    i = 0;
    len = 0;
    num = 0;
    if (n == 0)
       return(write(1, "0", 1), (1));
    while (n > 0)
    {
        chars[i] = hexa[n % 16];
        num = num / 16;
        i++;
    }
    len = len + i;
    while (i > 0)
    {
        i --;
        write (1, &chars[i], 1);  //write(1, chars + --i, 1); or write(1, chars + i, 1);
    }
    return (len);
}
*/