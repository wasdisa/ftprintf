/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zozurgan <zozurgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:43:53 by wasdisa           #+#    #+#             */
/*   Updated: 2022/03/29 17:24:44 by zozurgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	kind(char a, va_list args)
{
	int	len;

	len = 0;
	if (a == 'd' || a == 'i')
		len += putnbr(va_arg(args, int ));
	else if (a == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (a == 's')
		len += ft_print_str(va_arg(args, char *));
	else if (a == '%')
		len += ft_putchar('%');
	else if (a == 'u')
		len += unsigned_putnbr(va_arg(args, unsigned int));
	else if (a == 'p')
		len += pointer(va_arg(args, unsigned long), "0123456789abcdef");
	else if (a == 'x')
		len += hex_putnbr(va_arg(args, unsigned int), "0123456789abcdef");
	else if (a == 'X')
		len += hex_putnbr(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		toplam;

	toplam = 0;
	i = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			toplam += kind(s[i + 1], args);
			i++;
		}
		else
			toplam += ft_putchar(s[i]);
		i++;
	}
	return (toplam);
}
