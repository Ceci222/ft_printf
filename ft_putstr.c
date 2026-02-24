#include "libftprintf.h"
int ft_putstr(char *s)
{
    int i;

    i = 0;
    if (!s)
        return (write(1, "(null)", 6));//can't return NULL as such 'cause it returns an int
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }

    return (i);
}