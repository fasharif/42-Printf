/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <fasharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:23:40 by fasharif          #+#    #+#             */
/*   Updated: 2022/08/14 15:17:51 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long	countdigit(long nb)
{
	int	i;

	i = 1;
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	putnbr(long nbr)
{
	if (nbr > 9)
		putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	ft_itoa(int n)
{
	long	i;
	int		size;

	size = 0;
	i = n;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
		size += 1;
	}
	size += countdigit(i);
	putnbr(i);
	return (size);
}

int	ft_uitoa(int n)
{
	unsigned int	u;
	int				size;

	size = 0;
	u = (unsigned int)n;
	size += countdigit(u);
	putnbr(u);
	return (size);
}
