/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:03:54 by mzeroual          #+#    #+#             */
/*   Updated: 2022/10/19 19:06:38 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_len(long long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
	}
	while (n / 10)
	{
		n /= 10;
		i *= 10;
	}
	return (i);
}

int	ft_putnbr(int n)
{	
	int		num;
	int		i;
	long	nb;

	nb = n;
	i = 0;
	num = check_len(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		i++;
		nb *= -1;
	}
	while (num)
	{
		ft_putchar((nb / num) + '0');
		nb %= num;
		num /= 10;
		i++;
	}
	return (i);
}
