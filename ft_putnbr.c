/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:17:43 by cscaroni          #+#    #+#             */
/*   Updated: 2026/02/24 17:46:47 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	characters[11];
	long	num;
	int		i;
	int		len;

	num = n;
	i = 0;
	len = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		len++;
	}
	if (num == 0)
		return (len + (write(1, "0", 1)));
	while (num > 0)
	{
		characters[i++] = (num % 10) + '0';
		num = num / 10;
	}
	len += i;
	while (i > 0)
		write(1, &characters[--i], 1);
	return (len);
}
/* 

int     ft_putnbr(int n)
{
	char    characters[11];
	//int is always a max of 11 digits + 1 for the sign
	long    num;
	int i;
	int len;

	num = n;
	i = 0;
	len = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num =  -num;
		len++;
	}
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num > 0)
	{
		characters[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	len = len + i;
	while (i > 0)
	{
		i--;
		write(1, &characters[i], 1);
	}
	return (len);
}
 */