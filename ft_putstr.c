/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:15:13 by mzeroual          #+#    #+#             */
/*   Updated: 2022/10/19 22:15:42 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		num += ft_putchar(str[i++]);
	return (num);
}
