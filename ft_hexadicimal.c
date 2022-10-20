/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadicimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:00:47 by mzeroual          #+#    #+#             */
/*   Updated: 2022/10/20 20:07:44 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_address(long nb, char c)
{
	unsigned long	l;
	int				count;
	int				b;

	l = nb;
	count = 0;
	b = 0;
	if (c == 'p')
	{
		write (1, "0x", 2);
		b = 2;
		c = 'x';
	}
	if (l >= 16)
		count += ft_address(l / 16, c);
	if (c == 'x')
		count += ft_putchar("0123456789abcdef"[l % 16]);
	return (b + count);
}

int	ft_hexadicimal(long nb, int islong, char c)
{
	int				count;
	unsigned int	i;

	if (!islong)
	{
		i = nb;
		count = 0;
		if (i >= 16)
			count += ft_hexadicimal(i / 16, islong, c);
		if (c == 'x')
			count += ft_putchar("0123456789abcdef"[i % 16]);
		else if (c == 'X')
			count += ft_putchar("0123456789ABCDEF"[i % 16]);
		return (count);
	}
	else
		return (ft_address(nb, c));
}
