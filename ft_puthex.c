/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialtami <gialtami@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:43:54 by gialtami          #+#    #+#             */
/*   Updated: 2026/06/01 16:32:06 by gialtami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(char c, unsigned long num)
{
	char	*base;
	int		counter;

	counter = 0;
	if (c == 'p')
		counter += 2;
	if (c != 'X')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
	{
		counter += ft_puthex(c, num / 16);
		counter += ft_puthex(c, num % 16);
	}
	else
	{
		write(1, &base[num], 1);
		counter++;
	}
	return (counter);
}
