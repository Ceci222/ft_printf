#include "libftprintf.h"

int     ft_putptr(void *ptr)
{
    char            *hexa;
    char            chars[16];//an address of 64 bits has 16 hexa digits max
    int             i;
    int             len;
    uintptr_t       address;

    hexa = "0123456789abcdef";
    address = (uintptr_t)ptr;
    i = 0;
    len = 0;
    if (!address)
        return (write(1, "(nil)", 5));//this is what the original printf returns
    write(1, "0x", 2);//zero
    len = len + 2;
    while (address > 0)
    {
        chars[i++] = hexa[address % 16];
        address = address / 16;
    }
    len = len + i;
    while (i > 0)
        write(1, chars + --i, 1);  // or write(1, chars + i, 1);
    return (len);
}