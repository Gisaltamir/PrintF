/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialtami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 12:59:37 by gialtami          #+#    #+#             */
/*   Updated: 2026/06/01 16:25:01 by gialtami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;

	if (!s)
	{
		write(fd, "(null)", 6);
		return (0);
	}
	if (fd < 0)
		return (0);
	count = ft_strlen(s);
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	return (count);
}
