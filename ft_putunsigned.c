#include "libftprintf.h"

int ft_putunsigned(unsigned int n)
{
    char    characters[11];//int is always a max of 11 digits + 1 for the sign
    unsigned int    num;
    int             i;
    int             len;

    num = n;
    i = 0;
    len = 0;
    if (num == 0)
        return(write(1, "0", 1));
    while (num > 0)
    {
        characters[i] = (num % 10) + '0';
        num = num / 10;
        i++;
    }
    len = len + i;
    while (i > 0)
        write(1, &characters[--i], 1);
    return (len);
}
