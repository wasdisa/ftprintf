/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_others.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasdisa <wasdisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:46:52 by wasdisa           #+#    #+#             */
/*   Updated: 2022/03/28 04:46:53 by wasdisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_putnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += putnbr(n / 10);
		i += putnbr(n % 10);
	}
	else
	{
		i += ft_putchar(48 + n);
	}
	return (i);
}

int	hex_putnbr(unsigned int n, char *hex)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += hex_putnbr((n / 16), hex);
	i += ft_putchar(hex[(n % 16)]);
	return (i);
}
