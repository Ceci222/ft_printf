/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:14:52 by cscaroni          #+#    #+#             */
/*   Updated: 2026/02/24 17:27:19 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (!format)
		return (0);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_format_handler(&format[i + 1], &args);
			i = i + 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count ++;
		}
	}
	va_end(args);
	return (count);
}

int	ft_format_handler(const char *format, va_list *args)
{
	int	count;

	count = 0;
	if (format[0] == '\0')
		return (count);
	if (format[0] == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (format[0] == 's')
		count += ft_putstr(va_arg(*args, char *));
	else if (format[0] == 'd' || format[0] == 'i')
		count += ft_putnbr(va_arg(*args, int));
	else if (format[0] == 'x' || format[0] == 'X')
		count += ft_puthex(va_arg(*args, unsigned int), format[0]);
	else if (format[0] == 'u')
		count += ft_putunsigned(va_arg(*args, unsigned int));
	else if (format[0] == 'p')
		count += ft_putptr(va_arg(*args, void *));
	else if (format[0] == '%')
		count += write(1, "%", 1);
	return (count);
}

/*
int	ft_format_handler(const char *format, va_list *args)
va_list *args so I can move va_args pointer in the actual function
|--> I need to provide *args to 
ft_puthex(va_arg(*args, unsigned int), format[1]);
so it can also change the pointer

&format[i + 1] so it gets the current position of the iterator

i = i + 2;  so I don't process the same items again
*/