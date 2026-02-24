# include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;
    int i;

    if (!format)
        return (0);//returns an int, so I can't return null
    i = 0;
    count = 0;
    va_start(args, format);

    while(format[i])
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0') // % at the end of string
                break ;
            if (format[i+1] == 'c')
                count += ft_putchar(va_arg(args, int));

            else if (format[i+1] == 's')
                count += ft_putstr(va_arg(args, char *));
            
            else if  (format[i+1] == 'd' || format[i+1] == 'i')
                count += ft_putnbr(va_arg(args, int));

            else if  (format[i+1] == 'x' || format[i+1] == 'X')
                count += ft_puthex(va_arg(args, unsigned int), format[i+1]);
            
            else if  (format[i+1] == 'u')
                count += ft_putunsigned(va_arg(args, unsigned int));

            else if  (format[i+1] == 'p')
                count += ft_putptr(va_arg(args, void *));
            
            else if  (format[i+1] == '%')
                count += write(1, "%", 1);

            i = i + 2;   
        }
        else
        {
            write(1, &format[i], 1);//write(1, format + i, 1);
            i++;
            count ++;
        }

        
    }

    va_end(args);
    return (count);


}