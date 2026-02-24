/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaroni <cscaroni@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:17:01 by cscaroni          #+#    #+#             */
/*   Updated: 2026/02/24 17:49:20 by cscaroni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char			characters[11];
	unsigned int	num;
	int				i;
	int				len;

	num = n;
	i = 0;
	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
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
