/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <fasharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:58:34 by fasharif          #+#    #+#             */
/*   Updated: 2022/08/15 14:11:35 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	printf("%c \n", 'a');
	printf("%s \n", "abc");
	printf("%p \n", (void *)42);
	printf("%d %i \n", 42, 42);
	printf("%u \n", 42);
	printf("%x %X \n", 42, 42);
	printf("%% \n\n");
	ft_printf("%c \n", 'a');
	ft_printf("%s \n", "abc");
	ft_printf("%p \n", (void *)42);
	ft_printf("%d %i \n", 42, 42);
	ft_printf("%u \n", 42);
	ft_printf("%x %X \n", 42, 42);
	ft_printf("%% \n");
	return (0);
}
