/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:17:53 by cscaroni          #+#    #+#             */
/*   Updated: 2026/02/24 17:52:52 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	char			*hexa;
	char			chars[16];
	int				i;
	int				len;
	unsigned long	address;

	hexa = "0123456789abcdef";
	address = (unsigned long)ptr;
	i = 0;
	len = 0;
	if (!address)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	len = len + 2;
	while (address > 0)
	{
		chars[i++] = hexa[address % 16];
		address = address / 16;
	}
	len = len + i;
	while (i > 0)
		write(1, chars + --i, 1);
	return (len);
}
