/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:56:45 by mzeroual          #+#    #+#             */
/*   Updated: 2022/10/20 18:03:27 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print(const char s, va_list args)
{
	if (s == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s == 'u')
		return (ft_unsigned(va_arg(args, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s == 'p')
		return (ft_hexadicimal(va_arg(args, unsigned long), 1, s));
	else if (s == 'x' || s == 'X')
		return (ft_hexadicimal(va_arg(args, unsigned int), 0, s));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s == '%')
		return (ft_putchar('%'));
	else
		if (s != '\0')
			return (ft_putchar(s));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += print(str[++i], args);
			i++;
		}
		else
			len += ft_putchar(str[i++]);
	}
	va_end(args);
	return (len);
}
