/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <fasharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:47:30 by fasharif          #+#    #+#             */
/*   Updated: 2022/08/12 16:49:44 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	charcount(unsigned long long nb)
{
	int	i;

	i = 1;
	while (nb >= 16)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

void	putnbr_base(unsigned long long nb, char *base)
{
	if (nb >= 16)
		putnbr_base((nb / 16), base);
	ft_putchar(base[nb % 16]);
}

int	ft_puthex(int i, char x)
{
	char			*base;
	int				sum;
	unsigned int	c;

	base = "0123456789abcdef";
	if (x == 'X')
		base = "0123456789ABCDEF";
	sum = 0;
	c = (unsigned int)i;
	putnbr_base(c, base);
	sum += charcount(c);
	return (sum);
}

int	ft_putpointer(unsigned long long l)
{
	char	*base;
	int		sum;

	base = "0123456789abcdef";
	sum = 0;
	putnbr_base(l, base);
	sum += charcount(l);
	return (sum);
}
