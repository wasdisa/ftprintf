/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasdisa <wasdisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:46:17 by wasdisa           #+#    #+#             */
/*   Updated: 2022/03/28 04:46:18 by wasdisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	kind(char a, va_list args);
int	ft_printf(const char *s, ...);
int	ft_print_str(char *str);
int	ft_strlen(const char *s);
int	hex_putnbr(unsigned int n, char *hex);
int	unsigned_putnbr(unsigned int n);
int	ft_point_print(unsigned long n, char *hex);
int	putnbr(int n);
int	ft_putchar(char c);
int	pointer(unsigned long n, char *hex);
int	ft_putstr(char *str);

#endif
