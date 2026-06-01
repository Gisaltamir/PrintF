/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialtami <gialtami@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:04:08 by gialtami          #+#    #+#             */
/*   Updated: 2026/06/01 16:49:28 by gialtami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h> // size_t 
# include <stdlib.h> // malloc
# include <unistd.h> // write
# include <stdarg.h> // va_list

size_t	ft_strlen(const char *s);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_check_for_type(char c, va_list args);
int		ft_printf(char const *text, ...);
int		ft_puthex(char c, unsigned long num);
int		ft_putnbr_unsigned_fd(unsigned int n, int fd);

#endif
