/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialtami <gialtami@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:23:19 by gialtami          #+#    #+#             */
/*   Updated: 2026/06/01 16:48:08 by gialtami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_for_type(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (c == '%')
		return (ft_putchar_fd('%', 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(c, va_arg(args, unsigned int)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (2 + ft_puthex(c, va_arg(args, unsigned long)));
	}
	return (0);
}

int	ft_printf(char const *text, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			if (*text)
			{
				counter += ft_check_for_type(*text, args);
				text++;
			}
		}
		else
		{
			counter += ft_putchar_fd(*text, 1);
			text++;
		}
	}
	va_end(args);
	return (counter);
}
