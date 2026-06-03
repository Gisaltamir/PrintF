/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialtami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:11:35 by gialtami          #+#    #+#             */
/*   Updated: 2026/06/01 16:50:38 by gialtami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	c;
	int		counter;

	counter = 0;
	if (n >= 10)
		counter += ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	counter++;
	write(fd, &c, 1);
	return (counter);
}
